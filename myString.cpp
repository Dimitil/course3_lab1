#include <string>
#include "myString.h"



// Определение конструктора.

MyString::MyString()
{
m_len=0;
m_pStr = new char(0);
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



MyString::~MyString()
{
	if (!m_len)
	{
		delete m_Pstr;
	}

	else
	{
		m_len  = 0;
	 	delete[] m_Pstr;
	}

	m_pStr = nullptr;

}



//--//--//--//--//--//--//-//--//--//--//--//--//--//--//--//--//--//--//--//--



