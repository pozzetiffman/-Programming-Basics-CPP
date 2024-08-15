#include <iostream>
using namespace std;

int* memoryAllocation (int memorySize){
    int* memory = new int [memorySize];
    return memory;
}

void input (int* mas, int size){
    for (int i{}; i < size; i++){
        cout << "abb ["<< i << "] = ";
        cin >> mas[i];
    }
}

void conclusion (int* mas, int size){
    for (int i{}; i < size; i++) {
        cout << mas[i] << " ";
    }
}

int main(int argc, const char * argv[]) {

    int size{};
    cout << "Введите размер массива: ";
    cin >> size;
    
    int* abb = memoryAllocation(size);
    input (abb, size);
    
    cout  << "Введённый массив: ";
    conclusion (abb, size);
    
    delete abb;
   
    
    return 0;
}
