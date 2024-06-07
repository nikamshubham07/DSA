// #include<iostream>
// #include<vector>
// using namespace std;

// // int main(){
// //     char arr[20];
// //     cin>>arr;

// //     cout<<arr;

// // }


// int main(){
//     int n;
//     cout<<"enter memory size of array"<<endl;
//     cin>>n;

//     vector<int> arr;
//     cout<<"enter the element of array"<<endl;
//     for(int i= 0; i<n-1; i++){
//         cin>>arr;
//     }

//     for(int i = 0; i<n-1; i++ ){
//         cout<<arr[i];
//     }
// }


// int findnumber(vector<int> arr, int target){
//     int start = 0;
//     int end = arr.size-1;
//     int mid = start+end/2;
//     int a = -1;
    
//     while(start<=end){
//         if(arr[mid]==target){
//             a = mid;
//             end = mid -1;
//         }
//         else if(target<arr[mid]){
//             end = mid -1;
//         }
//         else if(target>arr[mid]){
//             start = mis+1;
//         }
//         mid = start+end/2;
//     }
//     return a;
    
// }

// int main(){
//     vector<int> arr{1,2,3,3,4,4,4,5,6};
//     int target =4;
    
//     int ans = findnumber(arr,target);
//     cout<<"ans is "<<ans<<endl;
// }

#include<iostream>
using namespace std;

int findnumber(int n){
    int a=0;
    for(int i=1; i<=10; i++){
    a = i*n;
    cout<<a<<endl;
    }
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int ans = findnumber(n);
    cout<<ans;
    return 0;
}