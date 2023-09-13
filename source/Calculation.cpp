#include <iostream>	
#include <fstream>
#include <string>
#include <vector>

#include "Calculation.h"
#include "VezirTehdidi.h"
#include "AtTehdidi.h"
#include "PiyonTehdidi.h"

// txt dosyasýndaki verileri okurken deðeleri al
float Calculation:: tasDegerleri(std::string taslar){
	if(taslar[0]=='a')
		tempValue=at;
	else if(taslar[0]=='p')
		tempValue=piyon;
	else if(taslar[0]=='f')
		tempValue=fil;
	else if(taslar[0]=='k')
		tempValue=kale;
	else if(taslar[0]=='v')
		tempValue=vezir;
	else if(taslar[0]=='s')
		tempValue=sah;
	
	return tempValue; // matris[row][column] deðerini alabilmek için		
}

int Calculation:: CalculationScore(std::string fileName){
	hataFlag=0; // hatalý dosya girme bayraðý
	std::ifstream dosya(fileName); // Okunacak dosyanýn adýný burada belirtin
    if (!dosya) {
        std::cerr << "Dosya acma hatasi." <<std::endl<<std::endl;
        hataFlag=1; // hatalý dosya ismi girildi
        return 0;
    }

    std::vector<std::vector<std::string>> matris; //txt dosyasýndaki verileri 2D vektör oluþtur
    std::string satir;

	// dosyadaki space ile ayrýlmýþ verileri vektöre at
    while (std::getline(dosya, satir)) {
        std::vector<std::string> sutunlar;
        size_t baslangic = 0;
        size_t bulunan;

        while ((bulunan = satir.find(' ', baslangic)) != std::string::npos) {
            std::string sutun = satir.substr(baslangic, bulunan - baslangic);
            sutunlar.push_back(sutun);
            baslangic = bulunan + 1;
        }

        std::string sutun = satir.substr(baslangic);
        sutunlar.push_back(sutun);
        matris.push_back(sutunlar);
    }

    // Dosya kapatýlýr
    dosya.close();

	for(int row=0; row<8; row++){
		for(int column=0; column<8; column++){
			std::cout<<std::endl<<matris[row][column]<<std::endl; 
			// Siyah taþlar için beyaz tas tehdidi:
			if(matris[row][column][1]=='s'){
				//Herhangi bir tehdit var mý?
				if(PiyonTehdidi::beyazPiyonTehdidi(matris, row, column) || AtTehdidi::beyazAtTehdidi(matris, row, column) || VezirTehdidi::beyazVezirTehdidi(matris, row, column)){
					siyahPuan+=tasDegerleri(matris[row][column])/2; // Yarým puan deðeri ile devam et
					std::cout<<"Beyaz tehdit algýlandý."<<std::endl;
				}
				else{
					siyahPuan+=tasDegerleri(matris[row][column]); // Tam puan deðeri ile devam et
					std::cout<<"Beyaz tehdit yok."<<std::endl;
				}
			}
			
			// Beyaz taþlar için siyah taþ tehdidi:
			else if(matris[row][column][1]=='b'){
				if(PiyonTehdidi::siyahPiyonTehdidi(matris, row, column) || AtTehdidi::siyahAtTehdidi(matris, row, column) || VezirTehdidi::siyahVezirTehdidi(matris, row, column)) {
					beyazPuan+=tasDegerleri(matris[row][column])/2; // Yarým puan deðeri ile devam et
					std::cout<<"Siyah tehdid algýlandý."<<std::endl;
				}
				
				else{
					beyazPuan+=tasDegerleri(matris[row][column]);
					std::cout<<"Siyah tehdid yok."<<std::endl; // Tam puan deðeri ile devam et
				}
			
			} else {
				std::cout << "Herhangi bir tas yok." << std::endl; // Herhangi bir tas yok.
			}
		}

	}
	
	std::cout<<std::endl<<"Beyaz Puan: "<<beyazPuan<<std::endl; //Toplam beyaz score
	std::cout<<"SiyahPuan: "<<siyahPuan<<std::endl<<std::endl; // Toplam siyah score
	
	return 1;
}

