#include <stdio.h> // header untuk C
#include <conio.h>

int main() {
    system("cls"); // untuk membersihkan layar
    char nama[50];
    int nim; // tipe data bilangan bulat
    char kom[2]; // tipe data dengan 1 karakter
    float ip; // tipe data bilangan desimal

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); //membaca satu karakter dari input standar dari keyboard


    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); //sintaks yang membaca inputan keyboard tanpa menampilkannya di layar
}
