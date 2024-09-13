#include <iostream>
#include <vector>
#include "DataStruct.h"
#include "LinkedList.h"

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

// 2.单链表（操作结构体）
// 单链表创建
SingleLinkedList* DataStruct::listCreateByTail(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}
	else
	{
		SingleLinkedList* head = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));

		for (int i = 0; i < n; i++)
		{
			listAddByTail(head, i + 1);
		}

		return head;
	}
}

// 单链表创建
SingleLinkedList* DataStruct::listCreateByHead(int n)
{
	if (n <= 0)
	{
		return nullptr;
	}
	else
	{
		SingleLinkedList* head = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));

		for (int i = 0; i < n; i++)
		{
			listAddByHead(head, i + 1);
		}

		return head;
	}
}

// 单链表添加（往头部）
SingleLinkedList* DataStruct::listAddByHead(SingleLinkedList* head, int num)
{
	SingleLinkedList* temp = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
	temp->num = num;
	temp->next = nullptr;

	if (head->next == nullptr)
	{
		head->next = temp;
	}
	else
	{
		temp->next = head->next;
		head->next = temp;
	}

	return head;
}

// 单链表添加（往尾部）
SingleLinkedList* DataStruct::listAddByTail(SingleLinkedList* head, int num)
{
	SingleLinkedList* tail = head;
	SingleLinkedList* temp = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
	temp->num = num;
	temp->next = nullptr;

	while (tail->next != nullptr)
	{
		tail = tail->next;
	}
	tail->next = temp;

	return head;
}

// 单链表删除
SingleLinkedList* DataStruct::listDel(SingleLinkedList* head, int num)
{
	SingleLinkedList* prior = listSearch(head, num);
	if (prior != nullptr)
	{
		// 删除尾
		if (prior->next->next == nullptr)
		{
			prior->next = nullptr;
		}
		else
		{
			prior->next = prior->next->next;
		}
	}

	return head;
}

// 单链表修改
SingleLinkedList* DataStruct::listChange(SingleLinkedList* head, int a, int b)
{
	SingleLinkedList* prior = listSearch(head, a);
	if (prior != nullptr)
	{
		prior->next->num = b;
	}

	return head;
}

// 单链表查找
SingleLinkedList* DataStruct::listSearch(SingleLinkedList* head, int num)
{
	if (head != nullptr)
	{
		while (head->next != nullptr)
		{
			if (head->next->num == num)
			{
				return head;
			}
			else
			{
				head = head->next;
			}
		}
	}

	return nullptr;
}

// 单链表打印
void DataStruct::print(SingleLinkedList* head)
{
	if (head != nullptr)
	{
		while (head->next != nullptr)
		{
			cout << head->next->num;
			head = head->next;
			if (head->next != nullptr)
			{
				cout << " -> ";
			}
		}
		cout << endl;
	}
}

// 3.单链表、双向链表、环形链表（类）
// 单链表演示
void DataStruct::singleLinkedList()
{
	LinkedList singleList;
}

























































// --------------------------------------------栈、队列和数组--------------------------------------------

// --------------------------------------------树--------------------------------------------

// --------------------------------------------图--------------------------------------------



