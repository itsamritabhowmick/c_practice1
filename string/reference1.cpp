#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a;
    b++;
    cout<<b;
    return 0;
}