#include <iostream>
#include <vector>
#include "DataStruct.h"
#include "LinkedList.h"
#include "StackQueue.h"
#include "StringStruct.h"

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

// 2.�������ṹ�壩
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
// ���������
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

	// ��ӡ����
	list.singlePrint(head);

	// ��ӡ�޸�
	list.singleChange(head, 100, 8);
	list.singlePrint(head);

	// ��ӡɾ��
	list.singleDel(head, 10);
	list.singlePrint(head);
}

// ˫�������
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

	// ��ӡ����
	list.doublePrint(head);

	// ��ӡ�޸�
	list.doubleChange(head, 100, 8);
	list.doublePrint(head);

	// ��ӡɾ��
	list.doubleDel(head, 10);
	list.doublePrint(head);
}

// �����������
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

	// ��ӡ����
	list.annularPrint(head);

	// ��ӡ�޸�
	list.annularChange(head, 100, 8);
	list.annularPrint(head);

	// ��ӡɾ��
	list.annularDel(head, 10);
	list.annularPrint(head);
}

// --------------------------------------------ջ�����к�����--------------------------------------------

// ջ->�Ƚ����
void DataStruct::stackTest()
{
	StackQueue stack;

	stack.defaultStack(10);

	cout << "ջ�ߴ�: " << stack.getSize() << endl;

	int temp = stack.pop();

	while (temp != -1)
	{
		cout << temp << endl;
		temp = stack.pop();
	}

	cout << "ջ��ָ�룺" << stack.getTop() << endl;
}

void DataStruct::queueTest()
{
	StackQueue queue;
	queue.defaultQueue(10);

	cout << "���гߴ�: " << queue.getSize() << endl;

	int temp = queue.output();
	while (temp != -1)
	{
		cout << temp << endl;
		temp = queue.output();
	}

	cout << "����ָ��: " << queue.getFront() << ", " << queue.getRear() << endl;
	cout << "���гߴ�: " << queue.getSize() << endl;

}

// --------------------------------------------��--------------------------------------------

// 1���ַ���ƥ��
void DataStruct::stringTest()
{
	if (true)
	{
		cout << "test" << endl;
	}
	char s[] = "abbcabcbbbabbacbacbbbcabbacbbbacbcbbbbabcbbcbabbcbabbcbcbababbcbbcabbcbcbbcbabcbbcbcabbababcbbabcbabcbabcbcbbabbcbabcbabcbbabcbabbcbabcbbabbcbbabcbabbcbbabcbbacbbabcbbabcbbabbcbbbabcbabbcbabcbbabcbbbbbcabcbbabcaabbacbaacbcabcbabbcbbaccbac";
	char t[] = "bbaccbac";  // "abcbb";"bbacb"
	StringStruct str;
	int index = str.index(s, t);
	char* r = (char*)malloc(sizeof(char));
	if (index != -1)
	{
		r = s + index;
	}

	cout << t << endl;
	cout << index << ", " << r << endl;
	free(r);
}

void DataStruct::stringKMP()
{
	StringStruct str;
	char s[] = "abbcabcbbbabbacbacbbbcabbacbbbacbcbbbbabcbbcbabbcbabbcbcbababbcbbcabbcbcbbcbabcbbcbcabbababcbbabcbabcbabcbcbbabbcbabcbabcbbabcbabbcbabcbbabbcbbabcbabbcbbabcbbacbbabcbbabcbbabbcbbbabcbabbcbabcbbabcbbbbbcabcbbabcaabbacbaacbcabcbabbcbbaccbac";
	char t[] = "bbaccbac";  // "abcbb";"bbacb"
	int index = str.indexKMP(s, t);
	string ss = s;
	ss = ss.substr(index, strlen(t));

	cout << "ԭ��: " << t << endl;
	cout << index << ", " << ss << endl;
}

// --------------------------------------------��--------------------------------------------

// --------------------------------------------ͼ--------------------------------------------



