#include <iostream>
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(0, "");

	int y[5]{ 1,1,1,3,0 };
	while (true) {
		cout << "[-] ����\n\n";
		cout << "[1] ������\n";
		cout << "[2] �������\n";
		cout << "[3] ���������\n";
		cout << "[-] �����\n\n";
		cout << "[-] ����: ";
		int x;
		cin >> x;
		system("cls");
		switch (x) {
		case 1: {
			switch (y[1]) {
			case 1: {
				int z[9]{ 0,0,0,0,0,0,0,0,0 }, wx = 0, wy = 0;
				while (true) {
					system("cls");
					for (int i = 1; i < 10; i++) {
						switch (z[i - 1]) {
						case 1: {
							switch (y[3]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "X \x1b[0m";
							break;
						}
						case 2: {
							switch (y[2]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "O \x1b[0m";
							break;
						}
						default: {
							cout << "- ";
						}
						}
						if (i % 3 == 0)
							cout << endl;
					}
					if (z[0] == 1 && z[1] == 1 && z[2] == 1 ||
						z[3] == 1 && z[4] == 1 && z[5] == 1 ||
						z[6] == 1 && z[7] == 1 && z[8] == 1 ||
						z[0] == 1 && z[4] == 1 && z[8] == 1 ||
						z[2] == 1 && z[4] == 1 && z[6] == 1 ||
						z[0] == 1 && z[3] == 1 && z[6] == 1 ||
						z[1] == 1 && z[4] == 1 && z[7] == 1 ||
						z[2] == 1 && z[5] == 1 && z[8] == 1) {
						cout << "\n[-] �������� ��������\n";
						system("pause");
						break;
					}
					else
						if (z[0] == 2 && z[1] == 2 && z[2] == 2 ||
							z[3] == 2 && z[4] == 2 && z[5] == 2 ||
							z[6] == 2 && z[7] == 2 && z[8] == 2 ||
							z[0] == 2 && z[4] == 2 && z[8] == 2 ||
							z[2] == 2 && z[4] == 2 && z[6] == 2 ||
							z[0] == 2 && z[3] == 2 && z[6] == 2 ||
							z[1] == 2 && z[4] == 2 && z[7] == 2 ||
							z[2] == 2 && z[5] == 2 && z[8] == 2) {
							cout << "\n[-] ������ ��������\n";
							system("pause");
							break;
						}
						else {
							for (int i2 = 0; i2 < 9; i2++) {
								if (z[i2] == 0)
									break;
								else if (i2 == 8) {
									cout << "\n[-] ���������� ���\n";
									system("pause");
									wy = 1;
									break;
								}
							}
						}
					if (wy == 1)
						break;
					if (wx == 0) {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 10 && z[x - 1] == 0) {
							z[x - 1] = 1;
							wx = 1;
							continue;
						}
						else
							continue;
					}
					if (y[0] == 1)
						while (true) {
							x = rand() % 9;
							if (z[x] == 0) {
								wx = 0;
								z[x] = 2;
								break;
							}
							else
								continue;
						}
					else {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 10 && z[x - 1] == 0) {
							z[x - 1] = 2;
							wx = 0;
						}
						else
						{
							continue;
						}
					}
					system("cls");
				}
				break;
			}
			case 2: {
				int z[16]{ 0,0,0,0,0,0,0,0,0 }, wx = 0, wy = 0;
				while (true) {
					system("cls");
					for (int i = 1; i < 17; i++) {
						switch (z[i - 1]) {
						case 1: {
							switch (y[3]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "X \x1b[0m";
							break;
						}
						case 2: {
							switch (y[2]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "O \x1b[0m";
							break;
						}
						default: {
							cout << "- ";
						}
						}
						if (i % 4 == 0)
							cout << endl;
					}
					if (z[0] == 1 && z[1] == 1 && z[2] == 1 ||
						z[4] == 1 && z[5] == 1 && z[6] == 1 ||
						z[8] == 1 && z[9] == 1 && z[10] == 1 ||
						z[0] == 1 && z[5] == 1 && z[10] == 1 ||
						z[2] == 1 && z[5] == 1 && z[8] == 1 ||
						z[0] == 1 && z[4] == 1 && z[8] == 1 ||
						z[1] == 1 && z[5] == 1 && z[9] == 1 ||
						z[2] == 1 && z[6] == 1 && z[10] == 1 ||
						z[1] == 1 && z[2] == 1 && z[3] == 1 ||
						z[5] == 1 && z[6] == 1 && z[7] == 1 ||
						z[2] == 1 && z[5] == 1 && z[8] == 1 ||
						z[9] == 1 && z[10] == 1 && z[11] == 1 ||
						z[13] == 1 && z[14] == 1 && z[15] == 1 ||
						z[12] == 1 && z[13] == 1 && z[14] == 1 ||
						z[1] == 1 && z[6] == 1 && z[11] == 1 ||
						z[3] == 1 && z[6] == 1 && z[9] == 1 ||
						z[4] == 1 && z[9] == 1 && z[14] == 1 ||
						z[6] == 1 && z[9] == 1 && z[12] == 1 ||
						z[5] == 1 && z[10] == 1 && z[15] == 1 ||
						z[7] == 1 && z[10] == 1 && z[13] == 1 ||
						z[3] == 1 && z[7] == 1 && z[11] == 1 ||
						z[4] == 1 && z[8] == 1 && z[12] == 1 ||
						z[5] == 1 && z[9] == 1 && z[13] == 1 ||
						z[6] == 1 && z[10] == 1 && z[14] == 1 ||
						z[7] == 1 && z[11] == 1 && z[15] == 1) {
						cout << "\n[-] �������� ��������\n";
						system("pause");
						break;
					}
					else
						if (z[0] == 2 && z[1] == 2 && z[2] == 2 ||
							z[4] == 2 && z[5] == 2 && z[6] == 2 ||
							z[8] == 2 && z[9] == 2 && z[10] == 2 ||
							z[0] == 2 && z[5] == 2 && z[10] == 2 ||
							z[2] == 2 && z[5] == 2 && z[8] == 2 ||
							z[0] == 2 && z[4] == 2 && z[8] == 2 ||
							z[1] == 2 && z[5] == 2 && z[9] == 2 ||
							z[2] == 2 && z[6] == 2 && z[10] == 2 ||
							z[1] == 2 && z[2] == 2 && z[3] == 2 ||
							z[5] == 2 && z[6] == 2 && z[7] == 2 ||
							z[2] == 2 && z[5] == 2 && z[8] == 2 ||
							z[9] == 2 && z[10] == 2 && z[11] == 2 ||
							z[13] == 2 && z[14] == 2 && z[15] == 2 ||
							z[12] == 2 && z[13] == 2 && z[14] == 2 ||
							z[1] == 2 && z[6] == 2 && z[11] == 2 ||
							z[3] == 2 && z[6] == 2 && z[9] == 2 ||
							z[4] == 2 && z[9] == 2 && z[14] == 2 ||
							z[6] == 2 && z[9] == 2 && z[12] == 2 ||
							z[5] == 2 && z[10] == 2 && z[15] == 2 ||
							z[7] == 2 && z[10] == 2 && z[13] == 2 ||
							z[3] == 2 && z[7] == 2 && z[11] == 2 ||
							z[4] == 2 && z[8] == 2 && z[12] == 2 ||
							z[5] == 2 && z[9] == 2 && z[13] == 2 ||
							z[6] == 2 && z[10] == 2 && z[14] == 2 ||
							z[7] == 2 && z[11] == 2 && z[15] == 2) {
							cout << "\n[-] ������ ��������\n";
							system("pause");
							break;
						}
						else {
							for (int i2 = 0; i2 < 16; i2++) {
								if (z[i2] == 0)
									break;
								else if (i2 == 15) {
									cout << "\n[-] ���������� ���\n";
									system("pause");
									wy = 1;
									break;
								}
							}
						}
					if (wy == 1)
						break;
					if (wx == 0) {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 17 && z[x - 1] == 0) {
							z[x - 1] = 1;
							wx = 1;
							continue;
						}
						else
							continue;
					}
					if (y[0] == 1)
						while (true) {
							x = rand() % 16;
							if (z[x] == 0) {
								wx = 0;
								z[x] = 2;
								break;
							}
							else
								continue;
						}
					else {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 17 && z[x - 1] == 0) {
							z[x - 1] = 2;
							wx = 0;
						}
						else
						{
							continue;
						}
					}
					system("cls");
				}
				break;
			}
			case 3: {
				int z[25]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, wx = 0, wy = 0;
				while (true) {
					system("cls");
					for (int i = 1; i < 26; i++) {
						switch (z[i - 1]) {
						case 1: {
							switch (y[3]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "X \x1b[0m";
							break;
						}
						case 2: {
							switch (y[2]) {
							case 1: {
								cout << "\x1b[34m";
								break;
							}
							case 2: {
								cout << "\x1b[32m";
								break;
							}
							case 3: {
								cout << "\x1b[35m";
								break;
							}
							}
							cout << "O \x1b[0m";
							break;
						}
						default: {
							cout << "- ";
						}
						}
						if (i % 5 == 0)
							cout << endl;
					}
					if (z[0] == 1 && z[1] == 1 && z[2] == 1 ||
						z[0] == 1 && z[5] == 1 && z[10] == 1 ||
						z[0] == 1 && z[6] == 1 && z[12] == 1 ||
						z[1] == 1 && z[7] == 1 && z[13] == 1 ||
						z[1] == 1 && z[2] == 1 && z[3] == 1 ||
						z[1] == 1 && z[6] == 1 && z[11] == 1 ||
						z[2] == 1 && z[6] == 1 && z[10] == 1 ||
						z[2] == 1 && z[7] == 1 && z[12] == 1 ||
						z[2] == 1 && z[8] == 1 && z[14] == 1 ||
						z[2] == 1 && z[3] == 1 && z[4] == 1 ||
						z[3] == 1 && z[8] == 1 && z[13] == 1 ||
						z[3] == 1 && z[7] == 1 && z[11] == 1 ||
						z[4] == 1 && z[9] == 1 && z[14] == 1 ||
						z[4] == 1 && z[8] == 1 && z[12] == 1 ||
						z[5] == 1 && z[6] == 1 && z[7] == 1 ||
						z[5] == 1 && z[10] == 1 && z[15] == 1 ||
						z[5] == 1 && z[11] == 1 && z[17] == 1 ||
						z[6] == 1 && z[7] == 1 && z[8] == 1 ||
						z[6] == 1 && z[11] == 1 && z[16] == 1 ||
						z[6] == 1 && z[12] == 1 && z[18] == 1 ||
						z[7] == 1 && z[12] == 1 && z[17] == 1 ||
						z[7] == 1 && z[11] == 1 && z[15] == 1 ||
						z[7] == 1 && z[13] == 1 && z[19] == 1 ||
						z[8] == 1 && z[12] == 1 && z[16] == 1 ||
						z[8] == 1 && z[13] == 1 && z[18] == 1 ||
						z[9] == 1 && z[13] == 1 && z[17] == 1 ||
						z[9] == 1 && z[14] == 1 && z[19] == 1 ||
						z[10] == 1 && z[15] == 1 && z[20] == 1 ||
						z[10] == 1 && z[11] == 1 && z[12] == 1 ||
						z[10] == 1 && z[16] == 1 && z[22] == 1 ||
						z[11] == 1 && z[12] == 1 && z[13] == 1 ||
						z[11] == 1 && z[16] == 1 && z[21] == 1 ||
						z[11] == 1 && z[17] == 1 && z[23] == 1 ||
						z[12] == 1 && z[13] == 1 && z[14] == 1 ||
						z[12] == 1 && z[17] == 1 && z[22] == 1 ||
						z[12] == 1 && z[18] == 1 && z[24] == 1 ||
						z[12] == 1 && z[16] == 1 && z[20] == 1 ||
						z[13] == 1 && z[17] == 1 && z[21] == 1 ||
						z[13] == 1 && z[18] == 1 && z[23] == 1 ||
						z[13] == 1 && z[17] == 1 && z[21] == 1 ||
						z[14] == 1 && z[18] == 1 && z[22] == 1 ||
						z[14] == 1 && z[19] == 1 && z[24] == 1 ||
						z[15] == 1 && z[16] == 1 && z[17] == 1 ||
						z[16] == 1 && z[17] == 1 && z[18] == 1 ||
						z[17] == 1 && z[18] == 1 && z[19] == 1 ||
						z[20] == 1 && z[21] == 1 && z[22] == 1 ||
						z[21] == 1 && z[22] == 1 && z[23] == 1 ||
						z[22] == 1 && z[23] == 1 && z[24] == 1
						) {
						cout << "\n[-] �������� ��������\n";
						system("pause");
						break;
					}
					else
						if (z[0] == 2 && z[1] == 2 && z[2] == 2 ||
							z[0] == 2 && z[5] == 2 && z[10] == 2 ||
							z[0] == 2 && z[6] == 2 && z[12] == 2 ||
							z[1] == 2 && z[7] == 2 && z[13] == 2 ||
							z[1] == 2 && z[2] == 2 && z[3] == 2 ||
							z[1] == 2 && z[6] == 2 && z[11] == 2 ||
							z[2] == 2 && z[6] == 2 && z[10] == 2 ||
							z[2] == 2 && z[7] == 2 && z[12] == 2 ||
							z[2] == 2 && z[8] == 2 && z[14] == 2 ||
							z[2] == 2 && z[3] == 2 && z[4] == 2 ||
							z[3] == 2 && z[8] == 2 && z[13] == 2 ||
							z[3] == 2 && z[7] == 2 && z[11] == 2 ||
							z[4] == 2 && z[9] == 2 && z[14] == 2 ||
							z[4] == 2 && z[8] == 2 && z[12] == 2 ||
							z[5] == 2 && z[6] == 2 && z[7] == 2 ||
							z[5] == 2 && z[10] == 2 && z[15] == 2 ||
							z[5] == 2 && z[11] == 2 && z[17] == 2 ||
							z[6] == 2 && z[7] == 2 && z[8] == 2 ||
							z[6] == 2 && z[11] == 2 && z[16] == 2 ||
							z[6] == 2 && z[12] == 2 && z[18] == 2 ||
							z[7] == 2 && z[12] == 2 && z[17] == 2 ||
							z[7] == 2 && z[11] == 2 && z[15] == 2 ||
							z[7] == 2 && z[13] == 2 && z[19] == 2 ||
							z[8] == 2 && z[12] == 2 && z[16] == 2 ||
							z[8] == 2 && z[13] == 2 && z[18] == 2 ||
							z[9] == 2 && z[13] == 2 && z[17] == 2 ||
							z[9] == 2 && z[14] == 2 && z[19] == 2 ||
							z[10] == 2 && z[15] == 2 && z[20] == 2 ||
							z[10] == 2 && z[11] == 2 && z[12] == 2 ||
							z[10] == 2 && z[16] == 2 && z[22] == 2 ||
							z[11] == 2 && z[12] == 2 && z[13] == 2 ||
							z[11] == 2 && z[16] == 2 && z[21] == 2 ||
							z[11] == 2 && z[17] == 2 && z[23] == 2 ||
							z[12] == 2 && z[13] == 2 && z[14] == 2 ||
							z[12] == 2 && z[17] == 2 && z[22] == 2 ||
							z[12] == 2 && z[18] == 2 && z[24] == 2 ||
							z[12] == 2 && z[16] == 2 && z[20] == 2 ||
							z[13] == 2 && z[17] == 2 && z[21] == 2 ||
							z[13] == 2 && z[18] == 2 && z[23] == 2 ||
							z[13] == 2 && z[17] == 2 && z[21] == 2 ||
							z[14] == 2 && z[18] == 2 && z[22] == 2 ||
							z[14] == 2 && z[19] == 2 && z[24] == 2 ||
							z[15] == 2 && z[16] == 2 && z[17] == 2 ||
							z[16] == 2 && z[17] == 2 && z[18] == 2 ||
							z[17] == 2 && z[18] == 2 && z[19] == 2 ||
							z[20] == 2 && z[21] == 2 && z[22] == 2 ||
							z[21] == 2 && z[22] == 2 && z[23] == 2 ||
							z[22] == 2 && z[23] == 2 && z[24] == 2) {
							cout << "\n[-] ������ ��������\n";
							system("pause");
							break;
						}
						else {
							for (int i2 = 0; i2 < 9; i2++) {
								if (z[i2] == 0)
									break;
								else if (i2 == 8) {
									cout << "\n[-] ���������� ���\n";
									system("pause");
									wy = 1;
									break;
								}
							}
						}
					if (wy == 1)
						break;
					if (wx == 0) {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 26 && z[x - 1] == 0) {
							z[x - 1] = 1;
							wx = 1;
							continue;
						}
						else
							continue;
					}
					if (y[0] == 1)
						while (true) {
							x = rand() % 25;
							if (z[x] == 0) {
								wx = 0;
								z[x] = 2;
								break;
							}
							else
								continue;
						}
					else {
						cout << "[-] ����: ";
						cin >> x;
						if (x > 0 && x < 26 && z[x - 1] == 0) {
							z[x - 1] = 2;
							wx = 0;
						}
						else
						{
							continue;
						}
					}
					system("cls");
				}
				break;
			}
			}
			break;
		}
		case 2: {
			cout << "[-] �������\n";
			system("pause");
			system("cls");
			break;
		}
		case 3: {
			cout << "[-] ���������\n\n";
			cout << "[1] ����� ����\n";
			cout << "[2] ������ �����\n";
			cout << "[3] �������� ���� ������\n";
			cout << "[4] �������� ���� ��������\n";
			cout << "[-] �����\n\n";
			cout << "[-] ����: ";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: {
				cout << "[-] ����� ����\n\n";
				cout << "[1] ������ ����������\n";
				cout << "[2] ������ ������\n\n";
				cout << "[-] ����: ";
				cin >> y[0];
				break;
			}
			case 2: {
				cout << "[-] ������ �����\n\n";
				cout << "[1] 3x3\n";
				cout << "[2] 4x4\n";
				cout << "[3] 5x5\n\n";
				cout << "[-] ����: ";
				cin >> y[1];
				break;
			}
			case 3: {
				cout << "[-] ��������� ����� ������\n\n";
				cout << "[1] �����\n";
				cout << "[2] �������\n";
				cout << "[3] ���������\n\n";
				cout << "[-] ����: ";
				cin >> y[2];
				break;
			}
			case 4: {
				cout << "[-] ��������� ����� ��������\n\n";
				cout << "[1] �����\n";
				cout << "[2] �������\n";
				cout << "[3] ���������\n\n";
				cout << "[-] ����: ";
				cin >> y[3];
				break;
			}
			default: {
				break;
			}
			}
			break;
		}
		default: {
			return 0;
		}
		}
		system("cls");
	}
}