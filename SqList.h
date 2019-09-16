#pragma once

const int MAX_SIZE = 100;

typedef struct
{
	int *elems;
	int length;
	int size;
}SqList;


bool InitList(SqList &L);					//˳����ʼ��											
bool ListAppend(SqList &L, int e);			//˳�����������
bool ListInsert(SqList &L, int i, int e);	//˳����������
bool ListDelete(SqList &L, int i);			//˳�����λ��ɾ������
bool ListDeleteByValue(SqList &L,int e);	//˳�����Ԫ��ֵɾ������
void DestroyList(SqList &L);				//����˳���
void ListPrint(SqList &L);					//˳����ӡ
