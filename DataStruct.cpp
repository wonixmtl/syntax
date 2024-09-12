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




















































// --------------------------------------------栈、队列和数组--------------------------------------------

// --------------------------------------------树--------------------------------------------

// --------------------------------------------图--------------------------------------------



