#include<iostream> //header cpp
using namespace std; // digunakan agar kita tidak perlu mengetikkan std berulang di dalam program

int main() // indikasi program utama
{
    system("cls");
    float luas, p, l; // mendeklarasikan variabel luas,p(panjang).l(lebar) dengan tipe data float

    cout << "Masukkan Panjang Segiempat : ";cin>>p; //user diminta memasukkan nilai panjang dan kemudian nilainya akan disimpan 
    cout << "Masukkan Lebar Segiempat : ";cin>>l; // user dimita memasukkan nilai lebar dan kemudian nilainya akan disimpan
    
    luas = p * l; // rumus luas persegi
    cout << "Luas Segiempat : "<<luas; // menampilkan luas segiempat berdasarkan inputan user
    
}
