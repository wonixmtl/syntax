#include <iostream>
#include <cmath>
#include <vector>
#include "DataStruct.h"

using namespace std;

// 构造和析构
DataStruct::DataStruct()
{
	cout << "DataStruct was created..." << endl;
}

DataStruct::~DataStruct()
{
	cout << "DataStruct was disposed..." << endl;
}

// --------------------------------------------线性表--------------------------------------------

// 1.结构体能创建在方法里面吗？可以，以下为在方法里创建和使用结构体的例子
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



// 2.单链表的创建
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






















































// --------------------------------------------栈、队列和数组--------------------------------------------

// --------------------------------------------树--------------------------------------------

// --------------------------------------------图--------------------------------------------



