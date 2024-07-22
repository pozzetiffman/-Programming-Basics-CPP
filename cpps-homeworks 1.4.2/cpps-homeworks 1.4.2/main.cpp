#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int cislo{}, ostatok{}; // Переменные для хранения введенного числа и суммы цифр

    // Запрос ввода числа у пользователя
    cout << "Введите число: ";
    cin >> cislo;

    // Получение и суммирование последней цифры числа
    int ostatokSumm = cislo % 10;
    cislo /= 10;
    ostatok += ostatokSumm;

    // Цикл для обработки оставшихся цифр числа
    while (cislo > 0) {
        int ostatokSumm = cislo % 10;
        cislo /= 10;
        ostatok += ostatokSumm;
    }

    // Вывод суммы цифр числа
    cout << "Сумма цифр числа: " << ostatok << endl;

    return 0;
}
