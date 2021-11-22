#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Выберите номер месяца от 1 до 12:" << endl << endl;
    int a;
    cin >> a;
    switch(a){
    case 1:
    cout << "Вы выбрали месяц январь";
    break;
        case 2:
    cout << "Вы выбрали месяц февраль";
    break;
        case 3:
    cout << "Вы выбрали месяц март";
    break;
        case 4:
    cout << "Вы выбрали месяц апрель";
    break;
        case 5:
    cout << "Вы выбрали месяц май";
    break;
        case 6:
    cout << "Вы выбрали месяц июнь";
    break;
        case 7:
    cout << "Вы выбрали месяц июль";
    break;
        case 8:
    cout << "Вы выбрали месяц август";
    break;
        case 9:
    cout << "Вы выбрали месяц сентябрь";
    break;
        case 10:
    cout << "Вы выбрали месяц октябрь";
    break;
        case 11:
    cout << "Вы выбрали месяц ноябрь";
    break;
        case 12:
    cout << "Вы выбрали месяц декабрь";
    break;
    default:
    cout<<"нет такого месяца"<<endl<<"попробуйте еще раз";
    break;
    }
    return 0;
}