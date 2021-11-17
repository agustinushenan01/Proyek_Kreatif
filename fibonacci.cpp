/* 
Program deret fibonacci
BILANGAN FIBONACCI
*/
#include <iostream>
using namespace std;

int main(){
    // f_n = f_n1 + f_n2
    int n;
    int f_n;
    int f_n1, f_n2;
    int i = 1;

    cout << "Program BILANGAN FIBONACCI \n";
    cout << "Masukan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    f_n = f_n1 + f_n2;
    cout << f_n1 << " ";
    do
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " ";
        i++;
    } while (i < n);
    
    cout << "\n";

    cin.get();
    return 0;
}
