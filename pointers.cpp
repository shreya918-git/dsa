#include <iostream>
#include <string> // Use <string> instead of <cstring>
using namespace std;

// int main() {
//    string a[10]={"one","two","three","four","five","six","seven","eight","nine"};
//    for(int i=0;i<=9;i++){
//       cout<<a[i]<<endl;
//    }
// }
// int main(){
//    int arr[4]={1,2,3,4};
//    int temp;
//    for(int i=0;i<=1;i++){
//        temp=arr[i];
//        arr[i]=arr[3-i];
//        arr[3-i]=temp;
//    }
//    for(int i=0;i<=3;i++){
//       cout<<arr[i];
//    }
   
// }

// int main() {
//     int arr[4] = {1, 2, 3, 4};
    
//     for (int i = 0; i < 4; i++) {
//         int sum = 0; // Reset sum for each i

//         for (int j = 0; j < 4; j++) { // Compare with all elements
//             if (arr[i] > arr[j]) {
//                 sum++;
//             }
//         }

//         if (sum == 3) {  // If 3 elements are smaller, it means arr[i] is the smallest
//             cout << arr[i] << endl;
//             break;
//         }
//     }

//     return 0;
// }
// int main() {
//     int arr[4] = {1, 2, 3, 4};
//     int temp = arr[3]; // Store the last element

//     // Shift elements to the right
//     for (int i = 3; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }

//     arr[0] = temp; // Place the last element at the beginning

//     // Print the rotated array
//     for (int i = 0; i < 4; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// // }
// #include <iostream>
// #include <algorithm> // For sorting
// using namespace std;

// int removeDuplicates(int arr[], int n) {
//     if (n == 0 || n == 1) return n; // Edge case: empty or single element array
    
//     sort(arr, arr + n); // Step 1: Sort the array

//     int j = 0; // Pointer for unique elements

//     // Step 2: Shift unique elements to the left
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] != arr[i + 1]) {
//             arr[j++] = arr[i];
//         }
//     }

//     arr[j++] = arr[n - 1]; // Copy the last element

//     return j; // Return new size of the array
// }

// int main() {
//     int arr[] = {4, 2, 2, 1, 3, 4, 1, 5, 6, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int newSize = removeDuplicates(arr, n); // Remove duplicates

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
int main(){
   int i=3;
   int p=++i;
   cout<<p;
   cout<<i;
}


