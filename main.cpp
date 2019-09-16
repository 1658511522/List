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
		cout << "��ʼ��list�ɹ�" << endl;
	}

	cout << "����������Ҫ��ӵ�Ԫ�ظ���:" << endl;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << "�������" << i + 1 << "��Ԫ��" << endl;
		cin >> e;
		if (ListAppend(list, e))
		{
			cout << "��ӳɹ���" << endl;
		}
		else
		{
			cout << "���ʧ�ܣ�" << endl;
		}
	}
	ListPrint(list);

	cout << "����������Ҫ����Ԫ�ص�λ�ú�Ԫ��ֵ:" << endl;
	cin >> num >> e;
	if (ListInsert(list, num, e))
	{
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "����ʧ�ܡ�" << endl;
	}
	ListPrint(list);


	cout << "����������Ҫɾ����Ԫ��λ�ã�" << endl;
	cin >> num;
	if (ListDelete(list, num))
	{
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "ɾ��ʧ�ܡ�" << endl;
	}
	ListPrint(list);

	cout << "����������ɾ��������:" << endl;
	cin >> e;
	if (ListDeleteByValue(list, e))
	{
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "ɾ��ʧ�ܡ�" << endl;
	}

	ListPrint(list);

	DestroyList(list);

	system("pause");
	return 0;
}