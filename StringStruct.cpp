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

	string tStr = t;
	tStr = tStr.substr(0, 3);
	cout << "字符串截取: " << tStr << endl;

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
}

int StringStruct::indexKMP(char* s, char* t)
{
	int sLength = getLength(s);
	int tLength = getLength(t);
	int i = 0, j = 0;

	// 求next数组
	int next[255] = { 0 };
	next[1] = t[0] == t[1] ? 1 : 0;
	for (i = 2; i < tLength; i++)
	{
		next[i] = getNext(t, next, i, t[i]);
	}
	
	for (i = 0; i < tLength; i++)
	{
		cout << next[i] << (i != tLength - 1 ? ", " : "");
	}
	cout << endl;

	// 240924BUG_1: 循环匹配串时结束条件，若无&&j<tLength，匹配完成时s串指针不自增，循环一直不退出
	for (i = 0; i < sLength && j < tLength;)
	{
		if (s[i] == t[j])
		{
			i++;
			j++;
		}
		else
		{
			if (j != 0)
			{
				j = next[j - 1];
			}
			else
			{
				i++;
			}
		}
	}

	if (j == tLength)
	{
		return i - j;
	}
	else
	{
		return -1;
	}
}

// 比较已知最长子串的下一个字符和当前字符是否相等，相等长度加一，不相等递归寻找最长子串的最长子串，直到无子串
// 问: AAAA串的next数组该为多少？0, 1, 2, 3; 若最后一个不匹配，j跳到next[i-1]=2, 也就是倒数第二个，不匹配则一直往前退，直到从头
// 关于next数组的具体计算，详见B站视频 BV1PD4y1o7nd、BV1AY4y157yL
int StringStruct::getNext(char* t, int next[], int i, char c)
{
	if (next[i - 1] == 0)
	{
		if (t[0] == c)
		{
			return 1;
		}
		return 0;
	}

	if (t[next[i - 1]] == c)
	{
		return next[i - 1] + 1;
	}
	else
	{
		getNext(t, next, next[i - 1], c);
	}
}
