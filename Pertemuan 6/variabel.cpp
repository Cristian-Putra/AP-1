#include <iostream>
using namespace std;

string nama_global = "Ilmu"; // variabel global

void nama_variabel(){
    string nama_lokal = "Komputer"; // variabel lokal

    cout <<nama_lokal << endl;

    cout << nama_global << endl;
}
int main(){ // program utama
    system("cls");
    nama_variabel();
    cout << nama_global << endl; 

   // cout << nama_lokal << endl; 

}
