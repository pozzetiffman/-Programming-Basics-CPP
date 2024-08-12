#include <iostream>
using namespace std;

int x{6}, y{9};

namespace Addition{
int calc(int x, int y){
    
    return x + y;
    }
}

namespace Subtraction{
int calc(int x, int y){
    
    return x - y;
    }
}

namespace Multiplication{
int calc(int x, int y){
    
    return x * y;
    }
}

namespace Division{
int calc(int x, int y){
    
    return x / y;
    }
}

int main(int argc, const char * argv[]) {

    cout << "Сложение: " << Addition::calc(x,y) <<"\n";
    cout << "Вычитание: " << Subtraction::calc(x,y) <<"\n";
    cout << "Умножение: " << Multiplication::calc(x,y) <<"\n";
    cout << "Деление: " << Division::calc(x,y) <<"\n";
    
    return 0;
}
