#pragma once
#ifndef STRINGSTRUCT_H_
#define STRINGSTRUCT_H_
using namespace std;
class StringStruct
{
public :
	/*StringStruct();
	~StringStruct()*/;

	// �ַ�����������
	int getLength(char* s);

	// �ַ�ƥ�䣨������
	int index(char* s, char* t);

	// �ַ�ƥ�䣨KMP��
	int indexKMP(char* s, char* t);
	int getStrSize(char* t, int next[], int i, char c);
};
#endif // !STRINGSTRUCT_H_


