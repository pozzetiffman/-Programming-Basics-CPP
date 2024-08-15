#include <iostream>
using namespace std;

void print (int* masOne , int size){
    for (int i{}; i < size; i++){
        cout << masOne[i] << " ";
    }
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    
    int masOne []{1,2,3,4,5,6,7,8,9};
    int masTwo []{6,5,4,8};
    int masThree []{1,4,3,7,5};
    
    int sizeOne = (sizeof(masOne) / sizeof(masOne[0]));
    int sizeTwo = (sizeof(masTwo) / sizeof(masTwo[0]));
    int sizeThree = (sizeof(masThree) / sizeof(masThree[0]));
    
    print(masOne, sizeOne);
    print(masTwo, sizeTwo);
    print(masThree, sizeThree);
    
    return 0;
}
