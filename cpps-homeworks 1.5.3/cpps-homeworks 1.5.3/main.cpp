#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // Инициализация двумерного массива целых чисел
    int arr[][5]{{1, 2, 3, 4, 5},
                 {6, 7, 8, 9, 10},
                 {11, 12, 13, 14, 15}};
    
    // Определение количества строк и столбцов в массиве
    int sizeS = sizeof(arr) / sizeof(arr[0]);  // Количество строк
    int sizeR = sizeof(arr[0]) / sizeof(arr[0][0]);  // Количество столбцов
    
    // Инициализация переменных для хранения минимального и максимального значений
    int max = arr[0][0], min = arr[0][0];
    // Инициализация переменных для хранения индексов минимального и максимального значений
    int maxindexi{}, maxindexj{}, minindexi{}, minindexj{};
    
    // Проход по всем элементам двумерного массива
    for (int i = 0; i < sizeS; i++) {
        for (int j = 0; j < sizeR; j++) {
            // Вывод текущего элемента массива
            cout << arr[i][j] << "\t";
            // Проверка текущего элемента на большее значение и обновление max и его индексов
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxindexi = i;
                maxindexj = j;
            }
            // Проверка текущего элемента на меньшее значение и обновление min и его индексов
            if (arr[i][j] < min) {
                min = arr[i][j];
                minindexi = i;
                minindexj = j;
            }
        }
        cout << "\n";  
    }
    // Вывод индексов максимального и минимального значений
    cout << "Max index: " << maxindexi << " " << maxindexj << "\n";
    cout << "Min index: " << minindexi << " " << minindexj << "\n";
    
    return 0;
}
