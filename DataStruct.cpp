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

// 2.单链表（结构体）
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
// 单链表测试
void DataStruct::singleLinkedList()
{
	LinkedList list;
	LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		list.singleAddByHead(head, i + 1);
		list.singleAddByTail(head, (i + 1) * (i + 1));
	}

	// 打印创建
	list.singlePrint(head);

	// 打印修改
	list.singleChange(head, 100, 8);
	list.singlePrint(head);

	// 打印删除
	list.singleDel(head, 10);
	list.singlePrint(head);
}

// 双链表测试
void DataStruct::doubleLinkedList()
{
	LinkedList list;
	LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		list.doubleAddByHead(head, i + 1);
		list.doubleAddByTail(head, (i + 1) * (i + 1));
	}

	// 打印创建
	list.doublePrint(head);

	// 打印修改
	list.doubleChange(head, 100, 8);
	list.doublePrint(head);

	// 打印删除
	list.doubleDel(head, 10);
	list.doublePrint(head);
}

// 环形链表测试
void DataStruct::annularLinkedList()
{
	LinkedList list;
	LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
	head->setNum(INT_MAX);
	int n = 10;

	for (int i = 0; i < n; i++)
	{
		list.annularAddByHead(head, i + 1);
		list.annularAddByTail(head, (i + 1) * (i + 1));
	}

	// 打印创建
	list.annularPrint(head);

	// 打印修改
	list.annularChange(head, 100, 8);
	list.annularPrint(head);

	// 打印删除
	list.annularDel(head, 10);
	list.annularPrint(head);
}


























































// --------------------------------------------栈、队列和数组--------------------------------------------

// --------------------------------------------树--------------------------------------------

// --------------------------------------------图--------------------------------------------



