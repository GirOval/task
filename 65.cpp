#include <iostream>

using namespace std;

int main()
{
		int nilai;

		cout <<"Masukkan Nilai:"; cin >>nilai;

		if (nilai >= 90){
				cout <<"A, Mumtaz\n";
		}else if (nilai >= 80){
				cout <<"B, Jayyid Jiddan\n";
		}else if (nilai >= 70){
				cout <<"C, Jayyid\n";
		}else if (nilai >= 60){
				cout <<"D, Maqbul\n";
		}else{
				cout <<"E, Rosib\n";
		}

		return 0;
}
