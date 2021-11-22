#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[             Калькулятор              ]" << endl << endl;
    cout << "[+] Сложение" << endl << endl;
    cout << "[-] Вычитание" << endl << endl;
    cout << "[] Умножение" << endl << endl;
    cout << "[/] Деление" << endl << endl;
    cout << "[%] Деление без остатка" << endl << endl;
    cout << "Введите число a: ";
    float a;
    cin >> a;
    cout << "выберите действие: ";
    char action;
    cin >> action; 
    cout << "Введите число b: ";
    float b;
    cin >> b; 
    int a1;
    int b1;
    if (action == '+'){
    cout <<a<<"+"<<b <<"="<<a+b;
    }
    else if (action == '-'){
    cout <<a<<"-"<<b<<"="<<a-b;
    }
    else if (action == '*'){
    cout <<a<<"*"<<b<<"="<<a*b;
    }
    else if (action == '/'){
    cout <<a<<"/"<<b<<"="<<a/b;
    }
    else if (action == '%'){
    int a1=a;
    int b1=b;
    cout <<a1<<"%"<<b1<<"="<<a1%b1;
    }
    else {
    cout << "неопознанный символ, повторите попытку";
    }
    return 0;
}