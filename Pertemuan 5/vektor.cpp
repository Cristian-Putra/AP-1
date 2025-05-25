#include<iostream>
#include<vector>
using namespace std;

int main(){
    // deklarasi vektor dan inisialisasi

    vector<string> nama_karyawan = {"budi","martin","jungkok","kimjong","pessi"}; 

    /*for (int i = 0; i < nama_karyawan.size(); i++){ // perulangan untuk menampilkan nama karyawan dari indeks 0 sampai indeks 4
        cout << nama_karyawan[i] << endl;
    }

    for (string karyawan: nama_karyawan){
        cout << karyawan << endl;
    }*/

    //add data to vector
   nama_karyawan.push_back("imam"); // push_back berguna untuk menambahkan nama imam ke dafta nama karyawan pada bagian akhir
    /*for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }*/

    // delete data from vector
    nama_karyawan.pop_back(); // menghapus nama terakhir dari daftar nama karyawan
    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus nama indeks ke 3 pada daftar nama karyawan
     for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }

}
