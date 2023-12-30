#include<iostream>

using namespace std;
int main()
{

     int   num ,num1 ,num2  ;
     while(1)
     {
     cout<<"\n1. ADDITION ";
     cout<<"\n2. SUBTRACTION";
     cout<<"\n3. MULTIPLICATION";
     cout<<"\n4. DIVISION";
     cout<<"\n5. MODULO";
     cout<<"\n6. EXIT";

     cout<<"\n\n ENTER A NUMBER :";
     cin>>num;

     switch(num)
     { 
        
     case 1:
            cout<<"ENTER YOUR FIRST NUMBER :";
            cin>>num1;
            cout<<"ENTER YOUR SECOND NUMBER :";
            cin>>num2;
            cout<<"ANSWER IS :"<<num1+num2;
            break;

     case 2:
            cout<<"ENTER YOUR FIRST NUMBER :";
            cin>>num1;
            cout<<"ENTER YOUR SECOND NUMBER :";
            cin>>num2;
            cout<<"ANSWER IS :"<<num1-num2;
            break;

     case 3:
            cout<<"ENTER YOUR FIRST NUMBER :";
            cin>>num1;
            cout<<"ENTER YOUR SECOND NUMBER :";
            cin>>num2;
            cout<<"ANSWER IS :"<<num1*num2;
            break;

     case 4:
            cout<<"ENTER YOUR FIRST NUMBER :";
            cin>>num1;
            cout<<"ENTER YOUR SECOND NUMBER :";
            cin>>num2; 
            cout<<"ANSWER IS :"<<num1/num2;
            break;

     case 5:
            cout<<"ENTER YOUR FIRST NUMBER : ";
            cin>>num1;
            cout<<"ENTER YOUR SECOND NUMBER :";
            cin>>num2;
            cout<<"ANSWER IS :"<<num1%num2;
            break;

     case 6:
            exit(0);

     default:
             cout<<"UNVALID NUMBER ";
             

        return 0;
     }                                       

}
                            
  
                   
     

     
 




}