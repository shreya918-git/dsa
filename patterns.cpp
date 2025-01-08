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
// int main(){  //inverted star pattern
//     int i;
//     int n=5;
//     for(i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// // }
// int main(){     //half pyramid pattern
//     int i;
//     int n=4;
//     int j;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int i;
//     int n=4;
//     int j;
//     char ch='A';
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//           cout<<ch++; //post increment first outputs the current value and then update
//         }
//         cout<<endl;
//     }
// }
// int main(){  //hollow rectangle pattern
//     int i;
//     int n=4;
//     int j;
//     for(i=1;i<=n;i++){
//         cout<<"*";
//         for(j=1;j<=n-1;j++){
//             if(i==1||i==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*";
//         cout<<endl;
//     }
// }
// int main(){  //flyodds triangle pattern
//     int i;
//     int n=4;
//     int j;
//     int k=1;
//     for(i=1;i<=n;i++){
//        for(j=1;j<=i;j++){
//         cout<<k++;
//        }
//        cout<<endl;
//     }
// }
// int main(){     //diamond pattern
//     int i;
//     int n=4;
//     for(i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){  //for spaces we need to use another inner loop
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
int main(){
    int i;
    int n=4;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
