#include <iostream>
#include "DataStruct.h"

using namespace std;


// 所有练习题的主函数，每一个习题封装好自己的方法，在主函数里调用
int main()
{
	cout << "糖易烂，动难胖" << endl;
	DataStruct::LinkedList* head;
	DataStruct ds;
	head = ds.create(10);
	ds.print(head);

	system("pause");
	return 0;
}