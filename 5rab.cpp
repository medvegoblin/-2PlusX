#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout <<"              ===Переводчик==="<<endl<<endl 
    <<"Выберите с какого языка вы хотите перевести слова:" 
    <<endl<<endl<<"1-РУСКИЙ"<<endl<<"2-АНГЛИЙСКИЙ"<<endl<<
    "0-завершить программу"<<endl<<endl<<"выбор: ";
    int a;
    cin >> a;
    if (a==1){
    cout << "Введите номер слова что-бы перевести его на Английский:"<<endl<<endl<<"1-Привет   2-Пока"<<
    endl<<"3-Учеба    4-Игра"<<endl<<"5-Время    6-Друг"<<endl<<"7-Часы     8-Стул"
    <<endl<<"9-Стол     10-Мышь"
    <<endl<<"11-Клавиатура   12-Микрофон"
    <<endl<<"13-Наушники     14-Компьютер"
    <<endl<<"15-Веб-Камера"<<endl<<endl<<"выбор: ";
    int b;
    cin >> b;
    switch(b){
        case 1:
    cout << "Привет-Hi";
    break;
        case 2:
    cout << "Пока-Bye";
    break;
        case 3:
    cout << "Учеба-Study";
    break;
        case 4:
    cout << "Игра-Game";
    break;
        case 5:
    cout << "Время-Time";
    break;
        case 6:
    cout << "Друг-Friend";
    break;
        case 7:
    cout << "Часы-Watch";
    break;
        case 8:
    cout << "Стул-Chair";
    break;
        case 9:
    cout << "Стол-Table";
    break;
        case 10:
    cout << "Мышь-Mouse";
    break;
        case 11:
    cout << "Клавиатура-Keyboard";
    break;
        case 12:
    cout << "Микрофон-Microphone";
    break;
        case 13:
    cout << "Наушники-Headphones";
    break;
        case 14:
    cout << "Компьютер-Computer";
    break;
        case 15:
    cout << "Веб-Камера-Webcam;)";
    break;
    default:
    cout<<endl<<"нет такого варианта"<<endl<<"попробуйте еще раз...";
    break;
    }
    }
    else if (a==2){
            cout << "Введите номер слова что-бы перевести его на Русский:"<<endl
            <<endl<<"1-Hi        2-Bye"<<
    endl<<"3-Study     4-Game"<<endl<<"5-Time      6-Friend"
    <<endl<<"7-Watch     8-Chair"
    <<endl<<"9-Table     10-Mouse"
    <<endl<<"11-Keyboard    12-Microphone"
    <<endl<<"13-Headphones  14-Computer"
    <<endl<<"15-Webcam"<<endl<<endl<<"выбор: ";
    int b;
    cin >> b;
    switch(b){
        case 1:
    cout << "Hi-Привет";
    break;
        case 2:
    cout << "Bye-Пока";
    break;
        case 3:
    cout << "Study-Учеба";
    break;
        case 4:
    cout << "Game-Игра";
    break;
        case 5:
    cout << "Time-Время";
    break;
        case 6:
    cout << "Friend-Друг";
    break;
        case 7:
    cout << "Watch-Часы";
    break;
        case 8:
    cout << "Chair-Стул";
    break;
        case 9:
    cout << "Table-Стол";
    break;
        case 10:
    cout << "Mouse-Мышь";
    break;
        case 11:
    cout << "Keyboard-Клавиатура";
    break;
        case 12:
    cout << "Microphone-Микрофон";
    break;
        case 13:
    cout << "Headphones-Наушники";
    break;
        case 14:
    cout << "Computer-Компьютер";
    break;
        case 15:
    cout << "Webcam-Веб-Камера;)";
    break;
    default:
    cout<<endl<<"нет такого варианта"<<endl<<"попробуйте еще раз...";
    break;
    }
    }
    else if (a==0){cout<<" ";
    }
    else{cout<<endl<<"нет такого варианта"<<endl<<"попробуйте еще раз...";} 
    return 0;
}