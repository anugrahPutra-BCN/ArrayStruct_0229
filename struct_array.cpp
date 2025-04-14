#include <iostream>
using namespace std;
#include <string>

struct Buku {
    string judul;
    string jumlahHalaman;
    string pengarang;
};

int main(){
    Buku bk[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "masukan judul = ";
        getline(cin, bk[i].judul);
        cout << "masukan jumlah Halaman = ";
        cin >> bk[i].jumlahHalaman;
        cin.ignore();
        cout << "masukan pengarang = ";
        getline (cin, bk[i].pengarang);
    }

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "judul buku = " << bk[i].judul << endl;
        cout << "jumlah Halaman = " << bk[i].jumlahHalaman << endl;
        cout << "pengarang = " << bk[i].pengarang << endl; 
    }

};