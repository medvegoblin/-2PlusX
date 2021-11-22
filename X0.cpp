#include <iostream>
using namespace std;
int pole = 1;
int hodit = 1;
void options() {
	int x = 1;
	while (x > 0 && x < 5) {
		system("cls");
		cout << "[!] НАСТРОЙКИ\n\n";
		cout << "[1] Bыбор цвета\n";
		cout << "[2] Bыбор размера поля\n[3] Выбор хода\n[4] Выход\n\n[+] Выбор: ";
		int opt;
		cin >> opt;
		if (opt == 1) {
			system("cls");
			cout << "[!]Введите значение цвета:\n";
			cout << "[1] Синий\n" << "[2] Зеленый\n" << "[3] Фиолетовый \n" << "[4] Красный\n\n[+] Выбор: ";
			int i;
			cin >> i;
			if (i == 1) {
				system("color 1");
			}
			else if (i == 2) {
				system("color 2");
			}
			else if (i == 3) {
				system("color 5");
			}
			else if (i == 4) {
				system("color 4");
			}
			else
			{
				cout << "[!]Нет такого варианта!";
			}
			system("cls");
		}
		else if (opt == 2) {
			system("cls");
			cout << "[!] Размер поля:\n\n[1] 3x3\n[2] 4x4\n[3] 5x5\n\n[+] Выбор: ";
			cin >> pole;
		}
		else if (opt == 3) {
			system("cls");
			cout << "[!] Кто первый ходит:\n\n[1] Крестик\n[2] Нолик\n\n[+] Выбор: ";
			cin >> hodit;

		}
		else if (opt == 4) {
			x = 5;
		}
		system("cls");
	}
}
int game(int hodit, int pole) {
	if (pole == 1) {
		system("cls");
		char a1 = '1';
		char a2 = '2';
		char a3 = '3';
		char a4 = '4';
		char a5 = '5';
		char a6 = '6';
		char a7 = '7';
		char a8 = '8';
		char a9 = '9';
		int hod = 0;
		while (hod < 10) {
			system("cls");
			cout << a1 << " " << a2 << " " << a3 << endl << a4 << " " << a5 << " " << a6 << endl << a7 << " " << a8 << " " << a9;
			if (a1 == 'X' && a2 == 'X' && a3 == 'X' ||
				a4 == 'X' && a5 == 'X' && a6 == 'X' ||
				a7 == 'X' && a8 == 'X' && a9 == 'X' ||
				a1 == 'X' && a4 == 'X' && a7 == 'X' ||
				a2 == 'X' && a5 == 'X' && a8 == 'X' ||
				a3 == 'X' && a6 == 'X' && a9 == 'X' ||
				a1 == 'X' && a5 == 'X' && a9 == 'X' ||
				a3 == 'X' && a5 == 'X' && a7 == 'X') {
				cout << "\n\n ПОБЕДА КРЕСТИКОВ!";
				hod = 10;
				return 0;
			}
			else if (a1 == 'O' && a2 == 'O' && a3 == 'O' ||
				a4 == 'O' && a5 == 'O' && a6 == 'O' ||
				a7 == 'O' && a8 == 'O' && a9 == 'O' ||
				a1 == 'O' && a4 == 'O' && a7 == 'O' ||
				a2 == 'O' && a5 == 'O' && a8 == 'O' ||
				a3 == 'O' && a6 == 'O' && a9 == 'O' ||
				a1 == 'O' && a5 == 'O' && a9 == 'O' ||
				a3 == 'O' && a5 == 'O' && a7 == 'O') {
				cout << "\n\n ПОБЕДА НОЛИКОВ!";
				hod = 10;
				return 0;
			}
			if (hodit == 1) {
				if (hod % 2) {
					cout << "\n[!] Ход: [O]\n";
					cout << "\n\n[+] Выбор: ";
					int bebe;
					cin >> bebe;
				loop:
					switch (bebe) {
					case 1:
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a1 = 'O';
						break;
					case 2:
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a2 = 'O';
						break;
					case 3:
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a3 = 'O';
						break;
					case 4:
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a4 = 'O';
						break;
					case 5:
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a5 = 'O';
						break;
					case 6:
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a6 = 'O';
						break;
					case 7:
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a7 = 'O';
						break;
					case 8:
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a8 = 'O';
						break;
					case 9:
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop;
						}
						a9 = 'O';
						break;

					default: cout << "1";

					}

				}
				else {
					cout << "\n[!] Ход: [X]\n";
					cout << "\n\n[+] Выбор: ";
					int bebe;
					cin >> bebe;
				loop1:
					switch (bebe) {
					case 1:
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a1 = 'X';
						break;
					case 2:
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a2 = 'X';
						break;
					case 3:
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a3 = 'X';
						break;
					case 4:
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a4 = 'X';
						break;
					case 5:
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a5 = 'X';
						break;
					case 6:
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a6 = 'X';
						break;
					case 7:
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe; \
								goto loop1;
						}
						a7 = 'X';
						break;
					case 8:
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a8 = 'X';
						break;
					case 9:
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop1;
						}
						a9 = 'X';
						break;

					default: cout << "1";

					}

				}
			}
			else if (hodit == 2) {
				if (hod % 2) {
					cout << "\n[!] Ход: [X]\n";
					cout << "\n\n[+] Выбор: ";
					int bebe;
					cin >> bebe;
				loop2:
					switch (bebe) {
					case 1:
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a1 = 'X';
						break;
					case 2:
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a2 = 'X';
						break;
					case 3:
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a3 = 'X';
						break;
					case 4:
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a4 = 'X';
						break;
					case 5:
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a5 = 'X';
						break;
					case 6:
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a6 = 'X';
						break;
					case 7:
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a7 = 'X';
						break;
					case 8:
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a8 = 'X';
						break;
					case 9:
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop2;
						}
						a9 = 'X';
						break;

					default: cout << "1";

					}
				}
				else {
					cout << "\n[!] Ход: [O]\n";
					cout << "\n\n[+] Выбор: ";
					int bebe;
					cin >> bebe;
				loop3:
					switch (bebe) {
					case 1:
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a1 = 'O';
						break;
					case 2:
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a2 = 'O';
						break;
					case 3:
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a3 = 'O';
						break;
					case 4:
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a4 = 'O';
						break;
					case 5:
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a5 = 'O';
						break;
					case 6:
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a6 = 'O';
						break;
					case 7:
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a7 = 'O';
						break;
					case 8:
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a8 = 'O';
						break;
					case 9:
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop3;
						}
						a9 = 'O';
						break;

					default: cout << "1";

					}
				}

			}
			hod++;
		}
	}
	else if (pole == 2) {
		system("cls");
		char a1 = '1';
		char a2 = '2';
		char a3 = '3';
		char a4 = '4';
		char a5 = '5';
		char a6 = '6';
		char a7 = '7';
		char a8 = '8';
		char a9 = '9';
		char a10 = 'a';
		char a11 = 'b';
		char a12 = 'c';
		char a13 = 'd';
		char a14 = 'e';
		char a15 = 'f';
		char a16 = 'g';
		int hod = 0;
		while (hod < 17) {
			system("cls");
			cout << a1 << " " << a2 << " " << a3 << " " << a4
				<< endl << a5 << " " << a6 << " " << a7 << " " << a8
				<< endl << a9 << " " << a10 << " " << a11 << " " << a12
				<< endl << a13 << " " << a14 << " " << a15 << " " << a16 << endl;

			if (a1 == 'X' && a2 == 'X' && a3 == 'X' && a4 == 'X' ||
				a5 == 'X' && a6 == 'X' && a7 == 'X' && a8 == 'X' ||
				a9 == 'X' && a10 == 'X' && a11 == 'X' && a12 == 'X' ||
				a13 == 'X' && a14 == 'X' && a15 == 'X' && a16 == 'X' ||
				a1 == 'X' && a5 == 'X' && a9 == 'X' && a13 == 'X' ||
				a2 == 'X' && a6 == 'X' && a10 == 'X' && a14 == 'X' ||
				a3 == 'X' && a7 == 'X' && a11 == 'X' && a15 == 'X' ||
				a4 == 'X' && a8 == 'X' && a12 == 'X' && a16 == 'X' ||
				a1 == 'X' && a6 == 'X' && a11 == 'X' && a16 == 'X' ||
				a4 == 'X' && a7 == 'X' && a10 == 'X' && a13 == 'X') {
				cout << "\n\n ПОБЕДА КРЕСТИКОВ!";
				hod = 17;
				return 0;
			}
			else if (a1 == 'O' && a2 == 'O' && a3 == 'O' && a4 == 'O' ||
				a5 == 'O' && a6 == 'O' && a7 == 'O' && a8 == 'O' ||
				a9 == 'O' && a10 == 'O' && a11 == 'O' && a12 == 'O' ||
				a13 == 'O' && a14 == 'O' && a15 == 'O' && a16 == 'O' ||
				a1 == 'O' && a5 == 'O' && a9 == 'O' && a13 == 'O' ||
				a2 == 'O' && a6 == 'O' && a10 == 'O' && a14 == 'O' ||
				a3 == 'O' && a7 == 'O' && a11 == 'O' && a15 == 'O' ||
				a4 == 'O' && a8 == 'O' && a12 == 'O' && a16 == 'O' ||
				a1 == 'O' && a6 == 'O' && a11 == 'O' && a16 == 'O' ||
				a4 == 'O' && a7 == 'O' && a10 == 'O' && a13 == 'O') {
				cout << "\n\n ПОБЕДА НОЛИКОВ!";
				hod = 17;
				return 0;
			}
			if (hodit == 1) {
				if (hod % 2) {
					cout << "\n[!] Ход: [O]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop4:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a1 = 'O';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a2 = 'O';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a3 = 'O';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a4 = 'O';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a5 = 'O';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a6 = 'O';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a7 = 'O';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a8 = 'O';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a9 = 'O';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a10 = 'O';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a11 = 'O';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a12 = 'O';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a13 = 'O';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a14 = 'O';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a15 = 'O';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop4;
						}
						a16 = 'O';
						break;

					default: cout << "1";

					}
				}
				else {
					cout << "\n[!] Ход: [X]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop5:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a1 = 'X';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a2 = 'X';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a3 = 'X';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a4 = 'X';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a5 = 'X';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a6 = 'X';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a7 = 'X';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a8 = 'X';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a9 = 'X';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a10 = 'X';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a11 = 'X';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a12 = 'X';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a13 = 'X';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a14 = 'X';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a15 = 'X';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop5;
						}
						a16 = 'X';
						break;

					default: cout << "1";

					}
				}
			}
			else if (hodit == 2) {
				if (hod % 2) {
					cout << "\n[!] Ход: [x]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop6:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a1 = 'X';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a2 = 'X';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a3 = 'X';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a4 = 'X';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a5 = 'X';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a6 = 'X';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a7 = 'X';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a8 = 'X';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a9 = 'X';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a10 = 'X';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a11 = 'X';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a12 = 'X';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a13 = 'X';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a14 = 'X';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a15 = 'X';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop6;
						}
						a16 = 'X';
						break;

					default: cout << "1";

					}
				}
				else {
					cout << "\n[!] Ход: [o]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop7:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a1 = 'O';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a2 = 'O';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a3 = 'O';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a4 = 'O';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a5 = 'O';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a6 = 'O';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a7 = 'O';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a8 = 'O';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a9 = 'O';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a10 = 'O';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a11 = 'O';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a12 = 'O';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a13 = 'O';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a14 = 'O';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a15 = 'O';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop7;
						}
						a16 = 'O';
						break;

					default: cout << "1";

					}
				}
			}
			hod++;
		}


	}
	else if (pole == 3) {
		system("cls");
		char a1 = '1';
		char a2 = '2';
		char a3 = '3';
		char a4 = '4';
		char a5 = '5';
		char a6 = '6';
		char a7 = '7';
		char a8 = '8';
		char a9 = '9';
		char a10 = 'a';
		char a11 = 'b';
		char a12 = 'c';
		char a13 = 'd';
		char a14 = 'e';
		char a15 = 'f';
		char a16 = 'g';
		char a17 = 'h';
		char a18 = 'i';
		char a19 = 'j';
		char a20 = 'k';
		char a21 = 'l';
		char a22 = 'm';
		char a23 = 'n';
		char a24 = 'o';
		char a25 = 'p';
		int hod = 0;
		while (hod < 26) {
			system("cls");
			cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl
				<< a6 << " " << a7 << " " << a8 << " " << a9 << " " << a10 << endl
				<< a11 << " " << a12 << " " << a13 << " " << a14 << " " << a15 << endl
				<< a16 << " " << a17 << " " << a18 << " " << a19 << " " << a20 << endl
				<< a21 << " " << a22 << " " << a23 << " " << a24 << " " << a25 << endl;



			if (a1 == 'X' && a2 == 'X' && a3 == 'X' && a4 == 'X' && a5 == 'X' ||
				a6 == 'X' && a7 == 'X' && a8 == 'X' && a9 == 'X' && a10 == 'X' ||
				a11 == 'X' && a12 == 'X' && a13 == 'X' && a14 == 'X' && a15 == 'X' ||
				a16 == 'X' && a17 == 'X' && a18 == 'X' && a19 == 'X' && a20 == 'X' ||
				a21 == 'X' && a22 == 'X' && a23 == 'X' && a24 == 'X' && a25 == 'X' ||
				a1 == 'X' && a6 == 'X' && a11 == 'X' && a16 == 'X' && a21 == 'X' ||
				a2 == 'X' && a7 == 'X' && a12 == 'X' && a17 == 'X' && a22 == 'X' ||
				a3 == 'X' && a8 == 'X' && a13 == 'X' && a18 == 'X' && a23 == 'X' ||
				a4 == 'X' && a9 == 'X' && a14 == 'X' && a19 == 'X' && a24 == 'X' ||
				a5 == 'X' && a10 == 'X' && a15 == 'X' && a20 == 'X' && a25 == 'X' ||
				a1 == 'X' && a7 == 'X' && a13 == 'X' && a19 == 'X' && a25 == 'X' ||
				a5 == 'X' && a9 == 'X' && a13 == 'X' && a17 == 'X' && a21 == 'X') {
				cout << "\n\n ПОБЕДА КРЕСТИКОВ!";
				hod = 26;
				return 0;
			}
			else if (a1 == 'O' && a2 == 'O' && a3 == 'O' && a4 == 'O' && a5 == 'O' ||
				a6 == 'O' && a7 == 'O' && a8 == 'O' && a9 == 'O' && a10 == 'O' ||
				a11 == 'O' && a12 == 'O' && a13 == 'O' && a14 == 'O' && a15 == 'O' ||
				a16 == 'O' && a17 == 'O' && a18 == 'O' && a19 == 'O' && a20 == 'O' ||
				a21 == 'O' && a22 == 'O' && a23 == 'O' && a24 == 'O' && a25 == 'O' ||
				a1 == 'O' && a6 == 'O' && a11 == 'O' && a16 == 'O' && a21 == 'O' ||
				a2 == 'O' && a7 == 'O' && a12 == 'O' && a17 == 'O' && a22 == 'O' ||
				a3 == 'O' && a8 == 'O' && a13 == 'O' && a18 == 'O' && a23 == 'O' ||
				a4 == 'O' && a9 == 'O' && a14 == 'O' && a19 == 'O' && a24 == 'O' ||
				a5 == 'O' && a10 == 'O' && a15 == 'O' && a20 == 'O' && a25 == 'O' ||
				a1 == 'O' && a7 == 'O' && a13 == 'O' && a19 == 'O' && a25 == 'O' ||
				a5 == 'O' && a9 == 'O' && a13 == 'O' && a17 == 'O' && a21 == 'O') {
				cout << "\n\n ПОБЕДА НОЛИКОВ!";
				hod = 26;
				return 0;
			}
			if (hodit == 1) {
				if (hod % 2) {
					cout << "\n[!] Ход: [O]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop8:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a1 = 'O';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a2 = 'O';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a3 = 'O';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a4 = 'O';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a5 = 'O';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a6 = 'O';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a7 = 'O';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a8 = 'O';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a9 = 'O';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a10 = 'O';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a11 = 'O';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a12 = 'O';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a13 = 'O';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a14 = 'O';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a15 = 'O';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a16 = 'O';
						break;
					case 'h':
						while (a17 == 'X' || a17 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a17 = 'O';
						break;
					case 'i':
						while (a18 == 'X' || a18 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a18 = 'O';
						break;
					case 'j':
						while (a19 == 'X' || a19 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a19 = 'O';
						break;
					case 'k':
						while (a20 == 'X' || a20 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a20 = 'O';
						break;
					case 'l':
						while (a21 == 'X' || a21 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a21 = 'O';
						break;
					case 'm':
						while (a22 == 'X' || a22 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a22 = 'O';
						break;
					case 'n':
						while (a23 == 'X' || a23 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a23 = 'O';
						break;
					case 'o':
						while (a24 == 'X' || a24 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a24 = 'O';
						break;
					case 'p':
						while (a25 == 'X' || a25 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop8;
						}
						a25 = 'O';
						break;

					default: cout << "1";

					}
				}
				else {
					cout << "\n[!] Ход: [X]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop9:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a1 = 'X';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a2 = 'X';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a3 = 'X';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a4 = 'X';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a5 = 'X';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a6 = 'X';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a7 = 'X';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a8 = 'X';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a9 = 'X';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a10 = 'X';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a11 = 'X';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a12 = 'X';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a13 = 'X';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a14 = 'X';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a15 = 'X';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a16 = 'X';
						break;
					case 'h':
						while (a17 == 'X' || a17 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a17 = 'X';
						break;
					case 'i':
						while (a18 == 'X' || a18 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a18 = 'X';
						break;
					case 'j':
						while (a19 == 'X' || a19 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a19 = 'X';
						break;
					case 'k':
						while (a20 == 'X' || a20 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a20 = 'X';
						break;
					case 'l':
						while (a21 == 'X' || a21 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a21 = 'X';
						break;
					case 'm':
						while (a22 == 'X' || a22 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a22 = 'X';
						break;
					case 'n':
						while (a23 == 'X' || a23 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a23 = 'X';
						break;
					case 'o':
						while (a24 == 'X' || a24 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a24 = 'X';
						break;
					case 'p':
						while (a25 == 'X' || a25 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop9;
						}
						a25 = 'X';
						break;

					default: cout << "1";

					}
				}
			}
			else if (hodit == 2) {
				if (hod % 2) {
					cout << "\n[!] Ход: [X]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop10:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a1 = 'X';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a2 = 'X';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a3 = 'X';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a4 = 'X';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a5 = 'X';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a6 = 'X';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a7 = 'X';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a8 = 'X';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a9 = 'X';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a10 = 'X';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a11 = 'X';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a12 = 'X';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a13 = 'X';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a14 = 'X';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a15 = 'X';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a16 = 'X';
						break;
					case 'h':
						while (a17 == 'X' || a17 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a17 = 'X';
						break;
					case 'i':
						while (a18 == 'X' || a18 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a18 = 'X';
						break;
					case 'j':
						while (a19 == 'X' || a19 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a19 = 'X';
						break;
					case 'k':
						while (a20 == 'X' || a20 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a20 = 'X';
						break;
					case 'l':
						while (a21 == 'X' || a21 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a21 = 'X';
						break;
					case 'm':
						while (a22 == 'X' || a22 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a22 = 'X';
						break;
					case 'n':
						while (a23 == 'X' || a23 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a23 = 'X';
						break;
					case 'o':
						while (a24 == 'X' || a24 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a24 = 'X';
						break;
					case 'p':
						while (a25 == 'X' || a25 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop10;
						}
						a25 = 'X';
						break;

					default: cout << "1";

					}
				}
				else {
					cout << "\n[!] Ход: [O]\n";
					cout << "\n\n[+] Выбор: ";
					char bebe;
					cin >> bebe;
				loop11:
					switch (bebe) {
					case '1':
						while (a1 == 'X' || a1 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a1 = 'O';
						break;
					case '2':
						while (a2 == 'X' || a2 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a2 = 'O';
						break;
					case '3':
						while (a3 == 'X' || a3 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a3 = 'O';
						break;
					case '4':
						while (a4 == 'X' || a4 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a4 = 'O';
						break;
					case '5':
						while (a5 == 'X' || a5 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a5 = 'O';
						break;
					case '6':
						while (a6 == 'X' || a6 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a6 = 'O';
						break;
					case '7':
						while (a7 == 'X' || a7 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a7 = 'O';
						break;
					case '8':
						while (a8 == 'X' || a8 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a8 = 'O';
						break;
					case '9':
						while (a9 == 'X' || a9 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a9 = 'O';
						break;
					case 'a':
						while (a10 == 'X' || a10 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a10 = 'O';
						break;
					case 'b':
						while (a11 == 'X' || a11 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a11 = 'O';
						break;
					case 'c':
						while (a12 == 'X' || a12 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a12 = 'O';
						break;
					case 'd':
						while (a13 == 'X' || a13 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a13 = 'O';
						break;
					case 'e':
						while (a14 == 'X' || a14 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a14 = 'O';
						break;
					case 'f':
						while (a15 == 'X' || a15 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a15 = 'O';
						break;
					case 'g':
						while (a16 == 'X' || a16 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a16 = 'O';
						break;
					case 'h':
						while (a17 == 'X' || a17 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a17 = 'O';
						break;
					case 'i':
						while (a18 == 'X' || a18 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a18 = 'O';
						break;
					case 'j':
						while (a19 == 'X' || a19 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a19 = 'O';
						break;
					case 'k':
						while (a20 == 'X' || a20 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}
						a20 = 'O';
						break;
					case 'l':
						while (a21 == 'X' || a21 == 'O') {
							cout << "Введите в пустую клетку: ";
							cin >> bebe;
							goto loop11;
						}