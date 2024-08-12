#include <iostream>
using namespace std;

int counting_function (){
    
    static int counting{};
    counting += 1;
    cout << "Количество вызовов функции counting_function(): "<< counting << "\n";
    return counting;
}

int main(int argc, const char * argv[]) {
    
    int size{15};
    for (int i{0}; i < size; i++){
        counting_function();
    }
    
    return 0;
}
