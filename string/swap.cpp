#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter a and b: ";
    cin>>a>>b;
    int *aa=NULL;
    int *bb=NULL;
    aa=&a;
    bb=&b;
    *aa=*aa+*bb;
    *bb=*aa-*bb;
    *aa=*aa-*bb;
    cout<<"first is : "<<*aa<<" second is: "<<*bb;
    return 0;

}