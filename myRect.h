#pragma once
#include <iostream>

class Rect{
		int m_x1, m_y1, m_x2, m_y2;

	public:
		Rect(int x1=0, int y1=0, int x2=10, int y2=10);
		
		Rect(const Rect &r);


		void normalize();


		void InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom);

		void InflateRect(int length=1, int width=1);


		void SetAll(int left, int right, int top, int bottom);

		void GetAll(int& x1, int& y1, int& x2, int& y2) const;

		void BoundingRect(const Rect &rFirst, const Rect &rSecond); 

		~Rect() { std::cout << "\nDestructor was called.\n"; }
};

Rect BoundingRect(const Rect rFirst, const Rect rSecond);
Rect BoundingRect2(const Rect &rFirst, const Rect &rSecond);