#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    float jari_jari, volume, luas_permukaan;
    const float phi = 3.14; // konstanta, nilai yang akan selalu tetap

    cout<< "masukkan jari jari bola: ";cin>>jari_jari; // meminta inputan dari user dan menyimpannya 
    volume = (float) (4)/(float) (3)*phi*jari_jari*jari_jari*jari_jari; //rumus untuk volume bola
    luas_permukaan = 4*phi*jari_jari*jari_jari; // rumus untuk luas permukaan bola
    cout<< "volume bola: "<<volume<<endl; // menampilkan volume bola berdasarkan hasil inputan user
    cout<< "luas permukaan bola: "<<luas_permukaan<<endl; // menampilkan luas permukaan bola berdasarkan inputan user
}
