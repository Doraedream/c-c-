#include<stdio.h>
#include<string.h>
#include<assert.h>
#define MAX 10

struct peo
{
	char name[10];
	char sex[10];
	int age;
	char tele[20];
	char addr[10];
};//创建每个成员信息

struct contact
{
	struct peo data[MAX];
	int sz;
};//创建通讯录，sz已经存进去的人数

void Initcontact(struct contact* pc);
void AddContact(struct contact* pc);
void DelContact(struct contact* pc);
void SearchContact(struct contact* pc);
void ModifyContact(struct contact* pc);
void ShowContact(struct contact* pc);
void SortContact(struct contact* pc);
int FindByName(struct Contact* pc, char name[]);
