#include <iostream>

using namespace std;

int main()
{
		int nomor;

		cout <<"Masukkan Nomor:"; cin >>nomor;

		switch (nomor){
				case 1 : cout <<"Anda memilih angka 1\n";
								 break;

				case 2 : cout <<"Anda memilih angka 2\n";
								 break;

				case 3 : cout <<"Anda memilih angka 3\n";
								 break;

				default: cout <<"Pilihan default terpilih\n";
								 break;
		}

		return 0;
}
