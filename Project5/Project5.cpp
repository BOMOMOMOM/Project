#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int swt;

	cout << "\tПереводчик\n\n\n";

	cout << "[1] - Русские слова\n";
	cout << "[2] - Английские слова\n\n\n";
	cout << "[3] - Выход\n\n";

	cout << "Выберите действие: ";
	cin >> swt;

	switch (swt) {
	case 1:
		int rw;
		cout << " - Список Русских слов\n";

		cout << "[1] - Дорога\n";
		cout << "[2] - Мама\n";
		cout << "[3] - Мяу\n";
		cout << "[4] - Папа\n";
		cout << "[5] - Колледж\n";
		cout << "[6] - Учитель\n";
		cout << "[7] - Семья\n";
		cout << "[8] - Окно\n";
		cout << "[9] - Волейбол\n";
		cout << "[10] - Единая\n";
		cout << "[11] - Россия\n";
		cout << "[12] - Дзен\n";
		cout << "[13] - Список\n";
		cout << "[14] - Словарь\n";
		cout << "[15] - Лошадь\n\n";

		cout << " - Выберите номер слова: ";
		cin >> rw;
		switch (rw) {
		case 1:
			cout << " - Дорога --- Road";
			break;

		case 2:
			cout << " - Мама --- Mother";
			break;

		case 3:
			cout << " - Мяу --- Meow";
			break;

		case 4:
			cout << " - Папа --- Father";
			break;

		case 5:
			cout << " - Колледж --- College";
			break;

		case 6:
			cout << " - Учитель --- teacher";
			break;

		case 7:
			cout << " - Семья --- Family";
			break;

		case 8:
			cout << " - Окно --- Window";
			break;

		case 9:
			cout << " - Волейбол --- volleyball";
			break;

		case 10:
			cout << " - Единая --- United";
			break;

		case 11:
			cout << " - Россия --- Russia";
			break;

		case 12:
			cout << " - Дзен --- zen";
			break;

		case 13:
			cout << " - Список --- List";
			break;

		case 14:
			cout << " - Словарь --- Dictionary";
			break;

		case 15:
			cout << " - Лошадь --- Horse";
			break;
		default:
			cout << "Error\n";
			cout << "Вы ввели не то число!";
			break;
		}
		break;

	case 2:
		int ew;
		cout << " - Список Английских слов\n";

		cout << "[1] - Position\n";
		cout << "[2] - Telephone\n";
		cout << "[3] - Order\n";
		cout << "[4] - Number\n";
		cout << "[5] - Price\n";
		cout << "[6] - Product\n";
		cout << "[7] - Diverse\n";
		cout << "[8] - Easy\n";
		cout << "[9] - Hard\n";
		cout << "[10] - Normal\n";
		cout << "[11] - Share\n";
		cout << "[12] - Percent\n";
		cout << "[13] - Content\n";
		cout << "[14] - Customer\n";
		cout << "[15] - Hand\n\n";

		cout << " - Выберите номер слова: ";
		cin >> ew;
		switch (ew) {
		case 1:
			cout << " - Position --- Должность";
			break;

		case 2:
			cout << " - Telephone --- Телефон";
			break;

		case 3:
			cout << " - Order --- Порядок";
			break;

		case 4:
			cout << " - Number --- Номер";
			break;

		case 5:
			cout << " - Price --- Цена";
			break;

		case 6:
			cout << " - Product --- Товар";
			break;

		case 7:
			cout << " - Diverse --- Разнообразный";
			break;

		case 8:
			cout << " - Easy --- Легко";
			break;

		case 9:
			cout << " - Hard --- Сложно";
			break;

		case 10:
			cout << " - Normal --- Средне";
			break;

		case 11:
			cout << " - Share --- Доля";
			break;

		case 12:
			cout << " - Percent --- Процент";
			break;

		case 13:
			cout << " - Content --- Содержание";
			break;

		case 14:
			cout << " - Customer --- Покупатель";
			break;

		case 15:
			cout << " - Hand --- Рука";
			break;
		default:
			cout << "Error\n";
			cout << "Вы ввели не то число!";
			break;
		}
		break;

	case 3:
		return 0;
		break;
	}

	int _;
	cin >> _;
	return 0;
}
