//wap to accept two numbers from user and calculate their sum and display it using pointers
#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"\nEnter two number:";
    cin>>a>>b;
    int *aa=NULL,*bb=NULL,*ssum=NULL;
    aa=&a;
    bb=&b;
    ssum=&sum;
    *ssum=*aa+*bb;
    cout<<"\nThe sum is: "<<*ssum;
    return 0;
}