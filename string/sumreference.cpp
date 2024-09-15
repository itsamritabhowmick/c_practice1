#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"\nEnter a and b: "<<endl;
    cin>>a>>b;
    int &aa=a;
    int &bb=b;
    int &summ=sum;
    summ=aa+bb;
    cout<<summ<<endl;
    return 0;
}