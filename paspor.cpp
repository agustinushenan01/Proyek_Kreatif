#include <iostream>
using namespace std;
int main()
{
    string Nama;
    string paspor;
    cout<<"NAMA : ";
    cin>>Nama;
    if (Nama=="Agung_Henan")
    {
        cout<<"Masukan Paspor : " ;
        cin>>paspor;
        if (paspor=="qwerty")
        {
            cout<<"Selamat Datang MR. Agung Henan"<<endl;
        }
        else 
        {
            cout<<"Paspor Anda Salah."<<endl;
        }
        
    }
    else
    {
        cout<<"Terima Kasih Sudah Berkunjung"<<endl;
    }

}