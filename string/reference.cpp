// #include<iostream>
// using namespace std;
// void update(int *a){
//     *a=*a+1;
// }
// int main(){
//     int a=5;
//     update(&a);
//     cout<<a<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
void update(int &c){
    c++;
}
int main(){
    int a=7;
    update(a);
    cout<<a<<endl;
    return 0;
}