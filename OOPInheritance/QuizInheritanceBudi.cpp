#include <iostream>
#include <string>
using namespace std;

class Hewan {
    public:
    void predator() {
        cout << "Hewan ini adalah predator" << endl;
    }
        void taring () {
            cout << "Hewan ini bertaring "<< endl;
        }
            void cakar() {
                cout << "Hewan ini memiliki cakar" << endl;
            }
                 
    
};
class Harimau : public Hewan {
    public:
    void predator(){
        cout << "ini adalah Harimau" <<endl;
    }
};
class Singa : public Hewan {
    public:
    void predator(){
        cout << "ini adalah Singa" << endl;
    }
};
class Macan : public Hewan {
    public:
    void predator(){
        cout << "ini adalah Macan" << endl;
    }
};

int main(){
    Harimau hrm;
  //  hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

Singa sg;
//sg.getSinga();
    sg.predator();
    sg.taring();
    sg.cakar();

    Macan mc;
  //  mc.getMacan();
    mc.predator();
    mc.taring();
    mc.cakar();
    return 0;

}


