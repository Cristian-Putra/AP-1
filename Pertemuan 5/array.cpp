#include<iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    system("cls");
    //deklarasi array dan insisialisasi
    //terdaoat 2 cara

    // cara 1 : array kosong
   /* string nama [5];

    nama[0] = "Budi";
    nama[1] = "Bapa Budi";
    nama[2] = "Ibu Budi";
    nama[3] = "Kakak Budi";
    nama[4] = "Adik Budi";*/

    //cara 2 " array yang langsung diisi"
    //string nama[5] = {"budi", "ayah budi", "ibu budi", "adik budi", "kakak budi"};

    //ascending elemen array
    /*cout << nama [0] << endl;
    cout << nama [1] << endl;
    cout << nama [2] << endl;
    cout << nama [3] << endl;
    cout << nama [4] << endl;*/

    //menggunakan looping
    /*for (int i = 0;i < 5; i++){
        cout << nama[i] << endl;
    }*/

    //descending 
   /* for (int i = 4 ; i>=1; i--){
        cout<<nama[i]<<endl;
    }*/

    // multidimensional array
    // 1 2 3 
    // 2 4 6 

    /*int matrix[2][3] = {{1, 3, 5},{2, 4, 6}};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j]<< " ";
        }
        cout << endl;
    } */

    /*int matrix[4][6] = {{1, 2, 3, 4, 5, 6},{2, 3, 4, 5, 6, 7},{1, 3, 5, 7, 8, 9},{2, 5, 7, 8, 9, 7}};
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 6; j++){
            cout << matrix[i][j]<< " \t";
        }
        cout << endl;
    } */ // matriks 4x6

    //string (array of characters) 
    /*string nama = "tian";
    cout << nama[0] << endl;
    cout << nama[2] << endl;*/

    /*for (int i = 0; i< nama.length(); i++){
        cout << nama[i] << endl;
    }*/

    /*string s1 = "Hello";
    string s2 = "world";
    /*1. s1 = s2
    cout << "s1 = " << s1 << endl;*/

    /*2. s1 = s1 + s2*/
    /*s1 = "Hello"; // reset nilai di s1
    cout << "Hasil: " << s1 + s2 << endl;*/

    /*3. s1. length()*/
    //cout << s1.length() << endl;
   // cout << (s1 + s2).length() << endl;

   //4. s1.substr(2, 4) << endl;
   //cout << s1.subste(2,3) << endl;
  // cout << (s1 + s2).substr(5,3) << endl;

  //operator sizeof
  //int angka = 10;
  //cout << sizeof(angka);

  //int nilai[] = {10, 20, 30, 40, 50};
  //cout << sizeof(nilai);

  //string s = "tian";
  //cout << sizeof(s);

  //array library
 // array <float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
  //cout << "nilai : ";

  /*for(int i = 0; i < nilai.size(); i++){
    cout << nilai[i] << " ";
  }

  for (float n : nilai){
    cout << n << " ";
  }*/




}