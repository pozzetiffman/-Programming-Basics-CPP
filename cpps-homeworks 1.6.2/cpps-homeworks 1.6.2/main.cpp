#include <iostream>
using namespace std;

// Функция для возведения числа в степень
int degree(int value = 5, int power = 2, int result = 1) {
    // Цикл для умножения числа value на само себя power раз
    for (int i{}; i < power; i++) {
        result *= value; // Умножение result на value
    }
    // Вывод результата на консоль
    cout << value << " в степени " << power << " = " << result << "\n";
    return result; // Возвращение результата
}
int main(int argc, const char * argv[]) {
    // Вызов функции возведения в степень с параметрами по умолчанию (5^2)
    degree();
    // Вызов функции возведения в степень для 3^3
    degree(3, 3, 1);
    // Вызов функции возведения в степень для 4^4
    degree(4, 4, 1);

    return 0;
}
