#include "myRect.h"
#include <iostream>
#include <algorithm>

void Rect::normalize()
{
	int x1 = m_x1;
	int y1 = m_y1;
	int x2 = m_x2;
	int y2 = m_y2;

	m_x1 = std::min(x1, x2);
	m_x2 = std::max(x1, x2);
	m_y1 = std::min(y1, y2);
	m_y2 = std::max(y1, y2);
}

Rect::Rect(const Rect &r)
{
		std::cout << "\nWas called COPY-constructor.\n";
		m_x1  = r.m_x1;
		m_y1  = r.m_y1;
		m_x2  = r.m_x2;
		m_y2  = r.m_y2;
}


//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//

Rect::Rect(int x1, int y1, int x2, int y2)
{
		std::cout << "\nWas called DEFAULT-constructor.\n";
		m_x1 = x1;
		m_y1 = y1;
		m_x2 = x2;
		m_y2 = y2;
		normalize();
}



//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//



void Rect::InflateRect(int length_left, int width_up, int length_right, int width_down)
{
	m_x1 -= length_left;
	m_y1 -= width_up;
	m_x2 += length_right;
	m_y2 += width_down;

	normalize();
}


//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//


void Rect::InflateRect(int length, int width)
{

	InflateRect(length/2, length/2, width/2, width/2);
	

}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//



void Rect::SetAll(int x1, int y1, int x2, int y2)
{

		m_x1=x1;
		m_y1=y1;
		m_x2=x2;
		m_y2=y2;

		normalize();
}


//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//



void Rect::BoundingRect(const Rect &rFirst, const Rect &rSecond) //метод класса
{
	int resX1, resY1, resX2, resY2;

	resX1 = std::min(rFirst.m_x1, rSecond.m_x2);
	resY1 = std::min(rFirst.m_y1, rSecond.m_y2);
	resX2 = std::max(rFirst.m_x1, rSecond.m_x2);
	resY2 = std::max(rFirst.m_y1, rSecond.m_y2);

	SetAll(resX1, resY1, resX2, resY2);
}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//


void Rect::GetAll(int &x1, int &y1, int &x2, int &y2) const
{
	x1 = this->m_x1;
	y1 = this->m_y1;
	x2 = this->m_x2;
	y2 = this->m_y2;
}

//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




Rect BoundingRect2(const Rect &rFirst, const Rect &rSecond) //глобальная функция 2 
{
	int resX1, resY1, resX2, resY2;

	int Fx1, Fy1, Fx2, Fy2;
	int Sx1, Sy1, Sx2, Sy2;

	rFirst.GetAll(Fx1, Fy1, Fx2, Fy2);
	rSecond.GetAll(Sx1, Sy1, Sx2, Sy2);

	resX1 = std::min(Fx1, Sx2);
	resY1 = std::min(Fy1, Sy2);
	resX2 = std::max(Fx1, Sx2);
	resY2 = std::max(Fy1, Sy2);

	return Rect(resX1, resY1, resX2, resY2);
}




//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//--//




Rect BoundingRect(Rect rFirst, Rect rSecond) //глобальная функция
{

	int resX1, resY1, resX2, resY2;

	int Fx1, Fy1, Fx2, Fy2;
	int Sx1, Sy1, Sx2, Sy2;

	rFirst.GetAll(Fx1, Fy1, Fx2, Fy2);
	rSecond.GetAll(Sx1, Sy1, Sx2, Sy2);
	resX1 = std::min(Fx1, Sx2);
	resY1 = std::min(Fy1, Sy2);
	resX2 = std::max(Fx1, Sx2);
	resY2 = std::max(Fy1, Sy2);

	return Rect(resX1, resY1, resX2, resY2);
}
