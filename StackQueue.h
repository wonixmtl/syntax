#pragma once
#ifndef STACKQUEUE_H_
#define STACKQUEUE_H_
#define MAXSIZE 255
class StackQueue
{
public:
	StackQueue();
	~StackQueue();

	// 栈操作
	void defaultStack(int n);
	bool push(int num);
	int pop();
	int getTop(); // 返回栈顶元素
	int getSize();
	bool isEmptyStack(StackQueue stack);
	void clearStack();

	// 队操作
	void defaultQueue(int n);
	bool input(int num);
	int output();
	int getFront();
	int getRear();


	// 公共操作

	// 经典例题
	/*
		1、进制转换
	*/
	void conversion();

private:
	int arr[MAXSIZE];
	int size;
	int top;
	int front; // 队头
	int rear; // 队尾
};
#endif // !STACKQUEUE_H_