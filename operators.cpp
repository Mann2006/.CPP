#include<iostream>

using namespace std;
int main()
{

      int x=7,y=3;
      // arithmetic operators
      cout<<"answer is :"<<x+y<<endl;
      cout<<"answer is :"<<x-y<<endl;
      cout<<"answer is :"<<x*y<<endl;
      cout<<"answer is :"<<x/y<<endl;
      cout<<"answer is :"<<x%y<<endl;
      cout<<"answer is :"<<++x<<endl;
      cout<<"answer is :"<<--y<<endl<<endl;
   
   
     // comparison operators
     cout<<"answer is :"<<(x==y)<<endl;
     cout<<"answer is :"<<(x!=y)<<endl;
     cout<<"answer is :"<<(x<=y)<<endl;
     cout<<"answer is :"<<(x>=y)<<endl;
     cout<<"answer is :"<<(x<y)<<endl;
     cout<<"answer is :"<<(x>y)<<endl<<endl;


     // logical operators

      cout<<"answer is :"<<((x>y)  && (x==y))<<endl;
      cout<<"answer is :"<<((x==y) || (x>y) )<<endl;
      cout<<"answer is :"<<(!(x==y))<<endl;

     
 return 0;
}