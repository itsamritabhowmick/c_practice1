#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n: ";
    cin>>n;
    cout<<n<<" + 5 = ";
    int *nn=NULL;
    nn=&n;
    *nn=*nn+5;//n er value ta update hoye 2 theke 7 holo
    cout<<" "<<*nn<<endl;
    return 0;
}
//vul code
#include<iostream>
using namespace std;
int main(){
    int n;//n=2;
    cout<<"\nEnter n: ";
    cin>>n;
    // cout<<n<<" + 5 = ";
    int *nn=NULL;
    nn=&n;
    *nn=*nn+5;//n er value ta update hoye 2 theke 7 holo
    cout<<n<<" + 5 = "<<*nn<<endl;//n er value hoye jache 7
    return 0;
}
