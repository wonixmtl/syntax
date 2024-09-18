#pragma once
#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_
#define MAXSIZE 255
class StackQueue
{
public:
	StackQueue();
	~StackQueue();

	// ջ����
	void defaultStack(int n);
	bool push(int num);
	int pop();
	int getTop(); // ����ջ��Ԫ��
	int getSize();
	bool isEmptyStack(StackQueue stack);
	void clearStack();

	// �Ӳ���
	void defaultQueue(int n);
	bool input(int num);
	int output();
	int getFront();
	int getRear();


	// ��������

	// ��������
	/*
		1������ת��
	*/
	void conversion();

private:
	int arr[MAXSIZE];
	int size;
	int top;
	int front; // ��ͷ
	int rear; // ��β
};
#endif // !STACKQUEUE_H_