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

	// ---------����---------
	void link_1();
	LinkedList* create(int n);
	void print(LinkedList* head);
	
	// ---------ջ�����к�����---------
	
	// ---------��---------
	
	// ---------ͼ---------
private:
	
};

#endif // !DATASTRUCT_H_