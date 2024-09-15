// #include<iostream>
// using namespace std;
// int main(){
//     int l,w,p;
//     cout<<"\nEnter length and width";
//     cin>>l>>w;
//     int *ll=NULL;
//     int *ww=NULL;
//     int *pp=NULL;
//     ll=&l;
//     ww=&w;
//     pp=&p;
//     *pp=2*(*ll+*ww);
//     cout<<*pp;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int l,w,p;
    cout<<"\nEnter length and width";
    cin>>l>>w;
    int &ll=l;
    int &ww=w;
    int &pp=p;
    pp=2*(ll+ww);
    cout<<pp;
    return 0;
}