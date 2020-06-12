#pragma once
class bochka
{
		double m_V_water;	//количество воды в бочке
		double m_V_spirt;	// количество спирта в бочке

	public:

		double getC_spirt() const {	return m_V_spirt / (m_V_water + m_V_spirt);
		}

		bochka(double V_total, double C_spirt);
		

		void pereliv(bochka& b);
		

};

