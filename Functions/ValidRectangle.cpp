#include <iostream>
using namespace std;
bool ValidRectangle(int a, int b, int c ,int d)
{
        if((a==b&&c==d) || (a==c&&b==d) || (a==d&&b==c)){
            return true;
        }
        else{
            return false;
        }
}

int main(){
    int a;
    cout << "Enter value of a :" << endl;
    cin >> a;
    int b;
    cout << "Enter value of b : "<< endl;
    cin >> b;
    int c;
    cout << "Enter value of c :" << endl;
    cin >> c;
    int d;
    cout << "Enter value of d : "<< endl;
    cin >> d;
    bool valid = ValidRectangle(a,b,c,d);
    if(valid == true){
        cout << valid<<endl;
        cout<<"Yes, It's a valid rectangle"<< endl;
    }
    else{
        cout<<valid<<endl;
                cout<<"Yes, It's not a valid rectangle"<< endl;
    }
    return 0;
}