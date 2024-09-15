#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"\nEnter principle, rate and time: ";
    cin>>p>>r>>t;
    float &pp=p;
    float &rr=r;
    float &tt=t;
    float &ssii=si;
    ssii=(pp*rr*tt)/100;
    cout<<ssii;
    return 0;
}