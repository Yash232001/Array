#include<iostream>
using namespace std;
int main()
{
    // Binary  
    int a=4;
    int b=6;
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a|b"<< (a|b)<<endl;
    cout<<"Not(~a)"<<~a<<endl;
    cout<<"(Xor) a^b"<<(a^b)<<endl ;
    
    //left right
    cout<<(100>>1)<<endl;
    cout<<(100>>2)<<endl;
    cout<<(100<<1)<<endl;
    cout<<(100<<2)<<endl;

    //Post and Pre Increment 
    int c=10;
    cout<<c++<<endl; //10 a=11
    cout<<++c<<endl;  //12
    cout<<c--<<endl;//12 a=11
    cout<<--c<<endl;// 10



}