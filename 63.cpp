#include <iostream>

using namespace std;

int main()
{
		int nilai, input;
		
		cout <<"Masukkan angka pertama :"; cin >>input;
		nilai = input;
		cout <<"Masukkan angka kedua :"; cin >>input;
		nilai += input; //Sama seperti "nilai = nilai + input;

		cout <<"Hasilnya adalah :" <<nilai <<endl;

		return 0;
}
