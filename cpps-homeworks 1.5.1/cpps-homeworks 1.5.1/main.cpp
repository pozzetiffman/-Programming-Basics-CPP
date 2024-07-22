#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    // Инициализация массива целых чисел
    int add[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Определение размера массива
    int size = sizeof(add) / sizeof(add[0]);

    // Цикл для перебора элементов массива и их вывода
    for (int i{}; i < size; i++) {
        
        // Если элемент не последний, выводим элемент с запятой
        if (i < size - 1) {
            cout << add[i] << ", ";
        }
        // Если элемент последний, выводим его без запятой и переносим строку
        else {
            cout << add[i] << "\n";
        }
    }

    return 0;
}
