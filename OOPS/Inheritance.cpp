#include <iostream>
using namespace std;
class Person{
    public :
    Person(string name , int age){
        this->name = name;
        this->age = age;
    }
    string name;
    int age;
};
class Student : public  Person{  // We are inhernting person class in Student class by private access modifier
    public : 
    int rollno;
    Student(string name , int age,int rollno) : Person(name,age){  // Here  Parameterized Constructor call 
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }
    void getInfo(){
        cout << "Name" << name << endl;
        cout << "Age" <<age<<endl;
    }
};
int main(){
    Student s1("rahul",23,78);  // Here First base class constructor is called then derived class constructor   
    s1.getInfo();
    return 0;
}