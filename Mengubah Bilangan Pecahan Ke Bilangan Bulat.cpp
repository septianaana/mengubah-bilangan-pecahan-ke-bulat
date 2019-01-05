#include<iostream>
using namespace std;
typedef struct pecahan
{
    int pb;
    int py;
};
int main(int argc, char*argo[])
{
    pecahan p1,p2;
    cout<<"Mengubah Bilangan Pecahan Ke Bilangan Bulat"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukan Pembilang : ";
    cin>>p1.pb;
    cout<<"Masukan Penyebut : ";
    cin>>p2.py;
    cout<<"\t"<<p1.pb<<endl;
    cout<<"\tp1 = -"<<endl;
    if ("/")
{
    cout<<"Hasilnya = "<<(p1.pb)/(p2.py)<<endl;
}
return 0;
}
