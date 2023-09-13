#include <iostream>	
#include <fstream>
#include <string>
#include <vector>

#include "Calculation.h"
#include "VezirTehdidi.h"
#include "AtTehdidi.h"
#include "PiyonTehdidi.h"
/*
Tahtadaki taþlar teker teker karþý renkten at, vezir ya da piyon tarafýndan tehdit edilip edilmediði tespit edilir,
ediliyorsa kendi deðerinin yarýsýný, edilmiyorsa tam deðerini alýr ve kendi renk score ile toplanýr.

Console kapatýlana kadar('q' ile) input dosyalarý alýnýr, iþlenir ve sonuç sonuçlar.txt dosyasýna yazýlýr,
Hatalý girilen dosya adý için dosya adý:Hatalý Dosya ve deðerler: --'dir

Daha sonra diðer taþlarýn da hesaplanabilmesi amacýyla taslarýn tehdit tespiti classlar ile yapýlmýþtýr.
*/

int main(){
	// Output dosyasý aç:
	std::string fileName = "sonuçlar.txt"; 
   	std::ofstream outputFile(fileName);
   	
   	if (!outputFile) {
        std::cerr << "Dosya acma hatasi." << std::endl;
        return 1;
    }
    outputFile << "Tahta Dosya Adý\t\tSonuçlar" << std::endl;
    
    // Kullanýcýdan input dosyasý al ve iþle:
    std::string input;
    while (true) {
        std::cout << "Bir dosya girin (cikmak icin 'q' basin): ";
        std::getline(std::cin, input);

        if (input == "q") {
            break; // 'q' tuþuna basýldýðýnda döngüden çýk
        }

		Calculation tas; //Hesaplama için obje oluþtur
		tas.CalculationScore(input); //kullanýcýdan istenilen dosya adý
		
		//Dosya adý hatalý ise txt dosyasýnda belirt
		if(tas.hataFlag==0)
        	outputFile << input << "\t" << "\t" <<"Siyah: " <<tas.siyahPuan<< "\t" << "\t" <<"Beyaz: "<<tas.beyazPuan<< std::endl;
		else 
			outputFile << "Hatalý Dosya" << "\t" << "\t" <<" --- " << "\t" <<"\t" << " --- " << std::endl;
    }

    outputFile.close();    // Output dosyasýný kapat
    
    std::cout <<std::endl<< "Sonuclar " << fileName << " dosyasina yazildi." << std::endl;    //Sonuçlarý txt dosyasýna bastýrýldýðý bilgisini ver.

	return 0;
}
