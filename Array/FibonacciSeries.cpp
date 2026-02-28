// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "The size of fibonacci series is : " << endl;
//     cin >> size;
//     int num;
//     cout << "The Index Value is : " << endl;
//     cin >> num;
//     int arr[size];
//     arr[0] = 0;
//     arr[1] = 1;
//     for (int i = 2; i < size; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }    
//     for (int i = 0; i < size; i++)
//     {
//         if (num == i)
//         {
//             cout << "The number will be " << arr[i] << endl;
//         }
//     }
//     if (size <= num)
//     {
//         cout << "The number is greater " << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
void Indexing(int size , int num ){
    if (num == 0)
        {
            cout << "Element at 0th index is :" << 0 << endl;
        }
                else if (num == 1 && num<size)
        {
            cout << "Element at 1th index is :" << 1 << endl;
        }
                else if (num >= size)
        {
            cout << "Size of array is smaller" << endl;
        }
}
int main()
{
      int size;
    cout << "Enter a size of array " << endl;
    cin >> size;
    int num;
    cout << "Enter a index  " << endl;
    cin >> num;  

    int arr[size];
    arr[0] = 0;
    arr[1] = 1;
    if(num<0){
        cout << "Negative Indexing is not considered" << endl;
    }
    else{
    if (size == 1)
    {
        Indexing(size,num);
    }
    else if (size == 2)
    {
        Indexing(size,num);
    }
    else
    {
        for (int i = 2; i < size; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
            if (i == num)
            {
                cout << "Element at " << i << "th place is : " << arr[i] << endl;
                break;
            }
        }
        if(size<=num){
        Indexing(size,num);
        }
    }
    }
    return 0;
}