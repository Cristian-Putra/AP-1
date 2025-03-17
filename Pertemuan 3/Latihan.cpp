#include <iostream>
using namespace std;

int main() {
    system("cls");
    int bilangan;

 
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 10 == 0) {
        cout << bilangan << " adalah kelipatan dari 10." << endl;
    } else if (bilangan % 5 == 0) {
        cout << bilangan << " adalah kelipatan dari 5." << endl;
    } else {
        cout << bilangan << " bukan kelipatan dari 5 atau 10." << endl;
    }

}
