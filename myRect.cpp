#include "myRect.h"
#include <iostream>
#include <algorithm>



Rect::Rect(const Rect &r)
{
		std::cout << "\n.Was called COPY-constructor.\n";
		m_left   = r.m_left;
		m_right  = r.m_right;
		m_top    = r.m_top;
		m_bottom = r.m_bottom;
}


//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//

Rect::Rect(int left, int right, int top, int bottom)
{
	if (left >= 0 && right >= 0 && top >= 0 && bottom >= 0)
	{

		std::cout << "\n.Was called DEFAULT-constructor.\n";
		m_left   = left;
		m_right  = right;
		m_top    = top;
		m_bottom = bottom;
	}
	else
	{
		std::cout << "\nWrong parameter(s).Was called default-constructor.\n";
		m_left   = 0;
		m_right  = 0;
		m_top    = 0;
		m_bottom = 0;
	}
}



//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//



void Rect::InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom)
{
	m_top    += (fl_left+fl_right);
	m_bottom += (fl_left+fl_right);
	m_left   += (fl_top+fl_bottom);
	m_left   += (fl_top+fl_bottom);
}


//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//


void Rect::InflateRect(int length=1, int width=1)
{

	InflateRect(length, length, width, width);

}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//



void Rect::SetAll(int left, int right, int top, int bottom)
{
	
	if (left >= 0 && right >= 0 && top >= 0 && bottom >= 0)
	{
		m_left=left;
		m_right=right;
		m_top=top;
		m_bottom=bottom;
	}
	else {
		std::cout<<"\nUncorrect parameter(s)\n";
	}
	
}





//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




void Rect::PrintAll()
{
	std::cout<<'\n'<<"m_left = "  <<GetLeft()  <<'\n';
	std::cout<<'\n'<<"m_right = " <<GetRight() <<'\n';
	std::cout<<'\n'<<"m_top   = " <<GetTop()   <<'\n';
	std::cout<<'\n'<<"m_bottom = "<<GetBottom()<<'\n';
}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




void Rect::BoundingRect(Rect rFirst, Rect rSecond) //метод класса
{
	int length,  width;

	legth = max(rFirst.Top, rFirst.Bottom) + max(rSecond.Top, rSecond.Bottom);//sum of maximums

	width = max(rFirst.Left, rFirst.Right, rSecond.Left, rSecond.Right);	//single max

	SetAll(width, width, length, length);
}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




Rect BoundingRect2(Rect &rFirst, Rect &rSecond) //глобальная функция 2 
{
	int length,  width;

	legth = max(rFirst.GetTop(), rFirst.GetBottom()) + max(rSecond.GetTop(), rSecond.GetBottom());//sum of maximums

	width = max(rFirst.GetLeft(), rFirst.GetRight(),rSecond.GetLeft(),rSecond.GetRight);	//single max

	return Rect(leght,length, width, width);
}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




Rect BoundingRect(Rect rFirst, Rect rSecond) //глобальная функция
{
	int length,  width;

	legth = max(rFirst.GetTop(), rFirst.GetBottom()) + max(rSecond.GetTop(), rSecond.GetBottom());//sum of maximums

	width = max(rFirst.GetLeft(), rFirst.GetRight(),rSecond.GetLeft(),rSecond.GetRight);	//single max

	return Rect(leght,length, width, width);
}
