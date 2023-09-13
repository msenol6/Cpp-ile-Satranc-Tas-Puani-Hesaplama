#ifndef VEZIRTEHDIDI_H
#define VEZIRTEHDIDI_H

#include <vector>
#include <string>
#include <iostream>

class VezirTehdidi 
{
	public:
		VezirTehdidi()= delete; 
		static bool siyahVezirTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); //beyaz taslar icin siyah vezir tehdidi
		static bool beyazVezirTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); //siyah taslar icin beyaz vezir tehdidi
	protected:
};

#endif
