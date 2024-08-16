#include <iostream>
using namespace std;

double* create_array (int memorySize){
    double* memory = new double[memorySize];
    
    for (int i {}; i < memorySize; i ++){
        memory[i] = 0.0;
        cout << memory[i] << " ";
    }
    cout << "\n";
    
    return memory;
}

int main(int argc, const char * argv[]) {

    int size;
    cout << "Введите массив : ";
    cin >> size;
    
    cout << "Массив : ";
    double* abb = create_array(size);
    
    delete abb;
    
    return 0;
}
  
