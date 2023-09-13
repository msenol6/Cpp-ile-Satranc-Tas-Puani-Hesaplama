#include <iostream>	
#include <fstream>
#include <string>
#include <vector>

#include "Calculation.h"
#include "VezirTehdidi.h"
#include "AtTehdidi.h"
#include "PiyonTehdidi.h"
/*
Tahtadaki ta�lar teker teker kar�� renkten at, vezir ya da piyon taraf�ndan tehdit edilip edilmedi�i tespit edilir,
ediliyorsa kendi de�erinin yar�s�n�, edilmiyorsa tam de�erini al�r ve kendi renk score ile toplan�r.

Console kapat�lana kadar('q' ile) input dosyalar� al�n�r, i�lenir ve sonu� sonu�lar.txt dosyas�na yaz�l�r,
Hatal� girilen dosya ad� i�in dosya ad�:Hatal� Dosya ve de�erler: --'dir

Daha sonra di�er ta�lar�n da hesaplanabilmesi amac�yla taslar�n tehdit tespiti classlar ile yap�lm��t�r.
*/

int main(){
	// Output dosyas� a�:
	std::string fileName = "sonu�lar.txt"; 
   	std::ofstream outputFile(fileName);
   	
   	if (!outputFile) {
        std::cerr << "Dosya acma hatasi." << std::endl;
        return 1;
    }
    outputFile << "Tahta Dosya Ad�\t\tSonu�lar" << std::endl;
    
    // Kullan�c�dan input dosyas� al ve i�le:
    std::string input;
    while (true) {
        std::cout << "Bir dosya girin (cikmak icin 'q' basin): ";
        std::getline(std::cin, input);

        if (input == "q") {
            break; // 'q' tu�una bas�ld���nda d�ng�den ��k
        }

		Calculation tas; //Hesaplama i�in obje olu�tur
		tas.CalculationScore(input); //kullan�c�dan istenilen dosya ad�
		
		//Dosya ad� hatal� ise txt dosyas�nda belirt
		if(tas.hataFlag==0)
        	outputFile << input << "\t" << "\t" <<"Siyah: " <<tas.siyahPuan<< "\t" << "\t" <<"Beyaz: "<<tas.beyazPuan<< std::endl;
		else 
			outputFile << "Hatal� Dosya" << "\t" << "\t" <<" --- " << "\t" <<"\t" << " --- " << std::endl;
    }

    outputFile.close();    // Output dosyas�n� kapat
    
    std::cout <<std::endl<< "Sonuclar " << fileName << " dosyasina yazildi." << std::endl;    //Sonu�lar� txt dosyas�na bast�r�ld��� bilgisini ver.

	return 0;
}
