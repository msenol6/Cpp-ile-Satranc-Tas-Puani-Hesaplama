#ifndef PIYONTEHDIDI_H
#define PIYONTEHDIDI_H

#include <vector>
#include <string>
#include <iostream>


class PiyonTehdidi 
{
public:
	PiyonTehdidi() = delete; // prevent construction of this class bc of pure static
	static bool beyazPiyonTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); // siyah piyon tehdidi var mý?
	static bool siyahPiyonTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column); // beyaz piyon tehdidi var mý?
protected:
};

#endif
