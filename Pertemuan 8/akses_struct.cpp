#include<iostream>
#include<string>
using namespace std;

struct mahasiswa{ // struct mahasiswa yang berisi data seperti nama, umur, ipk
    string nama;// nama tipe data string
    int umur; // umur tipe data integer
    float ipk; // ipk tipe data float
};

int main(){
    system("cls");

    mahasiswa mhs1;

    mhs1.nama = "Cristian";
    mhs1.umur = 19;
    mhs1.ipk = 10;

    /*cout << "Akses dengan . : " << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "ipk : " << mhs1.ipk << endl;*/

    mahasiswa *ptrmhs = &mhs1; // pointer ke struct mahasiswa, yaitu ptrmhs, dan menunjukkannya ke alamat dari mhs1.

    cout << "Akses dengan -> : " << endl;
    cout << "Nama : " << ptrmhs->nama << endl;
    cout << "Umur : " << ptrmhs->umur << endl;
    cout << "ipk : " << ptrmhs->ipk << endl;
}

