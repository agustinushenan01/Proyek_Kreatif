#include <iostream>
using namespace std;
int main()
{
    string Paspor;
    cout<<"Paspor : ";
    cin>>Paspor;
    if (Paspor=="unima_fatek_ti_21")
    {
        string NAMA, PRODI, TELEPON;
        int nim;
        cout<<"==========DATA MAHASISWA=========="<<endl;          // Masukan
        cout<<"\n\nDATA";
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
    else
    {
        cout<<"Maaf Paspor Anda salah"<<endl;
    }
    
    
}

