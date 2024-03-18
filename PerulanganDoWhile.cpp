#include <iostream>
using namespace std;

int main(){
    
    char pilihan;
    
    do{
        cout << "Berangkat mengambil takjil" << endl;
        cout << "Antri takjil" << endl;
        cout << "Ambil takjil" << endl;
        cout << "Apakah mau antri kembali?" << endl;
        cin >> pilihan;
    }while(pilihan == 'y'|| pilihan == 'Y');
}