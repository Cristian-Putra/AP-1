#include<iostream>
using namespace std;

class ContohAkses {
    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    int publicVar;

    // Constructor
    ContohAkses(){
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

int main(){
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