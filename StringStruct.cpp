#include <iostream>
#include <cstring>
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
	cout << "�ַ�����ȡ: " << tStr << endl;

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
	int sLength = getLength(s);
	int tLength = getLength(t);
	int i = 0, j = 0;

	// ��next����
	int next[255] = { 0 };
	next[1] = t[0] == t[1] ? 1 : 0;
	for (i = 2; i < tLength; i++)
	{
		next[i] = getStrSize(t, next, i, t[i]);
	}
	
	for (i = 0; i < tLength; i++)
	{
		cout << next[i] << (i != tLength - 1 ? ", " : "");
	}
	cout << endl;

	for (i = 0; i < sLength;)
	{
		for (;  j < tLength;)
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
					j++;
				}
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

// �Ƚ���֪��Ӵ�����һ���ַ��͵�ǰ�ַ��Ƿ���ȣ���ȳ��ȼ�һ������ȵݹ�Ѱ����Ӵ�����Ӵ���ֱ�����Ӵ�
int StringStruct::getStrSize(char* t, int next[], int i, char c)
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
		getStrSize(t, next, next[i - 1], c);
	}
}
