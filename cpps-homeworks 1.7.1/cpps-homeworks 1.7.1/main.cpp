#include <iostream>
using namespace std;

int a;
short b;
long c;
long long d;
float e;
double f;
long double j;
bool h;

void sizeAdres(){
    
    cout << "размер переменной int - (" << sizeof(a) << ") байт _ " << "адрес - " << &a << "\n";
    cout << "размер переменной short - (" << sizeof(b) << ") байт _ " << "адрес - " << &b << "\n";
    cout << "размер переменной long - (" << sizeof(c) << ") байт _ " << "адрес - " << &c << "\n";
    cout << "размер переменной long long - (" << sizeof(d) << ") байт _ " << "адрес - " << &d << "\n";
    cout << "размер переменной float - (" << sizeof(f) << ") байт _ " << "адрес - " << &f << "\n";
    cout << "размер переменной double - (" << sizeof(e) << ") байт _ " << "адрес - " << &e << "\n";
    cout << "размер переменной long double - (" << sizeof(j) << ") байт _ " << "адрес - " << &j << "\n";
    cout << "размер переменной bool - (" << sizeof(h) << ") байт _ " << "адрес - " << &h << "\n";
}

int main(int argc, const char * argv[]) {

    sizeAdres();
    
    return 0;
}
