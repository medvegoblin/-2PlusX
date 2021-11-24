#include <iostream>
using namespace std;
int option_question;
int option_HP;



void options() {
	int x = 1;
	while (x > 0 && x < 5) {
		system("cls");
		cout << "[!] НАСТРОЙКИ\n\n";
		cout << "[1] Количество вопросов\n";
		cout << "[2] Количество жизней\n";
		cout << "[3] Выход\n\n";
		cout << "[+] Выбор: ";
		int opt;
		cin >> opt;
		if (opt == 1) {
			system("cls");
			cout << "[!] Количество вопросов:\n\n[1] 5\n[2] 10\n[3] 15\n\n[+] Выбор: ";
			cin >> option_question;
		}
		else if (opt == 2) {
			system("cls");
			cout << "[!] Количество жизней:\n\n[1] 1\n[2] 2\n[3] 3\n[4] 4\n\n\n[+] Выбор: ";
			cin >> option_HP;
		}
		else if (opt == 3) {
			x = 5;
		}

		system("cls");
	}
}

int game() {

	return 1;
}

void rule() {
	system("cls");
	cout << "Правила:\n\n В начале игры у игрока есть единицы здоровья (колличиство определяется в настройках).\n В ходе игры вы можете потерять единицы здоровья за не правильный ответ. \n"
		<< " Игрок выигрывает в том случае, когда он ответив на все вопросы,\n сохранил как минимум 1 единицу здоровья.В противном случае игрок проигрывает.";

	cout << "\n\n[!]Для выхода из правил напишите любое число или слово: ";
	string vixod;
	cin >> vixod;
	system("cls");
}

int main() {
	setlocale(0, "");
	int i = 1;
	while (i > 0 && i < 5) {

		cout << "                  Поле CS:GO                 \n\n";
		cout << "[!] Меню:\n";
		cout << "[1] Начать игру\n[2] Настройки\n[3] Правила\n[4] Выйти\n\n[+] Выбор: ";
		int vibor;
		cin >> vibor;
		switch (vibor) {
		case 1:
			game();
			i = 5;
			break;
		case 2:
			options();
			break;
		case 3:
			rule();
			break;
		case 4:
			i = 5;
			break;
		default:
			system("cls");
			cout << "";
			break;
		}
	}

	int _; cin >> _;
	return 0;
}