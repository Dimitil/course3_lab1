#pragma once
class Rect{
		int m_left, m_right, m_top, m_bottom;

	public:
		Rect(int left=0, int right=0, int top=0, int bottom=0);
		
		Rect(const Rect &r);

		void InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom);

		void InflateRect(int fl_first=1, int fl_second=1);


		void SetAll(int left, int right, int top, int bottom);

		
		int GetLeft()	{return m_left;}

		int GetRight()	{return m_rght}

		int GetBottom()	{return m_bottom;}
		
		int GetTop()	{return m_top;}

		void PrintAll();

		void BoundingRect(Rect rFirst, Rect rSecond); 

		~Rect()  {std::cout<<"\nDestructor was called.\n"}
};

Rect BoundingRect(Rect rFirst, Rect rSecond);
