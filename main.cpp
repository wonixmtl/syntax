#include <iostream>
#include "DataStruct.h"

using namespace std;


// 所有练习题的主函数，每一个习题封装好自己的方法，在主函数里调用
int main()
{
	cout << "糖易烂，动难胖" << endl;
	DataStruct ds;
	SingleLinkedList* head = (SingleLinkedList*)malloc(sizeof(SingleLinkedList));
	// 创建单链表
	/*head = ds.listCreateByTail(10);
	//head = ds.listCreateByHead(10);
	ds.print(head);

	// 添加测试
	head = ds.listAddByHead(head, 7);
	ds.print(head);

	// 删除测试
	head = ds.listDel(head, 3);
	ds.print(head);

	// 修改测试
	head = ds.listChange(head, 2, 12);
	ds.print(head);*/

	// 链表类
	//ds.singleLinkedList();
	//ds.doubleLinkedList();
	//ds.annularLinkedList();

	// 栈和队列
	//ds.stackTest();
	//ds.queueTest();

	// 串
	//ds.stringTest();
	ds.stringKMP();


	//system("pause");
	return 0;
}