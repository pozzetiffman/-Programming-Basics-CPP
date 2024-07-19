#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    bool death = true;
    bool life = false;

    cout << boolalpha << death << " " << death << " " <<  (death || death) << "\n";
    cout << boolalpha << life << " " << death << " " <<  (life || death) << "\n";
    cout << boolalpha << death << " " << life << " " <<  (death || life) << "\n";
    cout << boolalpha << life << " " << life << " " <<  (life || life) << "\n\n\n";
    
    cout << boolalpha << death << " " << death << " " <<  (death && death) << "\n";
    cout << boolalpha << life << " " << death << " " <<  (life && death) << "\n";
    cout << boolalpha << death << " " << life << " " <<  (death && life) << "\n";
    cout << boolalpha << life << " " << life << " " <<  (life && life) << "\n\n\n";
   
    
    
    return 0;
}
