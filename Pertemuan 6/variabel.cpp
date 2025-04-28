#include <iostream>
using namespace std;

string nama_global = "Ilmu";

void nama_variabel(){
    string nama_lokal = "Komputer";

    cout <<nama_lokal << endl;

    cout << nama_global << endl;
}
int main(){
    system("cls");
    nama_variabel();
    cout << nama_global << endl; 

   // cout << nama_lokal << endl; 

}