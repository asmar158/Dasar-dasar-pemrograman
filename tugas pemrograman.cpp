#include<iostream>
using namespace std;
int main (){
int x;
int *p;

x=97;
p=&x;
cout<<"nilai x \t\t:"<<x<<endl ;
    cout<<"alamat x (x&)\t\t:" <<&x<<endl<<endl;
    cout<<"nilai yang ditunjuk *p\t:"<<*p<<endl;
    cout<<"alamat yang ditunjuk *p\t:"<<p<<endl;
cout<<"alamat *p(&p)\t\t:"<<&p<<endl;

*p=141;
cout<<"\n\n\nnilai x \t\t:"<<x<<endl;
    cout<<"alamat x (&x)\t\t:"<<&x<<endl<<endl;
    cout<<"nilai yang ditunjuk *p\t:"<<*p<<endl;
    cout<<"alamat yang ditunjuk *p\t:"<<p<<endl;
    cout<<"alamat *p (&p)\t\t:"<<&p<<endl;

*p=1100001;
cout<<"\n\n\nnilai x \t\t:"<<x<<endl;
    cout<<"alamat x (&x)\t\t:"<<&x<<endl<<endl;
    cout<<"nilai yang ditunjuk *p\t:"<<*p<<endl;
    cout<<"alamat yang ditunjuk *p\t:"<<p<<endl;
    cout<<"alamat *p (&p)\t\t:"<<&p<<endl;

    return 0;
}

