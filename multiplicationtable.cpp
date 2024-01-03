#include<iostream>

using namespace std;
int main()
{
    int a,i;
    cout<<"ENTER YOUR NUMBER :";
    cin>>a;

    for(i=1;i<=10;i++){

        cout<<a<< "*" << i << "=" << i*a <<endl;
    }
    return 0;

}