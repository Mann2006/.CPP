#include<iostream>

using namespace std;
int main(){
    int a,fact=1;
    cout<<"enter your number :";
    cin>>a;

    
  
    while(a>=1)
    {
       fact= fact*a;
        a--;
    }
    cout<<"answer is :"<<fact<<endl;
 
      
 
    return 0;
}