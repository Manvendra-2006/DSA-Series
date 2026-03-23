#include <iostream>
using namespace std;
// Compile Time Ploymorphism
class Student{
public : 
    int age;
    //Contructor Overloading 
    Student(){
        cout<<"Non parameterized constructor"<<endl;
    }
    Student(int age){   
        this->age = age;
    }   
};
class Print{
    public:
    //Function Overloading
    void show(int x){
        cout<<"integer" << endl;
        cout << x << endl;
    }
    void show(char x){
        cout<<"Character"<<endl;
        cout<<x<<endl;
    }
};
// Run Time Polymorphism
     class Parent{
        public:
        int age;
        //Function Overriding
        void show(){
            cout<<"Parent calss"<<endl;
        }
        //  Virtual Function 
     virtual   void hello(){
            cout<<"Parent class Hello"<< endl;
        }
     };
     class Child : public Parent{
        public:
        // FUnction Overriding
        void show(){
            cout << "Child"<< endl;
        }
        // Virtual Function
        void hello(){
            cout<<"Child class Hello"<< endl;
        }
     };
int main(){
    Student s1(12);
    cout<<s1.age<<endl;
    Print s2; 
    s2.show('w');
    Parent c1; // Parent class function overide child class function
    c1.show();
    Child s3;
    s3.show(); // Child class function override parent class function 
    s3.hello();  // Child class function override parent class virtual function 
    return 0;
}