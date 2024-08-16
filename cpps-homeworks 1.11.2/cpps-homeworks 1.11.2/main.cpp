#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    string word;
    
    cout  << "Вам предстоит отгадать загадку: \nКрасна, как рубин, растёт на кусте, Сладка и полезна, на вкус — просто мечта, Её на пирог и в компот положи,Что за ягода,скажи?\n";
    while (cin >> word) {
        
        if (word == "малина"){
            cout << "Правильно! Вы победили! Загаданная ягода — малина\n";
            return 0;
        }
        if (word != "малина"){
            cout << "Неправильно \n";
        }
        cout << "Угадайте ягоду: ";
    }
    
    return 0;
}
