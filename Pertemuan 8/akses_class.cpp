#include<iostream>
using namespace std;

class ContohAkses {
    private:
    int privateVar; // hanya bisa diakses dari dalam class itu sendiri.

    protected:
    int protectedVar; //bisa diakses oleh class sendiri dan class turunan.

    public:
    int publicVar; //bisa diakses dari mana saja.

    // Constructor
    ContohAkses(){
        //menginisialisasi nilai awal
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua(){
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses{
    public:
    void aksesProtected(){
        cout << protectedVar << endl;
        cout << publicVar << endl;
        //cout << privateVar << endl; // error
    }
};

int main(){ // program utama
    system("cls");

    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luas class: "<< endl;
   // cout << privateVar << endl ;// error
    //cout << protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout << "\n Akses dari kelas turunan " << endl;
    Turunan tur;
    tur.aksesProtected();
}
