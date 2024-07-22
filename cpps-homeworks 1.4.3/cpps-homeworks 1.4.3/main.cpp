#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    int cislo{}; // Переменная для хранения введенного числа

    // Запрос ввода числа у пользователя
    cout << "Введите число для вывода таблицы умножения: ";
    cin >> cislo;

    // Цикл для вывода таблицы умножения от 1 до 10
    for (int i{1}; i < 11; i++) {
        int ravno = cislo * i; // Переменная для хранения результата умножения
        cout << cislo << " * " << i << " = " << ravno << "\n"; // Вывод результата умножения
    }

    return 0;
}
