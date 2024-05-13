#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    string nama;

    Mahasiswa(){
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim){
        
        nim = iNim;
    };
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak(){
        cout << "NiM  = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << endl;
    }

};

Mahasiswa::Mahasiswa(string iNama){
    
    nama =iNama;
}
Mahasiswa::Mahasiswa(int iNim, string iNama){
    nim  = iNim;
    nama = iNama; 
}

int main(){
    Mahasiswa mhs1;
    Mahasiswa mhs2(25);
    Mahasiswa mhs3("Halim");
    Mahasiswa mhs4(4, "Halim ");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}