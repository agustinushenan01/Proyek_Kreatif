//PROGRAM DATA DIRI MAHASISWA
#include <iostream>
using namespace std;
int main()
{
    string NAMA;
    double TUGAS1, TUGAS2, TUGAS3, TUGAS4, RT_TUGAS;
    double UTS, UAS, NILAI_AKHIR;
    char PILIHAN;
    cout<<"   =====   UNIMA   =====   \n";
    cout<<"Nama Anda : ";getline(cin, NAMA); //Masukan/input Nama
    cout<<"\n   =====   MENU   =====   "<<endl;
    cout<<"A. IP\nB. Biodata Mahasiswa\nPilih [A/B]? ";
    cin>>PILIHAN;
    if (PILIHAN=='A' || PILIHAN== 'a')
    {
        cout<<"\n   =====   DATA NILAI   =====   \n"<<endl; //MASUKAN NILAI
        cout<<"Nilai Tugas 1 = ";cin>>TUGAS1;
        cout<<"Nilai Tugas 2 = ";cin>>TUGAS2;
        cout<<"Nilai Tugas 3 = ";cin>>TUGAS3;
        cout<<"Nilai Tugas 4 = ";cin>>TUGAS4;
        RT_TUGAS=(TUGAS1+TUGAS2+TUGAS3+TUGAS4)/4;
        cout<<"Nilai UTS = ";cin>>UTS;
        cout<<"Nilai UAS = ";cin>>UAS;
        NILAI_AKHIR=(2*RT_TUGAS+UTS+UAS)/4;
        cout<<"Nilai Akhir = "<<NILAI_AKHIR<<endl;    //NILAI AKHIR
    }
    else if (PILIHAN=='B' || PILIHAN=='b')
    {
        cout<<"B. Lihat biodata mahasiswa"<<endl;
        string  NAMA;
        string PRODI, TELEPON;
        int nim;
        cout<<"\n\n==========  DATA MAHASISWA  =========="<<endl;          // Masukan
        cout<<"\nDATA";
        cout<<"\nNama Anda      : ";cin>>NAMA;
        cout<<"\nNIM            : ";cin>>nim;
        cout<<"\nProdi          : ";cin>>PRODI;
        cout<<"\nNO.Telepon     : ";cin>>TELEPON;
        cout<<"\n\n\n   ----  IDENTITAS ANDA  ----   "<<endl;      // Keluaran
        cout<<"\nNama             : "<<NAMA<<endl;
        cout<<"NIM              : "<<nim<<endl;
        cout<<"Prodi            : "<<PRODI<<endl;
        cout<<"NO Telepon       : "<<TELEPON<<endl;
    }
    else{
        cout<<"   =====   SISTEM ERROR   =====   "<<endl;
    }
    
}