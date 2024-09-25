#pragma once
#ifndef STRINGSTRUCT_H_
#define STRINGSTRUCT_H_
class StringStruct
{
public :
	/*StringStruct();
	~StringStruct()*/;

	// ×Ö·û´®²Ù×÷·½·¨
	int getLength(char* s);

	// ×Ö·ûÆ¥Åä£¨±©Á¦£©
	int index(char* s, char* t);

	// ×Ö·ûÆ¥Åä£¨KMP£©
	int indexKMP(char* s, char* t);
	int getNext(char* t, int next[], int i, char c);
};
#endif // !STRINGSTRUCT_H_


