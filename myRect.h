#pragma once
class Rect{
	int m_left, m_right, m_top, m_bottom;

	public:
		Rect(int left=0, int right=0, int top=0, int bottom=0);


		void InflateRect(int fl_left, int fl_right, int fl_top, int fl_bottom);
};