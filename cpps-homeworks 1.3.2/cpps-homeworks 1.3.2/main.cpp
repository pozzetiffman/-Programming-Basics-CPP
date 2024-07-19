#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a{},b{},c{};
    cin >> a >> b >> c;
    int max{}, mid{}, min{};
    
//    if (a > b && a > c){
//        max = a;
//    }else if (b > a && b > c){
//        max = b;
//    }else {
//        max = c;
//    }

    
//    if (a < b && a < c){
//        min = a;
//    }else if (b < a && b < c){
//        min = b;
//    }else {
//        min = c;
//    }

    
//    if ((a > b && a < c) || (a > c && a < b)) {
//           mid = a;
//    } else if ((b > a && b < c) || (b > c && b < a)) {
//           mid = b;
//    } else {
//           mid = c;
//    }
    
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    mid = ((a < max && a > min) ? a : (b < max && b > min) ? b : c );
    
    cout << max << mid << min ;
    
    
    return 0;
}
