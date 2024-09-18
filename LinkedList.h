#pragma once
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/*
1、为了更方便的判断空表、插入和删除结点，在单链表的第一个结点前加一个附设的结点，称为头结点
2、清除链表所有内容是需要把每一个结点释放 free(temp)
3、循环链表有单向循环、双向循环，分别为单链表和双向链表的特殊形式
4、双向链表从头部添加时，前驱指针应及时修改，别全指向头结点
5、不要直接移动头结点指针
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

	// 其他操作（暂不实现）
	void clearList(LinkedList* head); // 清空链表
	int getSize(); // 获取表长
	LinkedList* ins(LinkedList* head, int num, int i); // 从第i个位置插入

	// 经典例题
	/*
		1、约瑟夫问题
		设有n个人坐在圆桌周围，从第s个人开始报数，数到m的人出列，
		然后再从下一个人开始报数，同样数到m的人出列，如此重复，直
		到所有人出列为止。要求输出出列的顺序
	*/
	void joseph(LinkedList* head, int n, int s, int m);

	/*
		2、多项式加法
	*/
	void polyAdd();

	/*
		3、电文加密
	*/
	void decode();


private:
	int num; // 元素
	int size; // 表长
	LinkedList* prior;
	LinkedList* next;
};
#endif // !LINKEDLIST_H_


