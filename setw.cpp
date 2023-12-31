#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    const int x = 11 , y = 111 , z = 1111;
    
    cout<<"answer of x is :"<<x<<endl;
    cout<<"answer of y is :"<<y<<endl;
    cout<<"answer of z is :"<<z<<endl<<endl;


    cout<<"answer of z is :"<<setw(5)<<x<<endl;
    cout<<"answer of z is :"<<setw(5)<<y<<endl;
    cout<<"answer of z is :"<<setw(5)<<z<<endl;

    
    return 0;
}