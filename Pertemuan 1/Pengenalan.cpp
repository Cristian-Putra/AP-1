#include<iostream> // header umum bahasa cpp
#include<iomanip> // header ini biasanya digunakan untuk mengatur banyaknya angka desimal
#include<conio.h>//header untuk getche dan getc
using namespace std;
int main()
{
  system("cls"); //sintaks untuk membersihkan layar agar yang tampil hanya outputan program kita
  string nama; // tipe data string digunakan untuk karakter seperti huruf 
  char kom,jenis_kelamin; //tipe data char digunakan saat inputan hanya berupa 1 karakter saja
  int nim; // tipe data int digunakan untuk data berupa bilangan bulat saja
  float ip; // tipe data float digunakan untuk data berupa bilangan desimal

  cout<<"masukkan nama: ";getline(cin,nama); // getline digunakan agar dapat membaca spasi yang kita inputkan
  cout<<"kom: ";cin>>kom; // cout, sintaks yang digunakan untuk memasukkan kata-kata dari user
  cout<<"NIM anda: ";cin>>nim; // cin, sintaks untuk menyimpan data inputan user
  cout<<"ip anda: ";cin>>ip;
  cout<<"Jenis kelamin (L/P): ";
  jenis_kelamin = getche();//getche agar karater langsung tampil tanpa menggunakan enter

  cout<<"|========================================|"<<endl;
  cout<<"Hello world"<<endl;
  cout<<"nama kamu adalah\t: "<<nama<<endl;
  cout<<"kom kamu adalah \t: "<<kom<<endl;
  cout<<"NIM kamu adalah \t: "<<nim<<endl;
  cout<<"ip kamu adalah \t: "<<ip<<endl;
  putchar(jenis_kelamin);//untuk menampilkan karakter jenis kelamin
  getch(); // sintaks yang membaca inputan keyboard tanpa menampilkannya di layar
  cout<<"|========================================|"<<endl;

}
