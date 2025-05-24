#include<iostream>
using namespace std;

int main()
{
    system("cls");
    // Goto Label, sintaks yang dapat membuat progam kita melompat ke bagian yang kita inginkan
    // Hello world, Fasilkom-TI, Ilmu Komputer, IKLC ,program terurut sebelum menggunakan goto
    //--> Hello World, IKLC, Ilmu Komputer, FASILKOM-TI ,urutan terbarunya setelah menggunakan goto

   /* a: 
       cout <<"Hello World "<<endl;
       goto d;
    b: 
       cout <<"Fasilkom-TI "<<endl;
       return 0;
    c: 
       cout <<"Ilmu Komputer "<<endl;
       goto b;
    d: 
       cout <<"IKLC "<<endl;
       goto c;*/

    //Menampilkan bilangan genap 10->2 dengan goto
    /*int i = 10;

    genap: 
    if (i % 2 == 0){
        cout << i <<  endl;
    } i--;

    if (i >= 2){
        goto genap;
    }*/

    // Statement while, statement yang akan berjalan selama kondisi di dalamnya bernilai benar
   /* int i = 1;
    while (i <= 10){
        if (i % 2 == 0){
            cout << i << " ";
        } i++;
    }*/

    // Statement D0-While
   /* int i = 1 ;
    do{
        cout << i << endl;
    }while (i <= 0);*/

    // Statement For, perulangan di mana kita sudah tahu batas dari perulangan yang akan kita buat
    // for (inisialisisi, kondisi, increase) // strukrur perulangan for
   /* for (int i = 1; i <= 10; i+=2){ 
        cout << "Hello World" << endl;
    }*/

    // Nested for, perulangan bersarang (for di dalam for)
    // ***** 5 x 5
   /* for (int i = 1; i <= 5; i++){ mencetak baris
        for (int j = 1; j <= 5; j++){ mencetak kolom
            cout << " * ";
        }
        cout << endl;
    }*/

    // Segitiga Siku-siku
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
    }
    cout << endl;
}
}
