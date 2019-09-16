#pragma once

const int MAX_SIZE = 100;

typedef struct
{
	int *elems;
	int length;
	int size;
}SqList;


bool InitList(SqList &L);					//顺序表初始化											
bool ListAppend(SqList &L, int e);			//顺序表插添加数据
bool ListInsert(SqList &L, int i, int e);	//顺序表插入数据
bool ListDelete(SqList &L, int i);			//顺序表按照位置删除数据
bool ListDeleteByValue(SqList &L,int e);	//顺序表按照元素值删除数据
void DestroyList(SqList &L);				//销毁顺序表
void ListPrint(SqList &L);					//顺序表打印
