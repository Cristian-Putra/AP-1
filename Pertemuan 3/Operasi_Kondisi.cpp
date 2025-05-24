#include<iostream>
using namespace std;
int main()
{
    system("cls");
    
    int nilai; // deklarasi variabel nilai dengan tipe data integer

    cout<<"Masukan nilai : ";
    cin>>nilai;

    //if statement, statement yang digunakan untuk memastikan apakah kondisi yang ada memenuhi syarat yang diberikan
   /* if (nilai <=65){
        cout<<"Anda tidak lulus"<<endl;
    }*/

    //if else statement, memiliki dua buah kondisi
    /*if (nilai <=65){
        cout<<"Anda tidak lulus"<<endl;
    }
    else {
        cout<<"Anda lulus"<<endl;
    }*/

    // if else if statement, statement yang menampung kondisi sebanyak 3 atau lebih
   /* if (nilai == 100){
        cout <<"Anda keceh !"<<endl;
    }
    else if (nilai <= 65){
        cout<<"Anda tidak lulus"<<endl;
    }
    else {
        cout<<"Anda lulus"<<endl;
    }*/

    // Nested if // kondisi dimana ada kondisi di dalam kondisi
    /*if (nilai <= 65){ , (apakah nilainya kurang dari sama dengan 65)
        cout <<" Anda tidak lulus "<<endl;
    }else { (selain dari nilai 65 ke bawah)
        if (nilai == 100){ (jika nilai selain 65 tadi adalah 100)
            cout <<"Anda lulus dan anda keceh" <<endl;
        }else{ (jika nilai selain 65 tadi adalah selain dari 100)
            cout <<"Anda lulus"<<endl;
        }
    }*/

    //switch case, statement untuk kondisi untuk memilih salah satu dari kondisi yang disediakan 
   /* switch (nilai){
        case 1:
             cout << "Senin" <<endl;break; (menggunakan sintaks break untuk menghentikan statement pemilihan agar tidak lanjut ke pilihan selanjutnya)
        case 2:
             cout << "Selasa" <<endl;break;
        case 3:
             cout << "Rabu" <<endl;break;
        case 4:
             cout << "Kamis" <<endl;break;   
        case 5:
             cout << "Jumat" <<endl;break;   
        case 6:
             cout << "Sabtu" <<endl;break;   
        case 7:
             cout << "Minggu" <<endl;break;
        default: cout << "inputan tidak valid"<<endl;break; (default, sintaks yang digunakan ketika tidak ada pilihan dari opsi yang disediakan)     
    }*/

    //switch range, pemilihan kondisi dari rentang nilai yang ada 
   /* switch (nilai){
        case 85 ... 100 : cout << "A" <<endl;break;
        case 80 ... 84 : cout << "B+" <<endl;break;
        case 75 ... 79 : cout << "B" <<endl;break;
        case 70 ... 74 : cout << "C+" <<endl;break;
        case 65 ... 69 : cout << "C" <<endl;break;
        case 60 ... 64 : cout << "D" <<endl;break;
        default: cout<<"E"<<endl;break;
    }*/

    //Ternary Operator, gabungan dari operasi kondisi dengan penggunaan operator aritmatika
    /*if (nilai %2 == 0){ (apakah nilai(hasil inputan user) habis dibagi 2)
        cout << "Genap nih"<< endl;
    } else {
        cout << "Ganjil sih" << endl;
    }*/

    string checknum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // versi sederhana dari operasi if else
    cout <<nilai<< " tuh bilangan "<<checknum<< " sih"<< endl;
}
