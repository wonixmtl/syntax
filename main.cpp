#include <iostream>
#include "DataStruct.h"

using namespace std;


// ������ϰ�����������ÿһ��ϰ���װ���Լ��ķ������������������
int main()
{
	cout << "�����ã�������" << endl;
	DataStruct ds;
	SingleLinkedList* head = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
	// ����������
	head = ds.listCreateByTail(10);
	//head = ds.listCreateByHead(10);
	ds.print(head);

	// ��Ӳ���
	head = ds.listAddByHead(head, 7);
	ds.print(head);

	// ɾ������
	head = ds.listDel(head, 3);
	ds.print(head);

	// �޸Ĳ���
	head = ds.listChange(head, 2, 12);
	ds.print(head);


	system("pause");
	return 0;
}