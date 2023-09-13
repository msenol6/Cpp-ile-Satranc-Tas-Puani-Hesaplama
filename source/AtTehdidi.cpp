#include "AtTehdidi.h"

// L þeklindeki konumlarda karþý tehdid var mý?
//bool döndürerek tehdit var mý yok mu?
bool AtTehdidi::siyahAtTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column) 
{
//	std::cout<<"Ata bakiliyor."<<std::endl;
/*				X1  --  X2 
			  X3 -- --  -- X4
			 -- -- TAS -- --
	          X5 -- --  -- X6
				X7  --  X8  

*/
	int rowAt=row;
	int columnAt=column;
		
	if(0<=rowAt-1 && columnAt-2>=0 && vec[rowAt-1][columnAt-2]=="as"){ // X3: 2sol-1ust çapraz
			return true;
		}
	if(7>=rowAt+1 && columnAt-2>=0 && vec[rowAt+1][columnAt-2]=="as"){ // X5: 2sol-1alt çapraz
			return true;
		}
	if(0<=rowAt-1 && columnAt+2<=7 && vec[rowAt-1][columnAt+2]=="as"){ //X4: 2sag-1ust capraz
			return true;
		}
	if(7>=rowAt+1 && columnAt+2<=7 && vec[rowAt+1][columnAt+2]=="as"){ //X6: 2sag-1alt çapraz
			return true;
		}

	if(0<=rowAt-2 && columnAt-1>=0 && vec[rowAt-2][columnAt-1]=="as"){ // X1: 1sol-2ust çapraz
			return true;
		}
	if(7>=rowAt+2 && columnAt-1>=0 && vec[rowAt+2][columnAt-1]=="as"){// X7: 1sol-2alt çapraz
			return true;
		}
		
	if(0<=rowAt-2 && columnAt+1<=7 && vec[rowAt-2][columnAt+1]=="as"){ // X2: 1sag-2ust çapraz
			return true;
		}
	if(7>=rowAt+2 && columnAt+1<=7 && vec[rowAt+2][columnAt+1]=="as"){ //X8: 1sag-2alt çapraz
			return true;
		}

	else{
			return false; 	//tehdid yok
		}
		
}
	


bool AtTehdidi::beyazAtTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column){
/*				X1  --  X2 
			  X3 -- --  -- X4
			 -- -- TAS -- --
	          X5 -- --  -- X6
				X7  --  X8  

*/
	//std::cout<<"Ata bakiliyor."<<std::endl;
	int rowAt=row;
	int columnAt=column;
		
	if(0<=rowAt-1 && columnAt-2>=0 && vec[rowAt-1][columnAt-2]=="ab"){ // X3: 2sol-1ust çapraz
			return true;
		}
	if(7>=rowAt+1 && columnAt-2>=0 && vec[rowAt+1][columnAt-2]=="ab"){ // X5: 2sol-1alt çapraz
			return true;
		}
	if(0<=rowAt-1 && columnAt+2<=7 && vec[rowAt-1][columnAt+2]=="ab"){ // X4: 2sag-1ust capraz
			return true;
		}
	if(7>=rowAt+1 && columnAt+2<=7 && vec[rowAt+1][columnAt+2]=="ab"){ //X6: 2sag-1alt capraz
			return true;
		}
	if(0<=rowAt-2 && columnAt-1>=0 && vec[rowAt-2][columnAt-1]=="ab"){ // X1: 1sol-2ust çapraz
			return true;
		}
	if(7>=rowAt+2 && columnAt-1>=0 && vec[rowAt+2][columnAt-1]=="ab"){ // X7: 1sol-2alt çapraz
			return true;
		}
		
	if(0<=rowAt-2 && columnAt+1<=7 && vec[rowAt-2][columnAt+1]=="ab"){ // X2: 1sag-2alt çapraz
			return true;
		}
	if(7>=rowAt+2 && columnAt+1<=7 && vec[rowAt+2][columnAt+1]=="ab"){ // X8: 1sag-2ust capraz
			return true;
		}
	else{
			return false; //tehdid yok
		}
		
}
	

