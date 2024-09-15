#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    cout<<n<<" + 5 = ";
    int &nn=n;
    nn=nn+5;
    cout<<" "<<nn;
    return 0;
}