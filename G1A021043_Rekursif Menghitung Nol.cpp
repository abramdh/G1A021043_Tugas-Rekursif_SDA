#include<iostream>
using namespace std;
int HitungAngkaNol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        HitungAngkaNol(angka/10);
    }
    return hitung;
}
int main()
{
    int c;
    cout<<"+++++++++++++++++++++++++++"<<endl;
    cout<<" Menghitung Angka Nol "<<endl;
    cout<<"+++++++++++++++++++++++++++"<<endl;
    
    cout<<"Masukkan Angka : " ;
    cin>>c;
    cout<<"==========================="<<endl;
    cout<<"Banyak angka nol : "<<HitungAngkaNol(c);
}
