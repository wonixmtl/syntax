#pragma once
#ifndef DATASTRUCT_H_
#define DATASTRUCT_H_

class DataStruct
{
public:
	DataStruct();
	~DataStruct();

	// ---------����---------
	void link_1();

	// ������
	struct LinkedList
	{
		int num;
		LinkedList* next;
	};

	LinkedList* create(int n);
	void print(LinkedList* list);
	

	// ---------ջ�����к�����---------
	
	// ---------��---------
	
	// ---------ͼ---------
private:
	
};

#endif // !DATASTRUCT_H_