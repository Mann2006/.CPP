#include<iostream>

using namespace std;
int main()
{
    double x = 32.236;
    double & y = x;
    int a  =  15;

    cout<< "VALUE OF x IS :" <<x<<endl;
    cout<< "VALUE OF y IS :" <<y<<endl<<endl;

    
    cout<<"ANSWER OF 32.236 IS :"<<sizeof(32.236)<<endl;
    cout<<"ANSWER OF 32.236 IS :"<<sizeof(32.236l)<<endl;
    cout<<"ANSWER OF 32.236 IS :"<<sizeof(32.236I)<<endl;
    cout<<"ANSWER OF 32.236 IS :"<<sizeof(32.236f)<<endl<<endl;
    

    cout<<"SUM IS :"<<a+x<<endl;
    cout<<"SUM IS :"<<a+int(x)<<endl;
    cout<<"SUM IS :"<<a+(int)x<<endl;
    

    return 0;
}