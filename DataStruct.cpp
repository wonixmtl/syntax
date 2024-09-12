#include <iostream>
#include <cmath>
#include <vector>
#include "DataStruct.h"

using namespace std;

// ���������
DataStruct::DataStruct()
{
	cout << "DataStruct was created..." << endl;
}

DataStruct::~DataStruct()
{
	cout << "DataStruct was disposed..." << endl;
}

// --------------------------------------------���Ա�--------------------------------------------

// 1.�ṹ���ܴ����ڷ��������𣿿��ԣ�����Ϊ�ڷ����ﴴ����ʹ�ýṹ�������
void DataStruct::link_1()
{
	struct linked
	{
		int num;
		linked* next;
	};

	linked list;
	list.num = 1;
	linked list2;
	list2.num = 2;
	list.next = &list2;

	cout << list.next->num << endl;
}

// 2.������Ĵ���
DataStruct::LinkedList* DataStruct::create(int n)
{
	LinkedList* head{};
	LinkedList* temp = nullptr;

	if (n <= 0)
	{
		nullptr;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			LinkedList* list = nullptr;
			if (i == 0)
			{
				head->next = list;
			}
			list->num = i + 1;
			list->next = nullptr;
			temp->next = list;
		}

		return temp;
	}
}

void DataStruct::print(LinkedList* list)
{
	while (list->next != nullptr)
	{
		cout << list->num << endl;
		list = list->next;
	}
}




















































// --------------------------------------------ջ�����к�����--------------------------------------------

// --------------------------------------------��--------------------------------------------

// --------------------------------------------ͼ--------------------------------------------



