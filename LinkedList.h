#pragma once
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
class LinkedList
{
public:
	LinkedList();
	LinkedList(int num);
	~LinkedList();

	// 单链表用法
	LinkedList* addByHead(LinkedList* head, int num);
	LinkedList* addByTail(LinkedList* head, int num);
	LinkedList* delNode(LinkedList* head, int num);
	LinkedList* changeNode(LinkedList* head, int a, int b);
	LinkedList* searchNode(LinkedList* head, int num);

	void print(LinkedList* head);

private:
	int num;
	LinkedList* prior;
	LinkedList* next;
};
#endif // !LINKEDLIST_H_


