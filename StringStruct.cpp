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
			// i是当前匹配失败的位置，说明s串和t串已经匹配了n个字符，而这n个字符正好了t串匹配到j的字符个数j + 1个
			// （因为j的下标是从0开始的）,所以本次s串匹配的起始位置就是i - n + 1 == i - (j + 1) + 1 == i - j
			// 所以下一次开始匹配的位置是i - j + 1
			i = i - j + 1;
			// 匹配失败，j从头开始
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