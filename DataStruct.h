#pragma once
#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

struct LinkedList
{
	int num;
	LinkedList* next;
};

class DataStruct
{
public:
	DataStruct();
	~DataStruct();

	// ---------链表---------
	void link_1();
	LinkedList* create(int n);
	void print(LinkedList* head);
	
	// ---------栈、队列和数组---------
	
	// ---------树---------
	
	// ---------图---------
private:
	
};

#endif // !DATASTRUCT_H_