#include <iostream>
using namespace std;

double culk(double num1, double num2, char operation) {
	switch (operation) {
	case'+': {
		return num1 + num2;
		break;
	}
	case'-': {
		return num1 - num2;
		break;
	}
	case'*': {
		return num1 * num2;
		break;
	}
	case'/': {
		return num1 / num2;
		break;
	}
	case'%': {
		return (int)num1 % (int)num2;
		break;
	}
	case'^': {
		return pow(num1, num2);
		break;
	}
	case'_': {
		return (num1 + num2) / num2;
		break;
	}
	case'=': {
		return (num1 + num2) * num2;
		break;
	}

	default: {
		return 0;
		break;
	}
	}
}

int main() {
	setlocale(0, "");

	cout << "Добро попжаловать в калькулятор!\n\n\n";

	cout << "Введите первое чиcло: ";
	double num1;
	cin >> num1;

	cout << "Введите второе число: ";
	double num2;
	cin >> num2;

	cout << "[+] - Сложение\n";
	cout << "[-] - Вычитание\n";
	cout << "[*] - Умножение\n";
	cout << "[/] - Деление\n";
	cout << "[%] - Деление с остатком\n";
	cout << "[^] - Возведение в степень\n";
	cout << "[_] - Сложение с делением\n";
	cout << "[=] - Сложение с умножениием\n";

	cout << "Введите действие: ";
	char operation;
	cin >> operation;


	cout << culk(num1, num2, operation) << endl;




	int _; cin >> _;
	return 0;
}