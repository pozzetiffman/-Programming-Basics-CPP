#include <iostream>
using namespace std;

int a{5},b{8};

void swapp (){
    swap(a,b);
}

int main(int argc, const char * argv[]) {
    
    cout << "a = " << a << ", b = " << b << "\n";
    swapp();
    cout << "a = " << a << ", b = " << b << "\n";
    
    return 0;
}
