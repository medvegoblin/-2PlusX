#include <iostream>
using namespace std;

struct Questions
{
    string Question;
    string Answers[4];
    short Correct;
};

int Show(Questions Test);
void Check(int& points, int Answer, Questions Test);


int Show(Questions Test)
{
    short answer;
    cout << Test.Question << endl << endl;
    for (int i = 0; i < 4; i++)
        cout << i + 1 << ". " << Test.Answers[i] << endl;
    cout << "\nВведите ответ: ";
    cin >> answer;
    return answer;
}

void Check(int& Points, int Answer, Questions Test)
{
    if (Answer == Test.Correct)
    {
        Points++;
        cout << "\nВерно!\nОчки: " << Points << "\n\n\n\n";
    }
    else cout << "\nНеверно!\nОчки: " << Points << "\n\n\n\n";
}

void rule() {
    system("cls");
    cout << "Правила:\n\n Я - задаю вопросы, а вы - отвечате.\nЗа каждый правильный ответ - 1 балл\n";
    cout << "\n\n[!]Для выхода из правил напишите любое число или слово: ";
    string vixod;
    cin >> vixod;
    system("cls");
}

void game() {
    system("cls");
    int Points = 0;
    Questions Test[15] = {
        {"На каких платформах доступна Counter-Strike: Global Offensive?", {"playstation", "XboX", "PC", "Все перечисленное"}, 4},
        {"Сколько в 1 обойме партонов у AWP?", {"10", "7", "8", "5"}, 1},
        {"Какая максимальная сумма может быть у игрока?", {"1500", "1600", "16000", "15000"}, 3},
        {"Сколько стоит Desert Eagle?", {"500", "800", "300", "700"}, 4},
        {"На какой карте который доступен в ММ спасают заложников?", {"Basalt", "Ancient", "Cobblestone", "Office"}, 4},
        {"На какой карте находится граффити посвященное игроку S1mple?", {"Mirage", "Dust 2", "Overpass", "Cache"}, 4},
        {"На какой карте находится граффити посвященное игроку olofmeister?", {"Mirage", "Dust 2", "Overpass", "Cache"}, 3},
        {"На какой карте находится граффити посвященное команде с оружием AWP?", {"Team EnVyUs", "SK Gaming", "Fnatic", "Team Liquid"}, 3},
        {"На какой карте есть курицы?", {"Dust 2", "Inferno", "Cache", "Mirage"}, 2},
        {"Самое дорогое оружие", {"M249", "Scar-20", "G3SG1", "AWP"}, 1},
        {"Сколько времени горит молотов?", {"5", "8", "3", "7"}, 4},
        {"Код от бомбы", {"7354608", "73556082", "7355608", "7025608"}, 3},
        {"Что будет если много приседать?", {"Медленнее будете приседать и вставать", "Ничего не будет", "Потеряете оружие", "Будете стонать"}, 1},
        {"При замедленной ходьбе, можно бесшумно прыгать?", {"Да", "В кс можно прыгать?", "Да, но если ваш агент легкий", "Нет"}, 4},
        {"За сколько секунд устанавливается бомба?", {"5", "2", "3", "4"}, 3}
    };

    for (int i = 0; i < 15; i++)
    {
        int answer = Show(Test[i]);
        Check(Points, answer, Test[i]);
        system("pause");
        system("cls");
    }

    cout << "Итог.\n\nСчет:" << Points;
}

int main()
{
    setlocale(0, "");
    int i = 1;
    while (i > 0 && i < 5) {

        cout << "                  Поле CS:GO                 \n\n";
        cout << "[!] Меню:\n";
        cout << "[1] Начать игру\n[2] Правила\n[3] Выйти\n\n[+] Выбор: ";
        int vibor;
        cin >> vibor;
        switch (vibor) {
        case 1:
            game();
            i = 5;
            break;
        case 2:
            rule();
            break;
        case 3:
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