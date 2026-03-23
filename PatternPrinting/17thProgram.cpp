#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = n;
    for(int i=1;i<=ans;i++){
        n = ans;        
        for(int j=1;j<=i;j++){
            cout<<n<<" ";
             n--;
        }
       
        cout<<"\n"<<endl;
    }
    return 0;
}