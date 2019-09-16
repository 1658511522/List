#include "SqList.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	int num = 0;
	int e = 0;
	bool quit = false;
	SqList list;
	if (InitList(list))
	{
		cout << "初始化list成功" << endl;
	}

	cout << "请输入你需要添加的元素个数:" << endl;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "请输入第" << i + 1 << "个元素" << endl;
		cin >> e;
		if (ListAppend(list, e))
		{
			cout << "添加成功！" << endl;
		}
		else
		{
			cout << "添加失败！" << endl;
		}
	}
	ListPrint(list);

	cout << "请输入你需要插入元素的位置和元素值:" << endl;
	cin >> num >> e;
	if (ListInsert(list, num, e))
	{
		cout << "插入成功。" << endl;
	}
	else
	{
		cout << "插入失败。" << endl;
	}
	ListPrint(list);


	cout << "请输入你需要删除的元素位置：" << endl;
	cin >> num;
	if (ListDelete(list, num))
	{
		cout << "删除成功。" << endl;
	}
	else
	{
		cout << "删除失败。" << endl;
	}
	ListPrint(list);

	cout << "请输入你想删除的数据:" << endl;
	cin >> e;
	if (ListDeleteByValue(list, e))
	{
		cout << "删除成功。" << endl;
	}
	else
	{
		cout << "删除失败。" << endl;
	}

	ListPrint(list);

	DestroyList(list);

	system("pause");
	return 0;
}