#include <iostream>
using namespace std;



int main(int argc, const char * argv[]) {
   
    string zodiakZemlya[]{
        "Овен","овен","Телец","телец","Близнецы","близнецы","Лев","лев","Дева","дева","Весы","весы","Стрелец","стрелец","Козерог","козерог","Водолей","водолей","Рыбы","рыбы"
    };
    string zodiakVoda[]{
        "Рак","рак","Скорпион","скорпион","Рыбы","рыбы"
    };
    string predskazaniye[] {
       "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.",
        "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринокБудет не только весело, но и интересно: найдётся дело, которое увлечёт всех"
    };
    
    string pol;
    int vozrast{};
    string zodiakPiple;
    
    cout << "введите пол ";
    cin >> pol;
    cout << "введите возраст ";
    cin >> vozrast;
    cout << "введите знак зодиака ";
    cin >> zodiakPiple;
    
    int sizeZ = sizeof zodiakZemlya / sizeof zodiakZemlya[0];
    int sizeV = sizeof zodiakVoda / sizeof zodiakVoda[0];
    
    if (vozrast < 40 && (pol == "м" || pol == "М")){
        for (int i{}; i < sizeV; i++ ){
            if (zodiakPiple == zodiakVoda[i]){
                cout << predskazaniye[0]<< "\n";
            }
        }
    }
    if ((vozrast < 30 && vozrast > 15 ) || (pol == "ж" && pol == "Ж")){
        for (int i{}; i < sizeZ; i++ ){
        if (zodiakPiple == zodiakZemlya[i]){
            cout << predskazaniye[1] << "\n";
            }
        }
    }
    else {
        cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)\n";
    }

    return 0;
}
