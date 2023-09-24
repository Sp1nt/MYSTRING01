#pragma once
#include <iostream>
using namespace std;

class MyString
{
	char* str;
	int length;

public:
	static int AmountOBJ;
	MyString();
	MyString(int);
	MyString(const char*);
	MyString(const MyString& obj);
	~MyString();


	void Input();
	void Print() const;

	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* str);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	char& operator [](int);
	void operator ()();

	void SetStr(const char*);
	void SetLength(int);

	char* GetStr() const;
	int GetLength() const;
};

MyString operator+(const MyString obj, char c);
MyString operator+(char c, const MyString& obj);
MyString operator+(const MyString& obj, int num);
MyString operator+(int num, const MyString& obj);
MyString operator++(MyString& obj, int);
MyString& operator++(MyString& obj);