/*  NOTES 
1. class -> user defined datatype  or blue print for creating objects.
    class does n't exist in physical world(real world), it is just a blueprint.
    class does n't have any memory allocation.
    class consists of data members and member functions.
2. object -> instance of class .
        entity that has state and behaviour. 
        anything that exists in physical world
        memory is allocated when we create an object of class.
        example - car, bike, student, teacher etc.
3. access specifier - > public , private , protected
   public -> can access data members from anywhere.
   private -> default -> can't access data members from outside the class, member function which is inside the class can acess data members
   protected -> access by derived class  and within the class , not accessible outside the class.

*/

#include<bits/stdc++.h>
using namespace std;
/*
// PUBLIC 

class Student
{
    public:
    string name;
    int age;
};
int main(){
    Student s;
    s.name="mohit";
    s.age=10;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    Student s2;
    s.name="rohit";
    s.age=20;
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    return 0;
};
*/

// private

// class Student
// {
//     private:
//     string name;
//     int age;

//     public:
//     // FUNCTION GETTER AND SETTER

//     void setName(string n){
//         name=n;
//     }
//     void setAge(int a){
//         age=a;
//     }
//     void printInfo(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
// };
// int main(){
//     Student s;
//     s.setName("mohit");
//     s.setAge(10);
//     s.printInfo();
    
//     Student s2;
//     s2.setName("rohit");
//     s2.setAge(20);
//     s2.printInfo();
    
//     // cout<<s.name<<endl; // error
//     // cout<<s.age<<endl; // error
//     return 0;
// };

// PROTECTED
class Student
{
    protected:
    string name;
    int age;

    public:
    // FUNCTION GETTER AND SETTER

    void setName(string n){
        name=n;
    }
    void setAge(int a){
        age=a;
    }
    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class Teacher : public Student
{
    public:
    void printTeacherInfo(){
        cout<<name<<endl; // accessible
        cout<<age<<endl; // accessible
    }
};
int main(){
    Student s;
    s.setName("mohit");
    s.setAge(10);
    s.printInfo();

    Teacher t;
    t.setName("rohit");
    t.setAge(20);
    t.printTeacherInfo();

    // cout<<s.name<<endl; // error
    // cout<<s.age<<endl; // error
    return 0;
};