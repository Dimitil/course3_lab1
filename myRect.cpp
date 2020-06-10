#include "myRect.h"
#include <iostream>

Rect::Rect(const Rect &r)
{
		std::cout << "\n.Was called COPY-constructor.\n";
		m_left   = r.m_left;
		m_right  = r.m_right;
		m_top    = r.m_top;
		m_bottom = r.m_bottom;
}

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

void Rect::InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom)
{
	m_top    += (fl_left+fl_right);
	m_bottom += (fl_left+fl_right);
	m_left   += (fl_top+fl_bottom);
	m_left   += (fl_top+fl_bottom);
}


void Rect::InflateRect(int fl_first=1, int fl_second=1)
{

	InflateRect(fl_first, fl_second, 0, 0);

}

void Rect::SetAll(int left, int right, int top, int bottom)
{
	if
	m_left=left;
	m_right=right;
	m_top=top;
	m_bottom=bottom;
}

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


void Rect::GetAll()
{
	std::cout<<'\n'<<"m_left = "  <<m_left<<'\n';
	std::cout<<'\n'<<"m_right = " <<m_right<<'\n';
	std::cout<<'\n'<<"m_top   = " <<m_top<<'\n';
	std::cout<<'\n'<<"m_bottom = "<<m_bottom<<'\n';
}
