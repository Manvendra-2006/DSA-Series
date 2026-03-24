#include <iostream>
using namespace std;
class A{
    public:
    int x=0;
    void icnX(){
        x = x +1;
    };
};
int main(){
    A s1;
    static A s2;
    cout<<s1.x<<endl;
    s1.icnX();
    cout<<s1.x<<endl;
    return 0;
}