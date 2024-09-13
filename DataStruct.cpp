#include <iostream>
#include <vector>
#include "DataStruct.h"
#include "LinkedList.h"

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

// 2.�����������ṹ�壩
// ��������
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

// ��������
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

// ��������ӣ���ͷ����
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

// ��������ӣ���β����
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

// ������ɾ��
SingleLinkedList* DataStruct::listDel(SingleLinkedList* head, int num)
{
	SingleLinkedList* prior = listSearch(head, num);
	if (prior != nullptr)
	{
		// ɾ��β
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

// �������޸�
SingleLinkedList* DataStruct::listChange(SingleLinkedList* head, int a, int b)
{
	SingleLinkedList* prior = listSearch(head, a);
	if (prior != nullptr)
	{
		prior->next->num = b;
	}

	return head;
}

// ���������
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

// �������ӡ
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

// 3.������˫���������������ࣩ
// ��������ʾ
void DataStruct::singleLinkedList()
{
	LinkedList singleList;
}

























































// --------------------------------------------ջ�����к�����--------------------------------------------

// --------------------------------------------��--------------------------------------------

// --------------------------------------------ͼ--------------------------------------------



