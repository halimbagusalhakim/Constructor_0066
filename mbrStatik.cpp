#include <iostream>
using namespace std;

class mahasiswa {
    public:
        static int nim;
        int id;
        string nama;

        void setID();
        mahasiswa(string pnama):nama(pnama){
            setID();
        }
};