
// Program Kalkulator Sederhana

#include <iostream>

using namespace std;

int main() {
	// Deklarasi
	string kalkulator;
	int number, number_1;
	
	// Codes
	cout << "Selamat datang di Program Kalkulator Sederhana \n \n";
	cout << "Silakan Pilih Character Mu :\n \n";
	cout << "+ | - | * | % | * \n \n";
	cout << "Character Mu: ";
	cin >> kalkulator;
	if (kalkulator == "+") {
		cout << "Masukkan angka pertama : ";
		cin >> number;
		cout << "Masukkan Angka kedua : ";
		cin >> number_1;
		cout << "Berikut adalah Hasilnya : " << number + number_1;
		
	}
	else if (kalkulator == "-") {
		cout << "Masukkan angka pertama : ";
		cin >> number;
		cout << "Masukkan Angka kedua : ";
		cin >> number_1;
		cout << "Berikut adalah Hasilnya : " << number - number_1;
		
	}
	else if (kalkulator == "*") {
		cout << "Masukkan angka pertama : ";
		cin >> number;
		cout << "Masukkan Angka kedua : ";
		cin >> number_1;
		cout << "Berikut adalah Hasilnya : " << number * number_1;
	}
	else if (kalkulator == "%") {
		cout << "Masukkan angka pertama : ";
		cin >> number;
		cout << "Masukkan Angka kedua : ";
		cin >> number_1;
		cout << "Berikut adalah Hasilnya : " << number % number_1;
	}
	return 0;
}
