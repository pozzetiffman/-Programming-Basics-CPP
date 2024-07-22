#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int cislo{}, summa{};
    bool nool = true;
    
    
    while (nool) {
        cout << "ведите число ";
        cin >> cislo;
        summa += cislo;
        if (cislo == 0){
            nool = false;
        }
    }
    cout << summa << "\n";
    
    return 0;
}
