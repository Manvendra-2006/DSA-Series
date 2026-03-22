#include <iostream>
using namespace std;
class Teacher{
    private:
    int password;
    public:
    Teacher(){
        cout<<"Hello, I am a constructor"<<endl;
    }
    // Teacher(){ // Non parameterized constructor
    //     dept = "Computer Science";
    // }
    // Teacher(string n,string s, string d , string sal ){  // Parameterized constructor
    //     name= n;
    //     subject = s;
    //     dept = d;
    //     salary = sal;
    // }
    // parameterized constructor
    Teacher(string name,string dept,string subject,string salary){
        this->name = name;  // This is a this pointer which tells who is object property which one is propert value
        (*this).dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor
    Teacher(Teacher &orgObj){ // pass by refernce // here address pass original
        cout<<"Copy contructor"<<endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;

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
    Teacher t1("Manvendra","CSE","AIML","2345");  // Objects creation then compiler call contructor 
    t1.name = "manvendra";
    t1.setPassword(122334);
    cout << t1.getPassword() << endl;
    cout<<t1.name<<endl;     
    cout << t1.dept << endl;    
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    cout<<"copy constructor"<<endl;
    Teacher t2(t1); // Here , default copy constructor -invoke
    cout<<t2.name<<endl;
    return 0;
}
// #include <iostream>
// using namespace std;
// class Teacher{
//     private :
//     string salary;
//     public:
//     string name;
//     string email;
//     string password;
//     string dept;
//     void newDept(string newdept){
//         dept = newdept;
//     }
//     void  setfunction(string s){ // Setter function
//         salary = s;
//     }
//     string getfunction(){ // getterfunction 
//         return salary;
//     }
// };
// int main(){
//     Teacher t1;
//     t1.name = "Manvendra";
//     cout << t1.name << endl;
//     t1.setfunction("12345");
//     cout<<t1.getfunction()<<endl;
//     return 0;
// }