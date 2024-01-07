#include<iostream>

using namespace std;
int main(){
    int marks[]={11,22,33,44,55};

   

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    marks[3]={555};
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;



int mathmark[5];

    mathmark[0]=43;
    mathmark[1]=33;
    mathmark[2]=23;
    mathmark[3]=63;
    mathmark[4]=83;
    cout<<mathmark[0]<<endl;
    cout<<mathmark[1]<<endl;
    cout<<mathmark[2]<<endl;
    cout<<mathmark[3]<<endl;
    cout<<mathmark[4]<<endl;
   
    int* p = marks;
   
  cout<<"value of (p) is "<<*p<<endl;
  cout<<"value of (p+1) is "<<*(p+1)<<endl;
  cout<<"value of (p+2) is "<<*(p+2)<<endl;
  cout<<"value of (p+3) is "<<*(p+3)<<endl;
  cout<<"value of (p+4) is "<<*(p+4)<<endl;
         
    return 0;
}