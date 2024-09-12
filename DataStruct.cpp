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
LinkedList* DataStruct::create(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}
	else
	{
		LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
		LinkedList* p = (LinkedList*)malloc(sizeof(LinkedList));

		for (int i = 0; i < n; i++)
		{
			LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
			if (i == 0)
			{
				head->next = temp;
			}
			p->next = temp;
			p = temp;
			temp->num = i + 1;
			temp->next = nullptr;
		}

		return head;
	}
}

void DataStruct::print(LinkedList* head)
{
	if (head != nullptr)
	{
		while (head->next != nullptr)
		{
			cout << head->next->num << endl;
			head = head->next;
		}
	}
}






















































// --------------------------------------------ջ�����к�����--------------------------------------------

// --------------------------------------------��--------------------------------------------

// --------------------------------------------ͼ--------------------------------------------



