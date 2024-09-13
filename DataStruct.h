#pragma once
#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

// 单链表
struct SingleLinkedList
{
	int num;
	SingleLinkedList* next;
};

class DataStruct
{
public:
	DataStruct();
	~DataStruct();

	// ---------链表（操作结构体）---------
	void link_1();
	SingleLinkedList* listCreateByTail(int n);
	SingleLinkedList* listCreateByHead(int n);
	SingleLinkedList* listAddByHead(SingleLinkedList* head, int num);
	SingleLinkedList* listAddByTail(SingleLinkedList* head, int num);
	SingleLinkedList* listDel(SingleLinkedList* head, int num);
	SingleLinkedList* listChange(SingleLinkedList* head, int a, int b);
	SingleLinkedList* listSearch(SingleLinkedList* head, int num);
	void print(SingleLinkedList* head);

	// ---------链表（操作类）---------
	void singleLinkedList();
	
	// ---------栈、队列和数组---------
	
	// ---------树---------
	
	// ---------图---------
private:
	
};

#endif // !DATASTRUCT_H_