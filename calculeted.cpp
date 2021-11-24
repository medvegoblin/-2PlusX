#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    double a;
    double b;
    char oper;
    double c;
    cout << "   КАЛЬКУЛЯТОР   \n\n\n";
    cin >> a;
    system("cls");
    cout << "   КАЛЬКУЛЯТОР   \n\n\n";
    cout << a;
    cin >> oper;
    system("cls");
    cout << "   КАЛЬКУЛЯТОР   \n\n\n";
    cout << a;
    cout << oper;
    cin >> b;
    system("cls");
    switch (oper) {
    case'+':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << a + b;
        break;
    case'-':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << a - b;
        break;
    case'/':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << a / b;
        break;
    case'*':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << a * b;
        break;
    case'^':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << pow(a, b);
        break;
    case'V':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << oper;
        cout << a;
        cout << "=";
        cout << sqrt(a);
        break;
    case'%':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << a;
        cout << oper;
        cout << b;
        cout << "=";
        cout << (a / 100)*b;
        break;
    case'&':
        cout << "   КАЛЬКУЛЯТОР   \n\n\n";
        cout << oper;
        cout << a;
        cout << "=";
        cout << sin(a);
        break;
    default: return 1;
    }
    int _; cin >> _;
    return 0;
}