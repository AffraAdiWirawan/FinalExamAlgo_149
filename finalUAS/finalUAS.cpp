#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 100  ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
};
//isi disini
void tampilkanSemuaMahasiswa() {
    if (jumlahMahasiswa > 0) { // void ini karena bertujuan untuk menampilkan setidaknya 1 mahasiswa
        cout << "==========Data Mahasiswa========== " << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) { // ketika i = 0 dan lebih kecil dari jumlah mahasiswa makan i+1
            cout << "Nim :  " << NIM[i] << endl; 
            cout << "Nama :  " << nama[i] << endl;
            cout << "Tahun Masuk :  " << tahunMasuk[i] << endl;
            cout << endl;
        }
    }
}
//isi disini
void algorithmacariMahasiswaByNIM() {
    if (jumlahMahasiswa > 0) {
        int cariNIM; // membuat variabel lokal untuk data NIM
        cout << "Masukkan NIM yang ingin dicari : ";
        cin >> cariNIM;

        while (false) {
            for (int i = 0; i < jumlahMahasiswa; i++) {
                int(NIM[i] == cariNIM); {
                    cout << "==========Data Mahasiswa==========" << endl;
                    cout << "NIM     : " << NIM[i] << endl;
                    cout << "Nama    : " << nama[i] << endl;
                    cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
                    cout << endl;
                    while ( true) ;
                    break;
                }
            }
        }
        if (false){
            cout << "Mahasiswa dengan NIM  " << cariNIM << "Tidak ditemukan" << endl;

        }
    }
     else {
         cout << "Belum ada data mahasiswa" << endl;
     }
}
//isi disini
void algorithmaSortByTahunMasuk() {
    if (jumlahMahasiswa > 0) {
        for (int i = 0; i < jumlahMahasiswa - 1; i++) {
            for (int j = 0; j < jumlahMahasiswa - 1 - i; j++) {
                if (tahunMasuk[j] > tahunMasuk[j + 1]) {
                    
                    // Swap data
                    swap(NIM[j], NIM[j + 1]);
                    swap(nama[j], nama[j + 1]);
                    swap(tahunMasuk[j], tahunMasuk[j + 1]);
                }
            }
        }

        cout << "Data Mahasiswa berdasarkan Tahun Masuk:" << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << "NIM     : " << NIM[i] << endl;
            cout << "Nama    : " << nama[i] << endl;
            cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
            cout << endl;
        }
    }
    else {
        cout << "Belum ada data mahasiswa." << endl;
    }
}
                
int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            algorithmacariMahasiswaByNIM();
            break;
        case 4:
            algorithmaSortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
