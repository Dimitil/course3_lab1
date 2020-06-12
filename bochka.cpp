#include "bochka.h"

bochka::bochka(double V_total, double C_spirt)
{

											//инициируем концентрацией спирта (в долях)
	m_V_spirt = V_total*C_spirt;	// количество спирта в бочке (в л)
	m_V_water = V_total - m_V_spirt;							// количество воды в бочке (в л)

}



void bochka::pereliv(bochka& b)
{
	double dV_spirta = getC_spirt();

	m_V_spirt -= dV_spirta;	//из бочки взяли литр раствора. количество спирта уменьшилось
	m_V_water -= (1.0 - dV_spirta);	//и количество воды уменьшилось
									// концентрация раствора не изменилась

	b.m_V_spirt += dV_spirta;	 //в бочку влили литр раствора + спирт
	b.m_V_water += (1.0 - dV_spirta);  //вода

}