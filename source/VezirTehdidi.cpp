#include "VezirTehdidi.h"

bool VezirTehdidi::beyazVezirTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column)
{
	//std::cout<<"Vezire bakiliyor."<<std::endl;
	
	 int rightsut=column+1;
	 int leftsut=column-1;
	 int upsat=row-1;
	 int downsat=row+1;

	// tasýn saðý kontrol ediliyor
	for(rightsut = column + 1 ;rightsut<=7; rightsut++){
		if(vec[row][rightsut] !="vb" && vec[row][rightsut] != "--" ){
			break; //diðer konumlarý kontrol et
		}
		else if(vec[row][rightsut] =="vb" ){
			return true;// beyaz vezir tehdidi var
		}
		else {
			//nothing
		}

	}
	
	//tasýn solu kontrol ediliyor
	for(leftsut = column - 1 ;0<=leftsut; leftsut--){
		if(vec[row][leftsut] !="vb" && vec[row][leftsut] != "--" ){
			break;	//diðer konumlarý kontrol et
		}
		else if(vec[row][leftsut] =="vb" ){
			return true;  // beyaz vezir tehdidi var
		}
		else {
			//nothing
		}
	}	
	
	//tasýn üstü kontrol ediliyor
	for(upsat = row - 1 ;0<=upsat; 	upsat--){
		if(vec[upsat][column] !="vb" && vec[upsat][column] != "--" ){
			break;
		}
		else if(vec[upsat][column] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}	
		
	//tasýn altý kontol ediliyor			
	for(downsat = row + 1 ;downsat<=7;downsat++){
		if(vec[downsat][column] !="vb" && vec[downsat][column] != "--" ){
			break;
		}
		else if(vec[downsat][column] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}
	
	//tasýn sað üst çaprazý kontrol ediliyor		
	for(rightsut = column + 1, upsat = row - 1 ;rightsut<=7 && 0<=upsat; rightsut++ , upsat--){
		if(vec[upsat][rightsut] !="vb" && vec[upsat][rightsut] != "--" ){
			break;
		}
		else if(vec[upsat][rightsut] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}
		
	//tasýn sol üst çaprazý kontrol ediliyor	
	for(leftsut = column - 1, upsat = row - 1; 0<=leftsut && 0<=upsat; leftsut--,upsat--){
		if(vec[upsat][leftsut] !="vb" && vec[upsat][leftsut] != "--" ){
			break;
		}
		else if(vec[upsat][leftsut] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}
			
	//tasýn sað alt çaprazý kontrol ediliyor
	for	(rightsut = column + 1, downsat = row + 1; downsat<=7 && rightsut<=7; downsat++, rightsut++){
		if(vec[downsat][rightsut] !="vb" && vec[downsat][rightsut] != "--" ){
			break;
		}
		else if(vec[downsat][rightsut] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}
	
	// tasýn sol alt çaprazý kontrol ediliyor
	for(leftsut = column - 1, downsat = row + 1; 0<=leftsut && downsat<=7; leftsut--, downsat++){
		if(vec[downsat][leftsut] !="vb" && vec[downsat][leftsut] != "--" ){
			break;
		}
		else if(vec[downsat][leftsut] =="vb" ){
			return true;
		}
		else {
			//nothing
		}
	}
	return false;
}


bool VezirTehdidi::siyahVezirTehdidi(std::vector<std::vector<std::string>>& vec, int row, int column)
{
	//std::cout<<"Vezire bakiliyor."<<std::endl;
	
	 int rightsut=column+1;
	 int leftsut=column-1;
	 int upsat=row-1;
	 int downsat=row+1;

	// tasýn saðý kontrol ediliyor
	for(;rightsut<=7; rightsut++){
		if(vec[row][rightsut] !="vs" && vec[row][rightsut] != "--" ){
			break;
		}
		else if(vec[row][rightsut] =="vs" ){
			return true;
		}
	
	}
	
	//tasýn solu kontrol ediliyor
	for(;0<=leftsut;leftsut--){
		if(vec[row][leftsut] !="vs" && vec[row][leftsut] != "--" ){
			break;
		}
		else if(vec[row][leftsut] =="vs" ){
			return true;
		}
	}	
	
	//tasýn üstü kontrol ediliyor		
	for(;0<=upsat;upsat--){
		if(vec[upsat][column] !="vs" && vec[upsat][column] != "--" ){
			break;
		}
		else if(vec[upsat][column] =="vs" ){
			return true;
		}
	
	}	
	
	// tasýn altý kontrol ediliyor				
	for(;downsat<=7; downsat++){
		if(vec[downsat][column] !="vs" && vec[downsat][column] != "--" ){
			break;
		}
		else if(vec[downsat][column] =="vs" ){
			return true;
		}
	
	}
		
	// tasýn sað üst çaprazý kontrol ediliyor	
	for(rightsut = column + 1, upsat = row - 1; rightsut<=7 && 0<=upsat; rightsut++, upsat--){
		if(vec[upsat][rightsut] !="vs" && vec[upsat][rightsut] != "--" ){
			break;
		}
		else if(vec[upsat][rightsut] =="vs" ){
			return true;
		}
	}
		
	// tasýn sol üst çaprazý kontrol ediliyor	
	for(leftsut = column - 1, upsat = row - 1; 0<=leftsut && 0<=upsat; leftsut--, upsat--){
		if(vec[upsat][leftsut] !="vs" && vec[upsat][leftsut] != "--" ){
			break;
		}
		else if(vec[upsat][leftsut] =="vs" ){
			return true;
		}
	}
		
	//tasýn sað alt çaprazý kontrol ediliyor	
	for	(rightsut = column + 1,downsat = row + 1; downsat<=7 && rightsut<=7; downsat++,rightsut++){
		if(vec[downsat][rightsut] !="vs" && vec[downsat][rightsut] != "--" ){
			break;
		}
		else if(vec[downsat][rightsut] =="vs" ){
			return true;
		}
	}
	
	//tasýn sol alt çaprazý kontrol ediliyor		
	for(leftsut = column - 1, downsat = row + 1; 0<=leftsut && downsat<=7; 	leftsut--, downsat++){
		if(vec[downsat][leftsut] !="vs" && vec[downsat][leftsut] != "--" ){
			break;
		}
		else if(vec[downsat][leftsut] =="vs" ){
			return true;
		}
	}
	return false;
}


