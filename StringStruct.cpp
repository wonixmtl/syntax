#include <iostream>
#include "StringStruct.h"

using namespace std;

//StringStruct::StringStruct()
//{
//}
//
//StringStruct::~StringStruct()
//{
//}

int StringStruct::getLength(char* s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}

int StringStruct::index(char* s, char* t)
{
	int sLength = getLength(s);
	int tLength = getLength(t);
	int i = 0, j = 0;

	cout << "sLength: " << sLength << endl;
	cout << "tLength: " << tLength << endl;

	for (;i < sLength && j < tLength;)
	{
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			// i�ǵ�ǰƥ��ʧ�ܵ�λ�ã�˵��s����t���Ѿ�ƥ����n���ַ�������n���ַ�������t��ƥ�䵽j���ַ�����j + 1��
			// ����Ϊj���±��Ǵ�0��ʼ�ģ�,���Ա���s��ƥ�����ʼλ�þ���i - n + 1 == i - (j + 1) + 1 == i - j
			// ������һ�ο�ʼƥ���λ����i - j + 1
			i = i - j + 1;
			// ƥ��ʧ�ܣ�j��ͷ��ʼ
			j = 0;
		}
	}
	if (j >= tLength)
	{
		return i - j;
	}
	else
	{
		return -1;
	}
	/*for (int i = 0; i < sLength; )
	{
		for (int j = 0; j < tLength; j++)
		{
			if (s[i] == t[j])
			{
				if (j == tLength - 1)
				{
					return n;
				}
				i++;
			}
			else
			{
				n++;
				i = n;
				break;
			}
		}
	}

	return -1;*/
}

int StringStruct::indexKMP(char* s, char* t)
{
	return 0;
}