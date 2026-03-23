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
class Student : public  Person{  // We are inhernting person class in Student class by public mode 
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
class Manas {
    public :
    string name;
    string email;
};
class Manvendra {
    public:
    int age;
    int rollno;
};
class BHardwaj : public Manas ,public Manvendra{

};
class Child : public Student{  // Multi-level inheritance
    public:
    string email;
    Child(string name, int age, int rollno, string email) : Student(name,age,rollno){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
        this->email = email;
    }
    void getInfo(){
        cout << name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
        cout<<email<<endl;
    }
};
class Ramshankar {
    public:
    int height;
    int weight;
};
class Child1 :public Ramshankar{
    public :
    int age;    
};
int main(){
    Child s1("rahul",23,78,"wmem@.com");  // Here First base class constructor is called then derived class constructor   
    s1.getInfo();
    BHardwaj s2;
    s2.name = "Manendra";
    s2.rollno = 1223;
    s2.age = 23;
    cout<<s2.name<<endl;
    cout<<s2.rollno<<endl;
    cout<<s2.age<<endl;
    Child1 s3;
    s3.height=34;
    cout<<s3.height<<endl;
    return 0;
}