#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include "myString.h"



// Определение конструктора.

MyString::MyString()
{
m_len=0;
m_pStr = new char[1];
*m_pStr =  0;
}

//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--

MyString::MyString(const char* str)
{
	m_len  = strlen(str);
	m_pStr = new char[m_len+1];
	strcpy(m_pStr, str);
}
// Определение деструктора


//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--



MyString::~MyString()
{
	m_len = 0;
	delete[] m_pStr;

	m_pStr = nullptr;

}

//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--



MyString::MyString(const MyString &MyStr)
{
	m_len = strlen(MyStr.m_pStr);
	m_pStr=new char[m_len+1];
	strcpy(m_pStr, MyStr.m_pStr);
}




//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--


void MyString::SetNewString(const char*  NewString)
{

	 if(m_len<strlen(NewString))
		{
		delete[] m_pStr;
		m_len = strlen(NewString);
		m_pStr = new char[m_len+1];
		}

	 strcpy(m_pStr, NewString);
	

}
