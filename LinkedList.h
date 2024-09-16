#pragma once
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/*
单链表为方便删除和添加结点，取相应位置的前一个结点
双向链表从头部添加时，前驱指针应及时修改，别全指向头结点
尽量不要直接移动头结点指针
*/
class LinkedList
{
public:
	LinkedList();
	LinkedList(int num);
	~LinkedList();

	// 成员变量赋值获取
	int getNum();
	void setNum(int num);

	// 单链表
	//LinkedList* createSingle(int n);
	LinkedList* singleAddByHead(LinkedList* head, int num);
	LinkedList* singleAddByTail(LinkedList* head, int num);
	LinkedList* singleDel(LinkedList* head, int num);
	LinkedList* singleChange(LinkedList* head, int a, int b);
	LinkedList* singleSearch(LinkedList* head, int num);

	// 双链表
	LinkedList* doubleAddByHead(LinkedList* head, int num);
	LinkedList* doubleAddByTail(LinkedList* head, int num);
	LinkedList* doubleDel(LinkedList* head, int num);
	LinkedList* doubleChange(LinkedList* head, int a, int b);
	LinkedList* doubleSearch(LinkedList* head, int num);
	LinkedList* getTail(LinkedList* head);

	// 环形链表
	LinkedList* annularAddByHead(LinkedList* head, int num);
	LinkedList* annularAddByTail(LinkedList* head, int num);
	LinkedList* annularDel(LinkedList* head, int num);
	LinkedList* annularChange(LinkedList* head, int a, int b);
	LinkedList* annularSearch(LinkedList* head, int num);

	// 打印
	void singlePrint(LinkedList* head);
	void doublePrint(LinkedList* head);
	void annularPrint(LinkedList* head);

private:
	int num;
	LinkedList* prior;
	LinkedList* next;
};
#endif // !LINKEDLIST_H_


