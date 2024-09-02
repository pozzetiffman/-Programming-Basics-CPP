#include <iostream>
#include <fstream>

using namespace std;

// Функция для разворота массива
void reverse(int* mas, int sizeMas) {
    // Проходим только половину массива, так как при обмене элементов в первой и второй половинах массив будет полностью развернут
    for (int i{}; i < sizeMas / 2; i++) {
        // Обмен значениями между симметричными элементами массива
        int temp = mas[i]; // Сохраняем значение текущего элемента в переменной temp
        mas[i] = mas[sizeMas - 1 - i]; // Перезаписываем текущий элемент значением симметричного элемента с конца массива
        mas[sizeMas - 1 - i] = temp; // Записываем сохранённое значение в симметричный элемент
    }
}

int main(int argc, const char * argv[]) {
    
    ifstream inpetFile("newFile.txt"); // Открываем файл для чтения

    // Проверяем, удалось ли открыть файл
    if (inpetFile.is_open()){
        
        int size;
        inpetFile >> size; // Читаем размер массива из файла
        
        int* mas = new int[size]; // Выделяем память под массив размера size
        
        // Считываем элементы массива из файла
        for (int i{}; i < size; i++) {
            inpetFile >> mas[i];
        }
        
        // Вызываем функцию для разворота массива
        reverse(mas, size);
        
        // Выводим развернутый массив в консоль
        for (int i{}; i < size; i++) {
            cout << mas[i] << " ";
        }
        
        delete[] mas; // Освобождаем память, выделенную под массив
    } else {
        cout << "Не удалось открыть файл.\n";
    }
    
    cout << "\n";
    
    return 0;
}
