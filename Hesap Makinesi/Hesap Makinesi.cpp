#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float x, y;
	int pause = 1;
	char islem;

	while (pause == 1) {
		cout << "x = ";
		cin >> x;
		cout << endl;

		cout << "y = ";
		cin >> y;
		cout << endl;


		cout << "Toplama = 1" << endl;
		cout << "Cikarma = 2" << endl;
		cout << "Carpma = 3" << endl;
		cout << "Bolme = 4" << endl;
		cout << "Kuvvet Alma = 5" << endl;
		cout << "Cikmak icin herhangi bir þey tuslayin." << endl;
		cout << "Islem Secin = ";
		cin >> islem;
		cout << endl;

		if (islem == '1') {
			cout << x << "+" << y << "=" << x + y << endl;
		}
		else if (islem == '2') {
			cout << x << "-" << y << "=" << x - y << endl;
		}
		else if (islem == '3') {
			cout << x << "*" << y << "=" << x * y << endl;
		}
		else if (islem == '4') {
			if (y == 0) {
				cout << "HATA: Sifira (0) bolemezsin." << endl;
			}
			else {
				cout << x << "/" << y << "=" << x / y << endl;
			}
		}
		else if (islem == '5') {
			cout << pow(x,y) << endl;
		}
		else {
			cout << "Cikis Yapiliyor." << endl;
		}
	}
}