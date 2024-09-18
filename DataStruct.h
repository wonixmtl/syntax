#pragma once
#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

// ������
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

	// ---------�����ṹ�壩---------
	void link_1();
	SingleLinkedList* listCreateByTail(int n);
	SingleLinkedList* listCreateByHead(int n);
	SingleLinkedList* listAddByHead(SingleLinkedList* head, int num);
	SingleLinkedList* listAddByTail(SingleLinkedList* head, int num);
	SingleLinkedList* listDel(SingleLinkedList* head, int num);
	SingleLinkedList* listChange(SingleLinkedList* head, int a, int b);
	SingleLinkedList* listSearch(SingleLinkedList* head, int num);
	void print(SingleLinkedList* head);

	// ---------�����ࣩ---------
	void singleLinkedList();
	void doubleLinkedList();
	void annularLinkedList();
	
	// ---------ջ�����к�����---------
	void stackTest();
	void queueTest();
	
	// ---------��---------
	
	// ---------ͼ---------
private:
	
};

#endif // !DATASTRUCT_H_