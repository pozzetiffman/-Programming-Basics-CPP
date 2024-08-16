#include <iostream>
using namespace std;

// Функция для создания двумерного динамического массива
int** create_two_dim_array(int rows, int cols) {
    int** mas = new int*[rows]; // Выделяем память для массива указателей (строк)
    for (int i{}; i < rows; i++) {
        mas[i] = new int[cols]; // Для каждой строки выделяем память под столбцы
    }
    return mas; // Возвращаем указатель на массив
}

// Функция для заполнения двумерного массива значениями
void fill_two_dim_array(int** mas, int rows, int cols) {
    for (int i{}; i < rows; i++) {
        for (int j{}; j < cols; j++) {
            mas[i][j] = (i + 1) * (j + 1); // Заполняем массив произведением индексов (i+1)*(j+1)
        }
    }
}

// Функция для вывода двумерного массива на экран
void print_two_dim_array(int** mas, int rows, int cols) {
    for (int i{}; i < rows; i++) {
        for (int j{}; j < cols; j++) {
            cout << mas[i][j] << " ";
        }
        cout << "\n";
    }
}

// Функция для освобождения памяти, занятой двумерным массивом
void delete_two_dim_array(int** mas, int rows) {
    for (int i{}; i < rows; i++) {
        delete[] mas[i]; // Освобождаем память, выделенную для каждой строки
    }
    delete[] mas; // Освобождаем память, выделенную для массива указателей (строк)
}

int main(int argc, const char* argv[]) {
    int rows{}, cols{};
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int** abb = create_two_dim_array(rows, cols); // Создание двумерного массива

    fill_two_dim_array(abb, rows, cols); // Заполнение массива значениями
    print_two_dim_array(abb, rows, cols); // Вывод массива на экран
    delete_two_dim_array(abb, rows); // Освобождение памяти

    return 0; 
}
