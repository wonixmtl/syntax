#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	num = 0;
	prior = (LinkedList*)malloc(sizeof(LinkedList));
	next = (LinkedList*)malloc(sizeof(LinkedList));

	cout << "list has created..." << endl;
}

LinkedList::LinkedList(int num)
{
	this->num = num;
	prior = (LinkedList*)malloc(sizeof(LinkedList));
	next = (LinkedList*)malloc(sizeof(LinkedList));

	cout << "list has created..." << endl;
}

LinkedList::~LinkedList()
{
	free(prior);
	free(next);
	cout << "linkedList is over..." << endl;
}

int LinkedList::getNum()
{
	return this->num;
}

void LinkedList::setNum(int num)
{
	this->num = num;
}

//LinkedList* LinkedList::createSingle(int n)
//{
//	if (n <= 0)
//	{
//		return nullptr;
//	}
//	else
//	{
//		LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
//		for (int i = 0; i < n; i++)
//		{
//			addByHead(head, i + 1);
//			addByTail(head, (i + 1) * (i + 1));
//		}
//
//		return head;
//	}
//}

// 单链表
LinkedList* LinkedList::singleAddByHead(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = nullptr;
	temp->next = nullptr;

	if (head->next != nullptr)
	{
		temp->next = head->next;
	}
	head->next = temp;

	return head;
}

LinkedList* LinkedList::singleAddByTail(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = nullptr;
	temp->next = nullptr;
	LinkedList* p = head;

	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = temp;

	return head;
}

LinkedList* LinkedList::singleDel(LinkedList* head, int num)
{
	LinkedList* temp = singleSearch(head, num);
	
	if (temp != nullptr)
	{
		temp->next = temp->next->next;
	}
	return head;
}

LinkedList* LinkedList::singleChange(LinkedList* head, int a, int b)
{
	LinkedList* temp = singleSearch(head, a);
	temp->next->num = b;

	return head;
}

LinkedList* LinkedList::singleSearch(LinkedList* head, int num)
{
	LinkedList* temp = head;
	while (temp->next != nullptr)
	{
		if (temp->next->num == num)
		{
			return temp;
		}
		temp = temp->next;
	}

	return nullptr;
}

// 双链表
LinkedList* LinkedList::doubleAddByHead(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = head;
	temp->next = nullptr;
	if (head->next != nullptr)
	{
		temp->next = head->next;
		head->next->prior = temp;
	}
	head->next = temp;

	return head;
}

LinkedList* LinkedList::doubleAddByTail(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = nullptr;
	temp->next = nullptr;

	LinkedList* p = head;
	while (p->next != nullptr)
	{
		p = p->next;
	}
	p->next = temp;
	temp->prior = p;

	return head;
}

LinkedList* LinkedList::doubleDel(LinkedList* head, int num)
{
	LinkedList* temp = doubleSearch(head, num);
	if (temp != nullptr)
	{
		temp->next->prior = temp->prior;
		temp->prior->next = temp->next;
	}

	return head;
}

LinkedList* LinkedList::doubleChange(LinkedList* head, int a, int b)
{
	LinkedList* temp = doubleSearch(head, a);
	if (temp != nullptr)
	{
		temp->num = b;
	}

	return head;
}

LinkedList* LinkedList::doubleSearch(LinkedList* head, int num)
{
	LinkedList* temp = head->next;
	while (temp != nullptr)
	{
		if (temp->num == num)
		{
			return temp;
		}
		temp = temp->next;
	}

	return temp;
}

LinkedList* LinkedList::getTail(LinkedList* head)
{
	LinkedList* tail = head;
	while (tail->next != nullptr)
	{
		tail = tail->next;
	}
	return tail;
}

// 双向环形链表
LinkedList* LinkedList::annularAddByHead(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = head;
	temp->next = temp;

	if (head->next == nullptr)
	{
		head->next = temp;
		temp->next = head;
		head->prior = temp;
	}
	else
	{
		temp->next = head->next;
		head->next->prior = temp;
		head->next = temp;
	}

	return head;
}

LinkedList* LinkedList::annularAddByTail(LinkedList* head, int num)
{
	LinkedList* temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->num = num;
	temp->prior = temp;
	temp->next = head;

	if (head->next == nullptr)
	{
		head->next = temp;
		head->prior = temp;
		temp->prior = head;
	}
	else
	{
		temp->prior = head->prior;
		head->prior->next = temp;
		head->prior = temp;
	}

	return head;
}

LinkedList* LinkedList::annularDel(LinkedList* head, int num)
{
	LinkedList* temp = annularSearch(head, num);

	if (temp != nullptr)
	{
		temp->prior->next = temp->next;
		temp->next->prior = temp->prior;
	}

	return head;
}

LinkedList* LinkedList::annularChange(LinkedList* head, int a, int b)
{
	LinkedList* temp = annularSearch(head, a);

	if (temp != nullptr)
	{
		temp->num = b;
	}

	return head;
}

LinkedList* LinkedList::annularSearch(LinkedList* head, int num)
{
	LinkedList* temp = head->prior;
	
	while (temp != nullptr)
	{
		if (temp->num == num)
		{
			return temp;
		}
		temp = temp->prior;
	}

	return nullptr;
}

// 单向打印
void LinkedList::singlePrint(LinkedList* head)
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

// 双向打印
void LinkedList::doublePrint(LinkedList* head)
{
	LinkedList* temp = head;
	cout << "从头打印: " << endl;
	while (temp->next != nullptr)
	{
		cout << temp->next->num;
		temp = temp->next;
		if (temp->next != nullptr)
		{
			cout << " -> ";
		}
	}

	cout << endl << "从尾打印: " << endl;

	while (temp->prior != nullptr)
	{
		cout << temp->num;
		temp = temp->prior;
		if (temp->prior != nullptr)
		{
			cout << " -> ";
		}
	}
	cout << endl;
}

// 环形打印
void LinkedList::annularPrint(LinkedList* head)
{
	LinkedList* temp = head->next;

	cout << "顺时针打印: " << endl;
	if (temp != nullptr)
	{
		while (temp->num != INT_MAX)
		{
			cout << temp->num;
			temp = temp->next;
			if (temp->num != INT_MAX)
			{
				cout << " -> ";
			}
		}
		cout << endl << "逆时针打印: " << endl;
		temp = temp->prior;
		while (temp->num != INT_MAX)
		{
			cout << temp->num;
			temp = temp->prior;
			if (temp->num != INT_MAX)
			{
				cout << " -> ";
			}
		}
		cout << endl;
	}
	
}
