#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "ФИГУРКИ!!!\n\n";

	cout << "[1] Фигурки\n";
	cout << "[2] Выход\n";
	cout << "[-] Ваш выбор: ";
	int num;
	cin >> num;
	int i = 0;
	bool c = true;
	while (c = true) {
		if (num == 1) {
			system("cls");
			cout << "Добро пожаловать в фигурки!\n\n";
			cout << "Выберите фигурку: \n";

			cout << "[1] Квадратик\n";
			cout << "[2] Прямоугольничек\n";
			cout << "[3] Треугольничек\n";
			cout << "[4] Плюсек\n";
			cout << "[5] Крестик\n";
			cout << "[6] РешОтАЧКА\n";
			cout << "[7] Лыния\n";
			cout << "[-] Ваш выбор: ";
			int menu;
			cin >> menu;
			switch (menu) {
			case 1:
			{
				system("cls");
				cout << "Добро пожаловать в Квадратик!\n\n";
				cout << "[-] Выберите какой хотите построить квадратик: \n";

				cout << "[1] Заполненный\n";
				cout << "[2] Полый\n";

				cout << "[-] Ваш выбор: ";
				int cvadrat;
				cin >> cvadrat;
				switch (cvadrat) {
				case 1: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						for (int y = 0; y < size; y++) {
							cout << texture << " ";
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						for (int y = 0; y < size; y++) {
							if (y == 0 || y == size - 1 || x == 0 || x == size - 1) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				system("cls");
				cout << "Добро пожаловать в Прямоугольничек!\n\n";
				cout << "[-] Выберите какой хотите построить прямоугольничек: \n";

				cout << "[1] Заполненный\n";
				cout << "[2] Полый\n";

				cout << "[-] Ваш выбор: ";
				int priamoygolnic;
				cin >> priamoygolnic;
				switch (priamoygolnic) {
				case 1: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите высоту: ";
					int height;
					cin >> height;

					cout << "[-] Выберите длину: ";
					int length;
					cin >> length;

					for (int x = 0; x < height; x++) {
						for (int y = 0; y < length; y++) {
							cout << texture << " ";
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите высоту: ";
					int height;
					cin >> height;

					cout << "[-] Выберите длину: ";
					int length;
					cin >> length;

					for (int x = 0; x < height; x++) {
						for (int y = 0; y < length; y++) {
							if (y == 0 || y == length - 1 || x == 0 || x == height - 1) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				system("cls");
				cout << "Добро пожаловать в Треугольничек!\n\n";
				cout << "[-] Выберите какой хотите построить треугольничек: \n";

				cout << "[1] Заполненный\n";
				cout << "[2] Полый\n";

				cout << "[-] Ваш выбор: ";
				int treug;
				cin >> treug;
				switch (treug) {
				case 1: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Желательно размер должен быть нечётным!\n";
					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int y = 0; y < size; y++) {
						for (int x = 0; x < size; x++) {
							if (x >= size / 2 - y && x <= size / 2 + y && y <= size / 2) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Желательно размер должен быть нечётным!\n";
					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int y = 0; y < size; y++) {
						for (int x = 0; x < size; x++) {
							if (x == size / 2 + y || x == size / 2 - y || y == size / 2) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 4:
			{
				system("cls");
				cout << "Добро пожаловать в Плюсек!";

				system("cls");
				cout << "[-] Выберите текстуру: ";
				char texture;
				cin >> texture;

				cout << "[-] Желательно размер должен быть нечётным!\n";
				cout << "[-] Выберите размер: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (y == size / 2 || x == size / 2) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}


				break;
			}
			case 5:
			{
				system("cls");
				cout << "Добро пожаловать в Крестик!";

				system("cls");
				cout << "[-] Выберите текстуру: ";
				char texture;
				cin >> texture;

				cout << "[-] Выберите размер: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (y == x || size - y == x + 1) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}
				break;
			}
			case 6:
			{
				system("cls");
				cout << "Добро пожаловать в РешОтАЧКА!";

				system("cls");
				cout << "[-] Выберите текстуру: ";
				char texture;
				cin >> texture;

				cout << "[-] Желательно размер должен быть нечётным!\n";
				cout << "[-] Выберите размер: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (x % 2 == 0 || y % 2 == 0) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}


				break;
			}
			case 7:
			{
				system("cls");
				cout << "Добро пожаловать в Лынии!\n\n";
				cout << "[-] Выберите какой хотите построить Лынию: \n";

				cout << "[1] Вертикально\n";
				cout << "[2] Горизантально\n";

				cout << "[-] Ваш выбор: ";
				int line;
				cin >> line;
				switch (line) {
				case 1: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						cout << texture << " ";
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] Выберите текстуру: ";
					char texture;
					cin >> texture;

					cout << "[-] Выберите размер: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						cout << texture << " ";
					}
					break;
				}
				}
				break;
			}
			}
		}
		else {
			system("cls");
			return 0;
		}
		Sleep(1200);
	}


	int _;
	cin >> _;
	return 0;
}