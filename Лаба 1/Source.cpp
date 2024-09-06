#include <iostream>
using namespace std;



void main() 
{
	setlocale(LC_ALL, "ru-RU");
	int a, b, c;
	bool isCorrect;
	isCorrect = false;
	while (!isCorrect) {
		cout << "Введите число не привышающее 10^9\n" ;
		cin >> a;
		if (cin.fail()|| a<0 || a>1000000001) {
			if (a > 1000000001) {
				cout << "dohui\n";

			}
			else if (a < 0) {
				cout << "debil?\n";
			}
			else cout << "HUINA" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else {
			isCorrect = true;
			cin.ignore(INT_MAX, '\n');
		}
	}
	isCorrect = false;
	while (!isCorrect) {
		cout << "Введите число не привышающее 10^9\n";
		cin >> b;
		if (cin.fail() || b < 0 || b>1000000001) {
			if (b > 1000000001) {
				cout << "dohui\n";

			}
			else if (b < 0) {
				cout << "debil?\n";
			}
			else cout << "HUINA" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else {
			isCorrect = true;
			cin.ignore(INT_MAX, '\n');
		}
	}
	isCorrect = false;
	while (!isCorrect) {
		cout << "Введите число не привышающее 10^9\n";
		cin >> c;
		if (cin.fail() || c < 0 || c>1000000001) {
			if (c > 1000000001) {
				cout << "dohui\n";

			}
			else if (c < 0) {
				cout << "debil?\n";
			}
			else cout << "HUINA" << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
		else {
			isCorrect = true;
			cin.ignore(INT_MAX, '\n');
		}
	}
	if (a + b > c && b + c > a && a + c > b) {
		if ((a == b) && (b == c)) {
			cout << "Треугольник равносторонний/:" << endl;
		}
		else if ((a == b || b == c || c == a) && !((a == b) && (b == c)))
			cout << "Треугольник равнобедренный))";
		else
			cout << "Треугольник не равнобедренный((" << endl;
	}
	else
		cout << "Такого треугольника не существует" << endl;
}