#include<iostream>
using namespace std;
int factorial(int n){
    int p=1;
    int i;
    for(i=n;i>=1;i--){
        p=p*i;
    }
    return p;
}
int main(){
    cout<<factorial(4);
    return 0;
}