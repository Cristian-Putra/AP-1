#include<iostream>
#include<iomanip>
#include<conio.h>//header untuk getche dan getc
using namespace std;
int main()
{
  system("cls");
  string nama;
  char kom,jenis_kelamin;
  int nim;
  float ip;


  cout<<"masukkan nama: ";getline(cin,nama);
  cout<<"kom: ";cin>>kom;
  cout<<"NIM anda: ";cin>>nim;
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
  getch();
  cout<<"|========================================|"<<endl;

}