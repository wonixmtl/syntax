#pragma once
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

/*
1��Ϊ�˸�������жϿձ������ɾ����㣬�ڵ�����ĵ�һ�����ǰ��һ������Ľ�㣬��Ϊͷ���
2���������������������Ҫ��ÿһ������ͷ� free(temp)
3��ѭ�������е���ѭ����˫��ѭ�����ֱ�Ϊ�������˫�������������ʽ
4��˫�������ͷ�����ʱ��ǰ��ָ��Ӧ��ʱ�޸ģ���ȫָ��ͷ���
5����Ҫֱ���ƶ�ͷ���ָ��
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

	// �����������ݲ�ʵ�֣�
	void clearList(LinkedList* head); // �������
	int getSize(); // ��ȡ��
	LinkedList* ins(LinkedList* head, int num, int i); // �ӵ�i��λ�ò���

	// ��������
	/*
		1��Լɪ������
		����n��������Բ����Χ���ӵ�s���˿�ʼ����������m���˳��У�
		Ȼ���ٴ���һ���˿�ʼ������ͬ������m���˳��У�����ظ���ֱ
		�������˳���Ϊֹ��Ҫ��������е�˳��
	*/
	void joseph(LinkedList* head, int n, int s, int m);

	/*
		2������ʽ�ӷ�
	*/
	void polyAdd();

	/*
		3�����ļ���
	*/
	void decode();


private:
	int num; // Ԫ��
	int size; // ��
	LinkedList* prior;
	LinkedList* next;
};
#endif // !LINKEDLIST_H_


