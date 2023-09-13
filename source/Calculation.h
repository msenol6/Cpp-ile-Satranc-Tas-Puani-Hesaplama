#ifndef CALCULATION_H
#define CALCULATION_H

#include <string>

class Calculation
{
	public:
		float tasDegerleri(std::string taslar); //stringden int deðerlerini çekme
		int CalculationScore(std::string fileName); // beyaz ve siyah score hesaplama
		float tempValue=0; //vektördeki deðerleri çekmek için
		float siyahPuan=0; //siyah score
		float beyazPuan=0; // beyaz score
		int hataFlag=0; // hatalý dosya girme
		
	protected:
		constexpr static int piyon = 1;
		constexpr static int at=3;
		constexpr static int fil=3;
		constexpr static int kale=5;
		constexpr static int vezir=9;
		constexpr static int sah=100;
		
};

#endif
