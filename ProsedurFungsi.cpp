#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLambo;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLambo = 6000;

void input(){
    cout << "Nama Pembeli : ";
    cin >> nama;

    cout << "Jumlah Xpander : ";
    cin >> nXpander;

    cout << "Jumlah Porsche : ";
    cin >> nPorsche;

    cout << "Jumlah Avanza : ";
    cin >> nAvanza;

    cout << "Jumlah Brio : ";
    cin >> nBrio;

    cout << "Jumlah Lambo : ";
    cin >> nLambo;

}
int TotalHarga(){
    return(nXpander * hXpander) + (nPorsche + hPorsche) + (nAvanza + hAvanza) + (nBrio + hBrio) + (nLambo + hLambo);
}
void display(){
    cout << "Total Harganya = " << TotalHarga() << endl;
}

int main (){
    char pilihan;
    do{
    input();
    display();
    cout << "Apakah ingin membeli kembali? ";
    cin >> pilihan;
    }while(pilihan == 'y' || pilihan == 'Y');
}