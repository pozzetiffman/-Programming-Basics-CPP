#include <iostream>
#include <fstream>    // Подключение библиотеки для работы с файлами

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Создание объекта ifstream для открытия файла "newfile.txt" на чтение
    ifstream inputFile ("newfile.txt");
    
    // Проверка, успешно ли открыт файл
    if(inputFile.is_open()){
        string line; // Переменная для хранения строки, считанной из файла
        
        // Цикл, который считывает строки из файла, пока не достигнет конца файла
        while (inputFile >> line) {
            // Вывод каждой считанной строки на консоль
            cout << line << "\n";
        }
        
        // Закрытие файла после завершения чтения
        inputFile.close();
    }
    else {
        // Сообщение об ошибке, если файл не удалось открыть
        cout << "Не удалось открыть файл.\n";
    }
    
    return 0;
}
