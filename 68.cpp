#include <iostream>

using namespace std;

int main()
{
	int pilihan, i;
	
	cout <<"Masukkan pilihan(1 / 2):"; cin >>pilihan;

	switch (pilihan){
		case 1 : i = 1;
				 do{
					 cout <<i <<", ";
					 i += 2;
				 }while(i <= 9);
				 break;
	
		case 2 : i = 2;
				 do{
					 cout <<i <<", ";
					 i += 2;
				 }while(i <= 10);
				 break;

		default: cout <<"Pilihan tidak valid!\n";
		break;
		}
		
	return 0;
}
