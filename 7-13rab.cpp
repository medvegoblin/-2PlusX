#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[!] ПРОГРАММА фигуры [+]\n\n";
    cout << "[!] Выбирите фигуру.\n\n";
    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    cout << "[3] Треугольник\n";
    cout << "[4] Решётка\n";
    cout << "[5] Крест\n";
    cout << "[6] Плюс\n";
    cout << "[7] Прямоугольник\n";
    cout << "\n";
    cout << "[+] Выбор: ";
    short choice;
    cin >> choice;
    if (choice == 1) {
        system("cls");
        cout << "[!] Выбирите текстуру\n";
        cout << "[+] Выбор: ";
        char texture;
        cin >> texture;
        system("cls");
        cout << "[!] Выбирите размер\n";
        cout << "[+] Выбор: ";
        short size;
        cin >> size;
        system("cls");
        cout << "\[!] Резултат:\n\n";
        int i = 0;
        while (i < size) {
            cout << texture << endl;
            i++;
        }

    }
    else if (choice == 2) {
        system("cls");
        cout << "[!]Выберите каким будет квадрат.\n\n";
        cout << "[1] Заполненным\n[2] Пустым\n\n";
        cout << "[+]Выбор: ";
        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!] Выбирите текстуру\n";
            cout << "[+] Выбор: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << "[!]Выберите размер Квадрата:\n";
            cout << "[+] Выбор: ";
            int size;
            cin >> size;
            system("cls");
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << texture << " ";
                }
                cout << endl;
            }
        }
        else if (type == 2) {
            cout << "[!] Выбирите текстуру\n";
            cout << "[+] Выбор: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << "[!]Выберите размер Квадрата.\n";
            cout << "[+] Выбор: ";
            int size;
            cin >> size;
            system("cls");
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }

        }
        else {
            cout << "\n\n[!] Нет такого варианта ответа\n";
            cout << "[!] Попробуйте еще раз\n\n";
        }
    }
    else if (choice == 3) {
        system("cls");
        cout << "[!]Выберите каким будет треугольник.\n\n";
        cout << "[1] Пустым\n[2] Заполненным\n\n";
        cout << "[+]Выбор: ";

        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";
            string texture;
            cin >> texture;
            system("cls");

            int size;
            cin >> size;
            system("cls");

            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y) {
                        cout << texture;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        else if (type == 2) {

            cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";
            string texture;
            cin >> texture;
            system("cls");

            cout << "[!]Выберите размер.\n\n" << "[+]Выбор: ";
            int size;
            cin >> size;
            system("cls");

            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (y == size / 2 || x == size / 2 - y || x == size / 2 + y || x >= size / 2 - y && x <= size / 2 + y && y <= size / 2) {
                        cout << texture;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;

            }

        }

        else {
            cout << "\n\n[!] Нет такого варианта ответа\n";
            cout << "[!] Попробуйте еще раз\n\n";
        }
    }
    else if (choice == 4) {
        system("cls");
        cout << "[!]Выберите какой будет решетка.\n";
        cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]Выберите размер.\n\n" << "[+]Выбор: ";
        int size;
        cin >> size;
        system("cls");

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i % 2 || j % 2) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }

            }
        }
    }
    else if (choice == 5) {
        system("cls");
        cout << "[!]Выберите каким будет крест.\n";
        cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]Выберите размер.\n\n" << "[+]Выбор: ";
        int size;
        cin >> size;
        system("cls");

        for (int i = 0; i <= size; i++) {
            for (int j = 0; j <= size; j++) {
                if (j == i || j == size - i) {
                    cout << texture;
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 6) {
        system("cls");
        cout << "[!]Выберите каким будет плюс.\n";
        cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";;
        string texture;
        cin >> texture;
        system("cls");
        cout << "[!]Выберите размер.\n\n" << "[+]Выбор: ";
        int size;
        cin >> size;
        system("cls");
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (i == size / 2 || j == size / 2) {
                    cout << texture << " ";
                }
                else {
                    cout << "  ";
                }

            }
            cout << endl;
        }
    }
    else if (choice == 7) {
        system("cls");
        cout << "[!]Выберите каким будет прямоугольник.\n\n";
        cout << "[1] Заполненным\n[2] Пустым\n\n";
        cout << "[+]Выбор: ";
        int type = 0;
        cin >> type;
        system("cls");
        if (type == 1) {
            cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << endl << "[!]Выберите длину прямоугольника \n\n" << "[+]Выбор: ";
            int along;
            cin >> along;
            system("cls");
            cout << endl << "[!]Выберите ширину прямоугольника \n\n" << "[+]Выбор: ";
            int ashort;
            cin >> ashort;
            system("cls");
            for (int i = 0; i < ashort; i++) {

                for (int j = 0; j < along; j++) {

                    cout << texture << " ";

                }
                cout << endl;
            }
        }
        else if (type == 2) {
            system("cls");
            cout << "[!]Выберите текстуру. \n\n" << "[+]Выбор: ";
            string texture;
            cin >> texture;
            system("cls");
            cout << endl << "[!]Выберите длину прямоугольника \n\n" << "[+]Выбор: ";
            int along;
            cin >> along;
            system("cls");
            cout << endl << "[!]Выберите длину прямоугольника \n\n" << "[+]Выбор: ";
            int ashort;
            cin >> ashort;
            system("cls");
            for (int i = 0; i < ashort; i++) {
                for (int j = 0; j < along; j++) {
                    if (i == 0 || i == ashort - 1 || j == 0 || j == along - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }

        }
        else {
            cout << "\n\n[!] Нет такого варианта ответа\n";
            cout << "[!] Попробуйте еще раз\n\n";
        }
        int _; cin >> _;
        return 0;
    }
}