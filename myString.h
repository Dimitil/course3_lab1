#pragma once
class MyString
{
	int   m_len;
    	char* m_pStr;	//������-���� ������
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString &MyStr);
	~MyString();
	const *char GetString() const	{if (m_pStr) return const_cast <const*>  m_pStr; else return "#error#"}
	void SetNewString(const char* NewString);
};
