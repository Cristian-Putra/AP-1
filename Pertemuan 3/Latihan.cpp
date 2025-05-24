#include <iostream>
using namespace std;

int main() {
    system("cls");
    int bilangan; // deklarasi variabel bilangan dengan tipe data integer

 
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 10 == 0) { // apakah bilangan(yang telah diinputkan) memiliki sisa bagi 0 setelah dibagi dengan 10
        cout << bilangan << " adalah kelipatan dari 10." << endl;
    } else if (bilangan % 5 == 0) { // apakah bilangan(yang telah diinputkan) memiliki sisa bagi 0 setelah dibagi dengan 5
        cout << bilangan << " adalah kelipatan dari 5." << endl;
    } else { // bilangan bukan merupakan sisa bagi dari 5 ataupun 10
        cout << bilangan << " bukan kelipatan dari 5 atau 10." << endl;
    }

}
