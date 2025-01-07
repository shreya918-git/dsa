#include<iostream>
using namespace std;
// int main(){
//     int i;
//     int n=4;
//     for(i=1;i<=n;i++){
//         int val=i;
//         for(int j=1;j<=n+1;j++){
//             cout<<val;
//         }
//         cout<<endl;
//     }
//     cout<<i; //because i exits the loop when its 5 ie greater than 4
//     return 0;
// }
// int main(){   //star pattern
//     int i;
//     int n=4;
//     for(i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
int main(){
    int i;
    int n=5;
    for(i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
