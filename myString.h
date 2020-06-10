#pragma once
class MyString
{
	int   m_len;
    	char* m_pStr;	//строка-член класса
public:
	MyString();
	MyString(const char* str);

	~MyString();
	const *char GetString() const	{if (!m_pStr) return const_cast <const*>  m_pStr; else return "#error#"}
 
};
