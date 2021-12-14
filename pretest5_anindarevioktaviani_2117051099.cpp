#include <iostream>
#include <cmath>
using namespace std;
int main ( ) {
	int jumlah_simpanan_pokok ;
	float bunga_per_bulan ;
	int lama_simpanan ;
	
    cout<<"jumlah simpanan pokok " ; cin>> jumlah_simpanan_pokok;
    cout<<"bunga per bulan 	" ;	cin>> bunga_per_bulan;
    cout<<"Lama simpanan " ; cin>> lama_simpanan;
    
    for(int r=1 ;r<=lama_simpanan; r++){
	
    int tabungan = jumlah_simpanan_pokok + jumlah_simpanan_pokok * (bunga_per_bulan / 100);
    cout<<"tabungan pada bulan ke "<<r<<" "<<tabungan<<endl;
    jumlah_simpanan_pokok = tabungan;
}
}


