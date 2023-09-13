#ifndef ATTEHDIDI_H
#define ATTEHDIDI_H

#include <vector>
#include <string>
#include <iostream>

class AtTehdidi 
{
	public:
		AtTehdidi()= delete;
		static bool beyazAtTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); //beyaz at tehdidi var mý?
		static bool siyahAtTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); //siyah at tehdidi var mý?
	protected:
};

#endif
