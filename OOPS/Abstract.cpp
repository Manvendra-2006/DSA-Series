#include <iostream>
using namespace std;
class Shape{ // When we create pure virtual function in a class then this class can become abstract class
    virtual void draw() = 0; // pure virtual function always initalized by 0
};
class Circle : public Shape{
    public :
    void draw (){
        cout<<"Draw a circle"<<endl;
    }
};
int main(){
    Circle C1;
    C1.draw();
    return 0;
}