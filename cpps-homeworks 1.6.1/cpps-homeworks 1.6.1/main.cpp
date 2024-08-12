#include <iostream> 
using namespace std;

// Функция для сложения двух чисел
int sum(int a, int b) {
    int result = a + b; // Вычисление суммы
    cout << a << " + " << b << " = " << result << "\n"; // Вывод результата на консоль
    return result; // Возвращение результата
}

// Функция для вычитания двух чисел
int diff(int a, int b) {
    int result = a - b; // Вычисление разницы
    cout << a << " - " << b << " = " << result << "\n"; // Вывод результата на консоль
    return result; // Возвращение результата
}

// Функция для умножения двух чисел
int multiplication(int a, int b) {
    int result = a * b; // Вычисление произведения
    cout << a << " * " << b << " = " << result << "\n"; // Вывод результата на консоль
    return result; // Возвращение результата
}

// Функция для деления двух чисел
double division(double a, double b) {
    double result = a / b; // Вычисление частного
    cout << a << " / " << b << " = " << result << "\n"; // Вывод результата на консоль
    return result; // Возвращение результата
}

int main(int argc, const char * argv[]) {
    // Вызов функции сложения
    sum(5, 10);
    // Вызов функции вычитания
    diff(5, 10);
    // Вызов функции умножения
    multiplication(5, 10);
    // Вызов функции деления
    division(5, 10);
    
    return 0;
}
