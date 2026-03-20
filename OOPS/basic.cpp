#include <iostream>
using namespace std;
class Teacher{
    private:
    int password;
    public:
    Teacher(){ // Non parameterized constructor
        dept = "Computer Science";
    }
    Teacher(string n,string s, string d , string sal ){
        name= n;
        subject = s;
        dept = d;
        salary = sal;
    }
    string name;
    string dept;  // These all are known as attributes / properties
    string subject;
    string salary;
    void changeDept(string newDept){ // Member function
        dept = newDept;
    }
    void setPassword(int s){ // setter function
        password = s;
    }
    int getPassword(){ // getter function
        return password;
    }
};
int main(){
    Teacher t1("Manvendra","CSE","AIML","2345");  // Objects creation  contructor call 
    t1.name = "manvendra";
    t1.setPassword(122334),
    cout << t1.getPassword() << endl;
    cout<<t1.name<<endl;     
    cout << t1.dept << endl;    
    return 0;
}