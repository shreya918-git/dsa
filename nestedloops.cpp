#include<iostream>
using namespace std;
int main(){
    int arr[4]={5,10,15,20};
    int sum=0;
    for(int i=0;i<=3;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}