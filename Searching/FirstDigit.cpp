#include <iostream>
using namespace std;
int main(){
    int n;  
    cin >> n;
    string s = to_string(n);

    for(int i=0;i<s.length();i++){       
        cout << s[i] << endl;
        break;
    }    
    
    // int ans =0;  //It's necessary to intialse value after declaration because when we only intialse it means we give memory to the variable and if not any value intilase then any garbage value can be added
    // while(n!=0){
    //     ans = n;
    //     n = n / 10;                
    // }
    // cout << ans << endl;
    // cout << s << endl;
    return 0;
}
