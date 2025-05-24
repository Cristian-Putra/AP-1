#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int a,b;

    //assignment operator (=), berfungsi untuk menginisialisasi nilai suatu variabel
    a = 3;
    b = 5;

    //arithmetical operator (+,-,*,/,%), jenis-jenis operator, yaitu tambah, kurang, kali, bagi, modulu(sisa bagi)
   /* int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / b; //type casting (mengubah tipe data dari sebuah variabel)
    int modulo = a % b;

    cout<<"Hasil Penjumlahan : "<<tambah<<endl;
    cout<<"Hasil Pengurangan  : "<<kurang<<endl;
    cout<<"Hasil Perkalian : "<<kali<<endl;
    cout<<"Hasil pembagian : "<<bagi<<endl;
    cout<<"Hasil sisa bagi : "<<modulo<<endl;*/

    //Relational Operator, menghubungkan nilai dari variabel yang dibandingkan
   /* cout<< (a==b) << endl; //false, apakah a = b
    cout<< (a>b) << endl; //false
    cout<< (a>=b) << endl; //false
    cout<< (a<b) << endl; //true
    cout<< (a<=b) << endl; //true
    cout<< (a!=b) << endl; //true , apakah a tidak sama dengan b*/

    //Logical Operator (&&, ||,!) //AND,OR,NOT
   /* cout << (true && true) << endl; //true
   cout << (true && false) << endl; //true
   cout << (false && true) << endl; //true
   cout << (false && false) << endl; //true */
   
   /* cout << (true || true) << endl; //true
   cout << (true || true) << endl; //true
   cout << (true || true) << endl; //true
   cout << (true || true) << endl; //true
   
    cout << (!true) << endl; //true
   cout << (!false) << endl; //true */

   //Bitwise operator (&,|, ~,<<, >>)--> operasi biner, mengoperasikan sertiap bit pada angka
  /* cout << (5 & 7) << endl; //3
   cout << (5 | 7) << endl; //3
   cout << (5 ^ 7) << endl; //3
   cout << (~7) << endl; //3
   cout << (7<<2) << endl; //3 menggeser bit ke kiri dari angka tujuh sejauh 2 bit
   cout << (7>>2) << endl; //3 menggser bit ke kanan dari angka tujuh sejauh 2 bit*/ 

   //shorthand, mendeklarasikan operasi bilangan menjadi lebih singkat
   /*a += 7; // a= a + 7
   cout << a <<endl;
   
   a -= 7; // a= a - 7
   cout << a <<endl;
   
   a *= 7; // a= a * 7
   cout << a <<endl;
   
   a /= 7; // a= a / 7
   cout << a <<endl; */

   //increament & discreament, menjumlahkan dan mengurangkan 
   //preincreament
   /* cout << a << endl;
   cout << ++a << endl;
   
   cout << b << endl;
   cout << ++b << endl;*/

   //postdecreament
   /* cout << a << endl;
   cout << a++ << endl;
   cout << a << endl;

   cout << b << endl;
   cout << b++ << endl;
   cout << b << endl; */

   //predecrement, mengoperasikan nilai terlebih dahulu kemudian menampilkannya
   /*cout << a <<endl;
   cout << --a <<endl;
   
   cout << b <<endl;
   cout << --b <<endl;

   //postdecrement, menampilkan nilai terlebih dahulu kemudian mengoperasikannya
   cout << a << endl;
   cout << a-- << endl;
   cout << a << endl;

   cout << b << endl;
   cout << b-- << endl;
   cout << b << endl; */

   



}
