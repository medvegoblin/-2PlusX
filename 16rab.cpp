#include <iostream>
#include <string>
using namespace std;

void clean() {
	system("cls");
}

void color() {
	system("color  12");
}

void color2() {
	system("color  4");
}

int sizeint() {
	cout << "Размер INT = " << sizeof(int);
	return 0;
}

int sizechar() {
	cout << "Размер CHAR = " << sizeof(char);
	return 0;
}

int sizedouble() {
	cout << "Размер DOUBLE = " << sizeof(double);
	return 0;
}

int sizefloat() {
	cout << "Размер FLOAT = " << sizeof(float);
	return 0;
}

int sizebool() {
	cout << "Размер BOOL = " << sizeof(bool);
	return 0;
}

void message() {
	cout << "Привет я функция";
}

void cube() {
	int size = 5;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "# ";
		}
		cout << endl;
	}
	cout << endl << endl;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}

		}
		cout << endl;
	}
}

int main()
{
	setlocale(0, "");

	cout << "[!] Программа - \"Функции \" \n\n";
	cout << "[1] Очищение консоли\n";
	cout << "[2] Изменение цвета фона\n";
	cout << "[3] Изменение цвета текста\n";
	cout << "[4] Вывод размера типа данных INT\n";
	cout << "[5] Вывод размера типа данных CHAR\n";
	cout << "[6] Вывод размера типа данных DOUBLE\n";
	cout << "[7] Вывод размера типа данных FLOAT\n";
	cout << "[8] Вывод размера типа данных BOOL\n";
	cout << "[9] Вывод сообщения \"Привет я функция\" \n";
	cout << "[10] Вывод квадрата 5x5\n\n";
	cout << "[+] Выбор: ";
	int choise;
	cin >> choise;
	cout << endl;



	if (choise == 1) {
		clean();
		cout << "All clear";
	}
	else if (choise == 2) {
		color();
		cout << "Цвет фона : Blue\n";
	}
	else if (choise == 3) {
		color2();
		cout << "Цвет текста: Red\n";
	}
	else if (choise == 4) {
		sizeint();
	}
	else if (choise == 5) {
		sizechar();
	}
	else if (choise == 6) {
		sizedouble();
	}
	else if (choise == 7) {
		sizefloat();
	}
	else if (choise == 8) {
		sizebool();
	}
	else if (choise == 9) {
		message();
	}
	else if (choise == 10) {
		cube();
	}
	else {
		cout << "[!] Не верное значение\nПопробуйте еще раз.";
	}



	int _; cin >> _;
	return 0;
}