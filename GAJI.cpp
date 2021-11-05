// PROGRAM HASIL GAJI
#include <iostream>
using namespace std;
int main()
{
    double jumlah_gaji, jam_lembur, tunjungan; 
    int gaji_pokok1=200000;
    int gaji_pokok2=100000;
    char PILIHAN;
    cout<<"   =====   MASUKAN PILIHAN ANDA   =====   "<<endl;
    cout<<"A. Pegawai Tetap       \nB. Pegawai Honor"<<endl;
    cin>> PILIHAN;
    if (PILIHAN=='A' || PILIHAN=='a')
    {
        cout<<"Berapa jam kerja lembur : \n";cin>>jam_lembur;
        double HONOR_LEMBUR=jam_lembur*4000;
        tunjungan=20000;
        jumlah_gaji=gaji_pokok1+HONOR_LEMBUR+tunjungan;
    }
    else if (PILIHAN=='B' || PILIHAN=='b')
    {
        cout<<"Berapa jam kerja lembur : \n";cin>>jam_lembur;
        double HONOR_LEMBUR=jam_lembur*2000;
        tunjungan=10000;
        jumlah_gaji=gaji_pokok2+HONOR_LEMBUR+tunjungan;
    }
    cout<<"   =====   HASIL   =====   "<<endl;
    cout<<"JUMLAH GAJI : "<<jumlah_gaji<<endl;
}
