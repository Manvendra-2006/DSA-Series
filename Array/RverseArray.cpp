// #include <iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "Enter a size of array :" << endl;
//     cin >> size;
//     int arr[size];
//     int temp[size];
//     for(int i=0;i<size;i++){
//         cin >> arr[i] ;
//     }
//     cout << "The Array Before Reversing" << endl;
//     for(int i=0;i<size;i++){
//         cout << arr[i] << " ";
//     }
//     cout << "/n" << endl;
//     for(int i=0;i<size;i++){
//         temp[i] = arr[size-i-1];
//     }
//     cout << "The Array After Reversing " << endl;
//     for(int i=0;i<size;i++){
//         cout << temp[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int size;
    cout << "Enter a size of array :" << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=0;i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
     cout << "The Array After Reversing " << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}