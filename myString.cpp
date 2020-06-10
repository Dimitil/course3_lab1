#include <string>
#include "myString.h"



// Определение конструктора.

MyString::MyString()
{
m_len=0;
m_pStr = new char[2];
*m_pStr=" \0";
}

//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--

MyString::MyString(const char* str)
{
	m_len  = strlen(str);
	m_pStr = new char[m_len+1];
	strcpy(str, m_pStr);
}
// Определение деструктора



//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--



MyString::MyString(const MyString &MyStr)
{
	m_len=MyStr.m_len;
	m_pStr=new char[len+1];
	strcpy(MyStr.m_pStr, m_pStr);

}


//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--



MyString::~MyString()
{
		m_len  = 0;
	 	delete[] m_Pstr;

		m_pStr = nullptr;

}



//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--


void MyString::SetNewString(const char* NewString)
{
	m_len=strlen(NewString);
	
	delete[] m_pStr;
	m_pStr = new char[m_len+1];

	strcpy(NewString, m_pStr);

}
