#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter a and b: ";
    cin>>a>>b;
    int &aa=a;
    int &bb=b;
    aa=aa+bb;
    bb=aa-bb;
    aa=aa-bb;
    cout<<"\nfirst number : "<<aa<<" second number : "<<bb;
    return 0;
}