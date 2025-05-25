#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat{ // struct alamat berfungsi untuk menyimpan data berupa alamat lengkap serprti jalan,kota,kode_pos
    string jalan,kota;
    int kode_pos;
};

struct mahasiswa{ // struct mahasiswa berfungsi menyimpan data nama, umur, ipk, dan alamat
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main(){
    system("cls");

    mahasiswa mhs1;

    //mhs1.alamat.jalan = "jalan Jamin Ginting";
    //mhs1.alamat.kota = "Hanoi";
    //mhs1.alamat.kode_pos = 20245;

    //cout << "alamat : " << mhs1.alamat.jalan <<", "<< mhs1.alamat.kota<< ", "<< mhs1.alamat.kode_pos;

    vector<mahasiswa> MAHASISWA; // digunakan untuk menyimpan banyak data mahasiswa secara dinamis (sesuai input dari pengguna).

    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // membuang newline agar tidak mengganggu getline berikutnya
        cout << "Masukkan nama: ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        MAHASISWA.push_back(mhs1); // menambahkan data mahasiswa di bagian akhir
    }

    for (int i = 0; i < n; i++){
        cout << "Mashasiswa " << i+1 << endl;
        cout << "nama : " << MAHASISWA[i].nama << endl;
        cout << "umur : " << MAHASISWA[i].umur << endl;
        cout << "IPK : " << MAHASISWA[i].ipk << endl;
    }

}
