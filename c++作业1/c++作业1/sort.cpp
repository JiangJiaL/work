#include "sort.h"
void InsertSort(TMP *src, int n) //直接插入 空间复杂度为 n^2.
{
	int i, j;
	TMP tmp;
	for (i = 1; i < n; i++)
	{
		tmp = src[i];
		for (j = i; j>0 && src[j - 1] > tmp; j--)
		{

			src[j] = src[j - 1];
		}
		src[j] = tmp;
	}
}

void ShellSort(TMP *src, int n) //希尔排序  数组越有序，直接插入排序越块
{
	int i, j, k;
	int gap;
	TMP tmp;
	for (gap = n / 2; gap; gap /= 2)
	{
		for (k = 0; k < gap; k++)
		{
			for (i = gap + k; i < n; i += gap)
			{
				tmp = src[i];
				for (j = i; j >= gap && src[j - gap] > tmp; j -= gap)
				{

					src[j] = src[j - gap];
				}
				src[j] = tmp;
			}
		}

	}

}
void dealMergeSort(TMP *src, TMP *tmp, int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int mid = (start + end) / 2;
	dealMergeSort(src, tmp, start, mid);
	dealMergeSort(src, tmp, mid + 1, end);

	int a = start;
	int b = mid + 1;
	int c = start;
	while (a <= mid && b <= end)
	{
		if (src[a] < src[b])
		{
			tmp[c] = src[a];
			a++;
		}
		else
		{
			tmp[c] = src[b];
			b++;
		}
		c++;
	}
	for (; a <= mid; a++, c++)
	{
		tmp[c] = src[a];
	}
	for (; b <= end; b++, c++)
	{
		tmp[c] = src[b];
	}
	int i;
	for (i = start; i <= end; i++)
	{
		src[i] = tmp[i];
	}
}
void MergeSort(TMP * src, int n) //归并排序 //nlogn
{
	TMP *tmp = (TMP*)malloc(n * sizeof (TMP));
	dealMergeSort(src, tmp, 0, n - 1);
	free(tmp);


}

void swapArgs(TMP *pa, TMP *pb) // 交换函数
{
	TMP tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int HoareWay(TMP *src, int start, int end)
{
	int a = start + 1;
	int b = end - 2;
	int mid = (start + end) / 2;
	if (src[start] > src[mid])
	{
		swapArgs(src + start, src + mid);
	}
	if (src[mid] > src[end])
	{
		swapArgs(src + mid, src + end);
	}
	if (src[start] > src[mid])
	{
		swapArgs(src + start, src + mid);
	}
	if (end - start <= 2)
	{
		return mid;
	}
	swapArgs(src + mid, src + end - 1);
	while (a <= b)
	{
		while (a < end - 1 && src[a] <= src[end - 1])
		{
			a++;
		}
		while (b > 1 && src[b] >= src[end - 1])
		{
			b--;
		}
		if (a == b && (a == 1 || a == end - 1))
		{
			break;
		}
		if (a < b)
		{
			swapArgs(src + a, src + b);
		}

	}
	swapArgs(src + a, src + end - 1);
	return a;
}



int digWay(TMP *src, int start, int end)
{
	int a = start, b = end;
	//int flag = 0;
	TMP tmp = src[start];
	while (1)
	{
		while (b > start && src[b] >= tmp)
		{
			b--;
		}
		if (a < b)
		{
			src[a] = src[b];
		}
		else
		{
			src[a] = tmp;
			return a;
		}
		while (a < end && src[a] <= tmp)
		{
			a++;
		}
		if (a < b)
		{
			src[b] = src[a];
		}
		else
		{
			src[b] = tmp;
			return b;
		}

	}

}
int doublePointerWay2(TMP *src, int start, int end)
{
	int a = start, b = end - 1;
	int mid = (start + end) / 2;
	swapArgs(src + mid, src + end);
	while (a <= b)
	{
		while (a < end && src[a] <= src[end])
		{
			a++;
		}
		while (b > 0 && src[b] >= src[end])
		{
			b--;
		}
		if (a == b && (a == 0 || a == end))
		{
			break;
		}
		if (a < b)
		{
			swapArgs(src + a, src + b);
		}

	}
	swapArgs(src + end, src + a);
	return a;
}
int doublePointerWay1(TMP *src, int start, int end)
{
	int a = start, b = end;
	int flag = 1;
	while (src[b] > src[a])
	{
		b--;
	}
	while (a < b)
	{
		swapArgs(src + b, src + a);
		flag = !flag;
		while (src[b] >= src[a])
		{
			flag ? a++ : b--;
		}

	}

	return flag ? b : a;

}
void dealQuickSort(TMP *src, int start, int end)
{
	int mid;
	if (start + 8 < end)
	{
		mid = digWay(src, start, end);
		dealQuickSort(src, start, mid - 1);
		dealQuickSort(src, mid + 1, end);
	}
	else
	{
		InsertSort(src + start, end - start + 1);
	}
}

void QuickSort(TMP *src, int n) //快排
{
	dealQuickSort(src, 0, n - 1);

}