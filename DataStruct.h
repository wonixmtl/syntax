#pragma once
#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

class DataStruct
{
public:
	DataStruct();
	~DataStruct();

	// ---------链表---------
	void link_1();

	// 单链表
	struct LinkedList
	{
		int num;
		LinkedList* next;
	};

	LinkedList* create(int n);
	void print(LinkedList* list);
	

	// ---------栈、队列和数组---------
	
	// ---------树---------
	
	// ---------图---------
private:
	
};

#endif // !DATASTRUCT_H_