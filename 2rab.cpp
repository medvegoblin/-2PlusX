#include <iostream>
using namespace std;
int main() {
setlocale(0, "");
cout « "Выберите время года:" « endl « "1 - Лето" « endl « "2 - Осень" « endl « "3 - Зима" « endl « "4 - Весна" « endl;
int a;
cin » a;
if (a == 1){
cout « "Вот и лето прошло,"« endl «Словно и не бывало.";
} else if (a == 2){
cout « "Холодно и Мокро.";
} else if (a == 3){
cout « "УРААА, МАНДАРИНКИ!!!";
} else if (a == 4){
cout « "Оп, живем, живем, Скоро лето!";
} else {
cout « "Что не понятно?!?!"« endl « "1, 2, 3 или 4 выбери...";
}
return 0;
}