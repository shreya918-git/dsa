#include<iostream>
using namespace std;
// int factorial(int n){
//     int p=1;
//     int i;
//     for(i=n;i>=1;i--){
//         p=p*i;
//     }
//     return p;
// }
// int main(){
//     cout<<factorial(4);
//     return 0;
// }
// int function(int n){
//     if(n==1){
//         return 0;
//     }
//     for(int i=2;i*i<=n;i++){
//     if(n%i==0){
//        return 0;
//     }
//     }
//     return 1;
// }
// int main(){
//     cout<<function(4);
//     return 0;
// }
// int factorial(int n){    //binomial coefficient
//     int p=1;
//     for(int i=1;i<=n;i++){
//         p=p*i;
//     }
//     return p;
// }
// int binomial(int n,int r){
//     int val1=factorial(n);
//     int val2=factorial(r);
//     int val3=factorial(n-r);
//     int result=val1/(val2*val3);
//     return result;
// }
// int main(){
//     cout<<binomial(4,2);
//     return 0;
// }
// int sum(int a,int b){  //function overloading,functions with same name but different parameters
//     return a+b;
// }
// double sum(double a,double b){
//     return a+b;
// }
// int sum(int a ,int b,int c){   //different no. of parameters
//     return a+b+c;
// }
// int main(){
//     cout<<sum(2,3)<<endl;
//     cout<<sum(1.3,2.3)<<endl;
//     cout<<sum(1,2,3);  
// }
// void prime(int n){    //primes in range 2 to n
//     for(int i=2;i<=n;i++){
//         if(function(i)){
//             cout<<i<<endl;
//         }
//     }
// }
// int main(){
//     prime(6);
//     return 0;
// }
// bool function(int n){   //palindrome
//     int val1=n%10;
//     int val2=(n/10)%10;
//     int val3=(n/100);
//     int val=(val1*100)+(val2*10)+val3;
//     if(val==n){
//         return 1;
//     }
//     else{
//        return 0;
//     }
// }
// int main(){
//    cout<<function(121);
//     return 0;
// }
// int sum(int n){
//     int val1=n%10;
//     int val2=(n/10)%10;
//     int val3=(n/100)%10;
//     int sum=val1+val2+val3;
//     return sum;
// }
// int main(){
//     cout<<sum(865);
//     return 0;
// }
// int function(int a,int b){
//     return a*a+b*b+2*a*b;
// }
// int main(){
//    cout<<function(2,3);
//    return 0;
// }
// void function(int a,int b,int c){
//     if((a>b)&&(a>c)){
//         cout<<a;
//     }
//     if((b>a)&&(b>c)){
//         cout<<b;
//     }
//     if((c>a)&&(c>b)){
//         cout<<c;
//     }
// }
// int main(){
//     function(2,3,4);
//     return 0;
// }
void function(char ch){
    if(ch=='z'){
        cout<<'a';
    }
    else{
       ch=ch+1;
       cout<<ch;
    }
}
int main(){
    function('b');
    return 0;
}