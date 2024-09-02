#include <iostream>
#include <fstream>

using namespace std;

// Функция для выделения памяти под двумерный массив размером rows x cols
int** newMemoriTwoSize(int rows, int cols) {
    int** abb = new int*[rows];
    for (int i{}; i < rows; i++) {
        abb[i] = new int[cols];
    }
    return abb;
}

// Функция для разворота строк двумерного массива
void reverseRows(int** mas, int rows, int cols) {
    // Проходим по половине строк массива
    for (int i{}; i < rows / 2; i++) {
        for (int j{}; j < cols; j++) {
            // Обмен значениями между симметричными строками массива
            int tempRows = mas[i][j]; // Сохраняем значение текущего элемента в переменной tempRows
            mas[i][j] = mas[rows - 1 - i][j]; // Перезаписываем текущий элемент значением симметричного элемента из последней строки
            mas[rows - 1 - i][j] = tempRows; // Записываем сохранённое значение в симметричный элемент из первой строки
        }
    }
}

// Функция для разворота столбцов двумерного массива
void reverseCols(int** mas, int rows, int cols) {
    // Проходим по половине столбцов массива
    for (int i{}; i < rows; i++) {
        for (int j{}; j < cols / 2; j++) {
            // Обмен значениями между симметричными столбцами массива
            int tempCols = mas[i][j]; // Сохраняем значение текущего элемента в переменной tempCols
            mas[i][j] = mas[i][cols - 1 - j]; // Перезаписываем текущий элемент значением симметричного элемента из последнего столбца
            mas[i][cols - 1 - j] = tempCols; // Записываем сохранённое значение в симметричный элемент из первого столбца
        }
    }
}

int main(int argc, const char* argv[]) {

    ifstream file("in.txt"); // Открываем файл "in.txt" для чтения
    if (file.is_open()) { // Проверяем, успешно ли открыт файл
        
        int rows{}, cols{};
        file >> rows >> cols; // Читаем количество строк и столбцов массива из файла
        
        int** abb = newMemoriTwoSize(rows, cols); // Выделяем память под двумерный массив
        
        // Заполняем массив данными из файла
        for (int i{}; i < rows; i++) {
            for (int j{}; j < cols; j++) {
                file >> abb[i][j];
            }
        }
        
        // Разворачиваем массив по столбцам
        reverseCols(abb, rows, cols);
        
        // Выводим развернутый массив на экран
        for (int i{}; i < rows; i++) {
            for (int j{}; j < cols; j++) {
                cout << abb[i][j] << " ";
            }
            cout << "\n";
        }
        
        // Освобождаем память, выделенную под массив
        for (int i{}; i < rows; i++) {
            delete[] abb[i];
        }
        delete[] abb;
        file.close(); // Закрываем файл
        
    } else {
        cout << "Error 15: файл не найден\n"; 
    }

    return 0;
}
