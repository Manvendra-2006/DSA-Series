// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int arr[7] = {2,4,6,8,10,8,5};
// //     int ans = arr[0];
// //     for(int i=0;i<7;i++){        
// //         if(arr[i]>=ans){
// //             ans = arr[i];
// //         }
// //         else if(arr[i]<ans){
// //             ans = arr[i-1];
// //             break;
// //         }
// //     }
// //     cout << ans << endl;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[7]={2,4,6,8,10,8,5};
//     int Max = 0;
//     for(int i=0;i<7;i++){
//         if(arr[i]>=arr[Max]){
//             Max = i;

//         }
//     }
//     int start = 0;
//     int end = 6;
//     int mid = -1 ;
//     int ans = 0;
//     while(start<=end){
//         cout << "Run"<<endl;
//         mid = (start+end)/2;
//         if(mid == Max){
//             ans = mid;
//             break;
//         }
//         else if(mid>Max){
//             end = mid -1;
//         }
//         else if(mid<Max){
//             start = mid+1;
//         }
//     }
//     cout << ans << endl;
    
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int arr[7] = {2,4,6,8,10,8,5};
    int start = 0;
    int end = 6;
    int mid = arr[mid];
    int ans = 0;
    while(start<=end){
        mid = (start+end)/2; // or here end+(start-end)/2 or start + (end - start)/2 inme se 1st vals use for removing runtime error because this not access the indexing which is not there in array
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[mid-1]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    cout <<ans<<endl;
    return 0;
}