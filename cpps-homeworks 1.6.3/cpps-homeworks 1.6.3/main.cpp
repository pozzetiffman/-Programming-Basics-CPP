#include <iostream>
using namespace std;

static int one{1}, zero{};

long fibonaci (long a = one, long b = zero){
    
    long temp{};
    int fib{};
    cin >> fib;
    
    for (int i{}; i < fib; i++){
        if (b > LONG_MAX - a){
            cout << "Переполнение максимального значениея типа LONG\n";
            break;
        }
        temp = b;
        b = a + b;
        a = temp;
        cout << a << "\n";
    }
    return b;
}

int main(int argc, const char * argv[]) {
    
    long q = fibonaci();
    cout << "Последние максимальное значение = " << q << "\n\n\n";

    return 0;
}
