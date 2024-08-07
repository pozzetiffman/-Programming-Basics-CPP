#include <iostream>  // Подключение стандартной библиотеки ввода/вывода
using namespace std;

int main(int argc, const char * argv[]) {

    // Инициализация массива целых чисел
    int add[]{2, 1, 3, 4, 5, 6, 7, 8, 10, 9};
    
    // Вычисление размера массива
    int size = sizeof(add) / sizeof(add[0]);
    
    // Инициализация переменных для минимального и максимального значений первым элементом массива
    int min = add[0], max = add[0];
    
    // Цикл для нахождения минимального и максимального значений в массиве
    for (int i = 0; i < size; i++) {
        // Проверка текущего элемента массива на большее значение и обновление max
        if (add[i] > max) {
            max = add[i];
        }
        
        // Проверка текущего элемента массива на меньшее значение и обновление min
        if (add[i] < min) {
            min = add[i];
        }
    }
    
    // Вывод максимального и минимального значений
    cout << "Max: " << max << ", Min: " << min << endl;

    return 0;  // Завершение программы
}
