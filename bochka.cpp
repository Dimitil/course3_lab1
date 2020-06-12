#include "bochka.h"

bochka::bochka(double V_total, double C_spirt)
{

											//���������� ������������� ������ (� �����)
	m_V_spirt = V_total*C_spirt;	// ���������� ������ � ����� (� �)
	m_V_water = V_total - m_V_spirt;							// ���������� ���� � ����� (� �)

}



void bochka::pereliv(bochka& b)
{
	double dV_spirta = getC_spirt();

	m_V_spirt -= dV_spirta;	//�� ����� ����� ���� ��������. ���������� ������ �����������
	m_V_water -= (1.0 - dV_spirta);	//� ���������� ���� �����������
									// ������������ �������� �� ����������

	b.m_V_spirt += dV_spirta;	 //� ����� ����� ���� �������� + �����
	b.m_V_water += (1.0 - dV_spirta);  //����

}