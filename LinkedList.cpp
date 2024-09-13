#include <iostream>
#include <vector>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
	num = 0;
	prior = (LinkedList*)malloc(sizeof(LinkedList));
	next = (LinkedList*)malloc(sizeof(LinkedList));
}

LinkedList::LinkedList(int num)
{
	this->num = num;
	prior = (LinkedList*)malloc(sizeof(LinkedList));
	next = (LinkedList*)malloc(sizeof(LinkedList));
}

LinkedList::~LinkedList()
{
	free(prior);
	free(next);
}

LinkedList* LinkedList::addByHead(LinkedList* head, int num)
{
	LinkedList* temp;
	temp->num = num;
	temp->prior = nullptr;
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

LinkedList* LinkedList::addByTail(LinkedList* head, int num)
{
	return nullptr;
}

LinkedList* LinkedList::delNode(LinkedList* head, int num)
{
	return nullptr;
}

LinkedList* LinkedList::changeNode(LinkedList* head, int a, int b)
{
	return nullptr;
}

LinkedList* LinkedList::searchNode(LinkedList* head, int num)
{
	return nullptr;
}

// Í¨ÓÃ´òÓ¡
void LinkedList::print(LinkedList* head)
{
	while (head->next != nullptr)
	{
		cout << head->num;
		head = head->next;
		if (head->next != nullptr)
		{
			cout << " -> ";
		}
	}
	cout << endl;
}
