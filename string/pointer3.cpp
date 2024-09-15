#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"\nEnter principle, rate and time: "<<endl;
    cin>>p>>r>>t;
    float *pp=NULL,*rr=NULL,*tt=NULL,*ssii=NULL;
    pp=&p;
    rr=&r;
    tt=&t;
    ssii=&si;
    *ssii=(*pp * *rr * *tt)/100;
    cout<<*ssii<<endl;
    return 0;
}