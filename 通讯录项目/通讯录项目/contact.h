#define _CRT_SECURE_NO_WARNINGS
#ifndef _CONTACT_H_
#define  _CONTACT_H_
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAX_NAME 20
#define MAX_TEL 11
#define MAX_ADDR 15
#define MAX_SEX 3
#define MAX_NUMPERSON 1000

#define DEFAULT_SIZE 2
//个人信息
typedef struct PersonInfo
{
	char name[MAX_NAME];
	short age;
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
	char sex[MAX_SEX];
}personInfo;

//通讯录
typedef struct Contact
{
	//personInfo per[MAX_NUMPERSON];
	personInfo *per;
	int capticty;//容量
	int usedSize;//被使用的个数
}Contact;



void InitContact(Contact *pcon);
void AddContact(Contact *pcon);
int SearchContact(Contact *pcon);
void DelContact(Contact *pcon);
void ShowContact(Contact *pcon);
void ClearContact(Contact *pcon);
void SortContact(Contact *pcon);
void DestoryContact(Contact *pcon);
void SaveContact(Contact *pcon);
void LodeContact(Contact *pcon);
#endif