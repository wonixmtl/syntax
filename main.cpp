#include <iostream>
#include "DataStruct.h"

using namespace std;


// ������ϰ�����������ÿһ��ϰ���װ���Լ��ķ������������������
int main()
{
	cout << "�����ã�������" << endl;
	DataStruct ds;
	LinkedList* head = (LinkedList*)malloc(sizeof(LinkedList));
	head = ds.create(10);
	ds.print(head);

	system("pause");
	return 0;
}