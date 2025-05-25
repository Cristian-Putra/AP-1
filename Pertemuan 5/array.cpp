#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    system("cls");
    //deklarasi array dan insisialisasi
    //terdaoat 2 cara

    // cara 1 : array kosong
   /* string nama [5]; array bertipe data string dengan jumlah 5 buah 

    nama[0] = "Budi";
    nama[1] = "Bapa Budi";
    nama[2] = "Ibu Budi";
    nama[3] = "Kakak Budi";
    nama[4] = "Adik Budi";*/

    //cara 2 " array yang langsung diisi"
    //string nama[5] = {"budi", "ayah budi", "ibu budi", "adik budi", "kakak budi"};

    //ascending elemen array, menampilkan elemen array yang sebelumnya sudah ada sesuai urutan
    /*cout << nama [0] << endl;
    cout << nama [1] << endl;
    cout << nama [2] << endl;
    cout << nama [3] << endl;
    cout << nama [4] << endl;*/

    //menggunakan looping
    /*for (int i = 0;i < 5; i++){ menampilkan elemen array menggunakan perulangan berurutan dari awal ke akhir
        cout << nama[i] << endl;
    }*/

    //descending, menampilkan array menggunakan perulangan tetapi urutannya terbalik dari yang sebelumnya
   /* for (int i = 4 ; i>=1; i--){
        cout<<nama[i]<<endl;
    }*/

    // multidimensional array
    // 1 2 3 
    // 2 4 6 

    /*int matrix[2][3] = {{1, 3, 5},{2, 4, 6}}; // matriks yang berisi 2 baris dan 3 kolom
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j]<< " ";
        }
        cout << endl;
    } */

    /*int matrix[4][6] = {{1, 2, 3, 4, 5, 6},{2, 3, 4, 5, 6, 7},{1, 3, 5, 7, 8, 9},{2, 5, 7, 8, 9, 7}}; matriks yang berisi 4 baris dan 6 kolom
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){
            cout << matrix[i][j]<< " \t";
        }
        cout << endl;
    } */ // matriks 4x6

    //string (array of characters) 
    /*string nama = "tian";
    cout << nama[0] << endl;  mencetak indeks pertama yaitu t
    cout << nama[2] << endl;*/ //mencetak indeks ke dua yaitu a

    /*for (int i = 0; i< nama.length(); i++){
        cout << nama[i] << endl; // menampilkan kata tian yang ditulis baris per baris
    }*/

    /*string s1 = "Hello";
    string s2 = "world";
    /*1. s1 = s2 // menginisialisasi nilai s2 = s1
    cout << "s1 = " << s1 << endl;*/ // menampilkan kata "world"

    /*2. s1 = s1 + s2*/ 
    /*s1 = "Hello"; // reset nilai di s1
    cout << "Hasil: " << s1 + s2 << endl;*/ // menampilkan gabungan kata hello dan world

    /*3. s1. length()*/
    //cout << s1.length() << endl; // menampilkan jumlah karakter hello yakni 5 buah
   // cout << (s1 + s2).length() << endl; // menampilkan jumlah karakter dari kata hello dan world yakni sebanyak 10 karakter

   //4. s1.substr(2, 4) << endl;
   //cout << s1.substr(2,3) << endl; // menampilkan karakter dimulai dari indeks ke 2 (yaitu l) sebanyak 3 karakter (yaitu o) 
  // cout << (s1 + s2).substr(5,3) << endl; menampilkan karakter yang dimulai dari indeks ke 5 (yaitu w) sebanyak 3 karakter (sampai karakter r)

  //operator sizeof, untuk menampilkan ukuran byte
  //int angka = 10; // menampilkan 4 sesuai besar bytenya
  //cout << sizeof(angka);

  //int nilai[] = {10, 20, 30, 40, 50};
  //cout << sizeof(nilai); //5*4 = 20 byte

  //string s = "tian";
  //cout << sizeof(s); // byte yang ditampilkan random

  //array library
 // array <float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // mendeklarasikan array bertipe data float sebanyak 5 buah data
  //cout << "nilai : "; // menampilkan nilai yang sudah di deklarasikan

  /*for(int i = 0; i < nilai.size(); i++){ // perulangan untuk menampilkan elemen dari indeks 0 sampai indek 4 
    cout << nilai[i] << " "; // menampilkan nilai yang sudah dideklarasikan
  }

  for (float n : nilai){
    cout << n << " "; // menampilkan nilai yang sudah dideklarasikan
  }*/




}
