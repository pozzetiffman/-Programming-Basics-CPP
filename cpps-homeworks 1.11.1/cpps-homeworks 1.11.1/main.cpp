#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) {

    // Выделение памяти для строки (20 символов)
    char* strName = new char[20];
    char* strLastName = new char[20];
    
    cout << "Введите имя: ";
    cin.getline(strName, 20);
    
    cout << "Введите фамилию: ";
    cin.getline(strLastName, 20);
    
    
    cout << "Здравствуйте, " << strName << " " << strLastName << "!" << "\n";
    
    
//    cout << "Фамилия  и имя по буквам: ";
//    for (int i{}; strName[i] != '\0'; i++) {
//            cout << strName[i] << " ";
//    }
//    cout << "\t";
//    for (int i{}; strName[i] != '\0'; i++) {
//        cout << strLastName[i] << " ";
//    }
//    cout << "\n";

    // Освобождение памяти
    delete[] strName;
    delete[] strLastName;
    
    return 0;
}
