#include "PiyonTehdidi.h"


bool PiyonTehdidi :: beyazPiyonTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column){
	//std::cout<<"Piyona bakiliyor."<<std::endl;
	int sat=row;
	int sut=column;

	if(0 <= sut && sut <=7 && sat<7){
		if(0<=sut-1 && vec[sat+1][sut-1]=="pb"){ //sol alt çaprazdan beyaz piyon tehdidi algýlama
				std::cout<<"Beyaz piyon tehdidi algilandi."<<std::endl;
				return true;
		}
		else if(sut+1<8 && vec[sat+1][sut+1]=="pb"){ //sað alt çaprazdan siyah piyon thedidi algýlama
				std::cout<<"Beyaz piyon tehdidi algilandi."<<std::endl;
				return true;
			}	
		else
			return false;
	}
}

bool PiyonTehdidi::siyahPiyonTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column){
	//std::cout<<"Piyona bakiliyor."<<std::endl;
	int sat=row;
	int sut=column;

	if(0 <= sut && sut <= 7 && 0<sat){
		if(0<=sut-1 && vec[sat-1][sut-1]=="ps"){ //sol üst çaprazdan beyaz piyon tehdidi algýlama
				std::cout<<"siyah piyon tehdidi algilandi."<<std::endl;
				return true;
			}
		else if(sut+1<8 && vec[sat-1][sut+1]=="ps"){ //sað üst çaprazdan siyah piyon thedidi algýlama
				std::cout<<"siyah piyon tehdidi algilandi."<<std::endl;
				return true;
			}
		else 
			return false;
	}

}
