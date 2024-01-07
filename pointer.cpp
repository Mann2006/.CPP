#include<iostream>

using namespace std;
int main(){
    int x=10;
    int* y = &x;

cout<<"ADDRESS OF x IS:"<<&x<<endl;
cout<<"ADDRESS OF y IS:"<<y<<endl;
cout<<"VALUE OF y IS:"<<*y<<endl<<endl;


    // pointer to pointer

int** z = &y;
cout<<"ADDRESS OF Y IS:"<<&y<<endl;
cout<<"ADDRESS OF Z IS:"<<z<<endl;
cout<<"VALUE OF Z IS:"<<**z<<endl;

    return 0;
}