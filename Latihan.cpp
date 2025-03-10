#include<iostream>
using namespace std;

int main()
{
    system ("cls");
    float jari_jari, volume, luas_permukaan;
    const float phi = 3.14;

    cout<< "masukkan jari jari bola: ";cin>>jari_jari;
    volume = (float) (4)/(float) (3)*phi*jari_jari*jari_jari*jari_jari;
    luas_permukaan = 4*phi*jari_jari*jari_jari;
    cout<< "volume bola: "<<volume<<endl;
    cout<< "luas permukaan bola: "<<luas_permukaan<<endl;
}