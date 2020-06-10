#pragma once
class MyString
{
	int   m_len;
    	char* m_pStr;	//строка-член класса
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString &MyStr);
	~MyString();
	char* GetString() const {return m_pStr;}
	void SetNewString(const char* NewString);
};
