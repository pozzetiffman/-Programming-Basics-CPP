#include <iostream>
using namespace std;

void reverse(int* mas, int sizeMas) {
    // Первый цикл используется для разворота массива
    for (int i{}; i < sizeMas / 2; i++) {
        // Обмен значениями между симметричными элементами массива
        int temp = mas[i]; // Сохранение текущего элемента в переменной temp
        mas[i] = mas[sizeMas - 1 - i]; // Перезапись текущего элемента значением симметричного элемента с конца массива
        mas[sizeMas - 1 - i] = temp; // Запись сохраненного значения в симметричный элемент
    }
    for (int i{}; i < sizeMas; i++) {
        cout << mas[i] << " ";
    }
    cout << "\n";
}

int main(int argc, const char * argv[]) {

    cout << "До функции reverse: ";
    int abb [] {0,1,2,3,4,5,6,7,8,9}; // {9,8,7,6,5,4,3,2,1,0} {0,1,2,3,4,5,6,7,8,9}
    int sizeAb = (sizeof(abb) / sizeof(abb[0]));
    
    for (int i{}; i < sizeAb; i++){
        cout << abb[i] << " ";
    }
    cout << "\n";
    
    cout << "После функции reverse: ";
    reverse(abb, sizeAb);

    return 0;
}
