// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
int main() {
    string nama;
    string sekolah;
    string ulang;
    do{
    cout<<"Masukkan Nama ";
    cin>>nama;
    cout<<"Masukkan Nama Sekolah ";
    cin>>sekolah;
    cout<<"Nama mu Adalah: ";
    cout<<nama<<endl;
    cout<<"Sekolahmu di: ";
    cout<<sekolah<<endl;
        cout<<"apakah anda mau mengulang, tekan y atau Y ";
        cin>>ulang;
    }
       while (ulang=="y"||ulang=="Y");
    system("pause");
        
    
    return 0;
}
