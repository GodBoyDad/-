

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int Var, Var2;
    Var2 = 5; //Var наше число. Var 2 количество товаров на складе.
    cout << "Введите количество единиц товара: " << endl;
    cin >> Var;

    if (Var2 >= Var)
        cout << "Покупка успешно совершенна! " << endl; //число равно или меньше чем на складе
    else if(Var2 < Var)
        cout << "Транзакция отменена." << endl; //отменяет транзкакцию

     else if (Var < 0)
        cout << "Ваше число меньше нуля" << endl;
    else
        cout << "Техническая ошибка!" << endl;
   
   











}

