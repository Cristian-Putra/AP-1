#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan
void tampilkan_pesan(){
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;
}

// fungsi dengan nilai balikan 
int tambah(int a, int b){
    return a + b; // mengembalikan hasil penjumlahan a dengan b
}

// fungsi overload,fungsi dengan nama sama tapi parameter beda (tipe data).
int kali(int a, int b){
    return a * b;
}

double kali (double a, double b){
    return a * b;
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else{
        return n * faktorial(n-1);
    }
}

int main(){ // fungsi utama
    system("cls");

    //menggunakan fungsi tanpa nilai balikan
    tampilkan_pesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan
    int hasil_tambah = tambah(x,y);
    cout << "hasil penjumlahan : "<< hasil_tambah<< endl;

    //menggunakan fungsi overload
    int hasil_kali = kali(x,y);
    double hasil_kali_double = kali(5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasil_kali<< endl;
    cout << "hasil perkalian (double) : " << hasil_kali_double << endl;

    //menggunakan fungsi rekursif, fungsi yang memanggil dirinya sendiri
    int angka = 5;
    cout << "faktorial dari "<< angka << " adalah " << faktorial(angka) <<endl;

}
