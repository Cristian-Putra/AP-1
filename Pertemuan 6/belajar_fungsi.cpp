#include <iostream>
using namespace std;

void sapa(string nama){
    system("cls");

    cout << "Halo " << nama << "! Selamat belajar C++! "<< endl;
}
int main(){
    string nama_pengguna = "Tian";

    sapa(nama_pengguna);

    return 0;
}