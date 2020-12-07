// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    int Var, Var2, Var3;
    Var2 = 5;
    cout << "Введите количество единиц товара: " << endl;
    cin >> Var;

    if (Var2 <= Var)
        cout << "Покупка успешно совершенна! " << endl;
    else if(Var2 < Var)
        cout << "Транзакция отменена." << endl;

     else if (Var < 0)
        cout << "Ваше число меньше нуля" << endl;
    else
        cout << "Техническая ошибка!" << endl;
   
   











}

