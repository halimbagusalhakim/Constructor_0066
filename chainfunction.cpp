#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku setJudul(string judul){
        this->judul = judul;
        return *this;
    }
    string getjudul(){
        return this->judul;
    }

}bukunya;

int main(){
    //bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout << bukunya.setJudul("Matematika").getjudul();
    
    return 0;
}