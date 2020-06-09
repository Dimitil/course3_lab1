#include "myRect.h"
#include <iostream>

Rect::Rect(int left, int right, int top, int bottom)
{
	if (left >= 0 && right >= 0 && top >= 0 && bottom >= 0)
	{
		m_left = left;
		m_right = right;
		m_top = top;
		m_bottom = bottom;
	}
	else
	{
		std::cout << "\nWrong parameter(s).Was called default-constructor.\n";
		m_left = 0;
		m_right = 0;
		m_top = 0;
		m_bottom = 0;
	}
}

void Rect::InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom)
{
	m_left += fl_left;
	m_right += fl_right;
	m_top += fl_top;
	m_bottom += fl_bottom;
}
