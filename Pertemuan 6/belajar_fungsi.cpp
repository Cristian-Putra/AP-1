#include <iostream>
using namespace std;

void sapa(string nama){ //fungsi untuk menerima parameter nama bertipe data string
    system("cls");

    cout << "Halo " << nama << "! Selamat belajar C++! "<< endl;
}
int main(){ // fungsi utama
    string nama_pengguna = "Tian"; // menginisialisasi nama_pengguna dengan value Tian 

    sapa(nama_pengguna); // memanggil fungsi sapa

    return 0;
}
