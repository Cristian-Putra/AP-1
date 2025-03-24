#include <iostream>
using namespace std;
int main()
{
system ("cls");

    string kalimat;
    int i;

    cout << "Masukkan kalimat: ";
    getline (cin, kalimat);

    for (i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }
    cout << "Kalimat setelah diubah menjadi huruf besar: " << kalimat <<endl;
    return 0;

}