#pragma once
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/*
������Ϊ����ɾ������ӽ�㣬ȡ��Ӧλ�õ�ǰһ�����
˫�������ͷ�����ʱ��ǰ��ָ��Ӧ��ʱ�޸ģ���ȫָ��ͷ���
������Ҫֱ���ƶ�ͷ���ָ��
*/
class LinkedList
{
public:
	LinkedList();
	LinkedList(int num);
	~LinkedList();

	// ��Ա������ֵ��ȡ
	int getNum();
	void setNum(int num);

	// ������
	//LinkedList* createSingle(int n);
	LinkedList* singleAddByHead(LinkedList* head, int num);
	LinkedList* singleAddByTail(LinkedList* head, int num);
	LinkedList* singleDel(LinkedList* head, int num);
	LinkedList* singleChange(LinkedList* head, int a, int b);
	LinkedList* singleSearch(LinkedList* head, int num);

	// ˫����
	LinkedList* doubleAddByHead(LinkedList* head, int num);
	LinkedList* doubleAddByTail(LinkedList* head, int num);
	LinkedList* doubleDel(LinkedList* head, int num);
	LinkedList* doubleChange(LinkedList* head, int a, int b);
	LinkedList* doubleSearch(LinkedList* head, int num);
	LinkedList* getTail(LinkedList* head);

	// ��������
	LinkedList* annularAddByHead(LinkedList* head, int num);
	LinkedList* annularAddByTail(LinkedList* head, int num);
	LinkedList* annularDel(LinkedList* head, int num);
	LinkedList* annularChange(LinkedList* head, int a, int b);
	LinkedList* annularSearch(LinkedList* head, int num);

	// ��ӡ
	void singlePrint(LinkedList* head);
	void doublePrint(LinkedList* head);
	void annularPrint(LinkedList* head);

private:
	int num;
	LinkedList* prior;
	LinkedList* next;
};
#endif // !LINKEDLIST_H_


