/*
NOTES 

static data members 

1. attributes of classes or class member
2. only one copy of that member is created for the entire class and shared by all objects of the class.
3. it is declared using the static keyword.
4. it is initlized before any object of the class is created.
5. it is accessed using the class name and scope resolution operator (::).

static member function => to access static data members when it is private, we can use static member function.
6. static member function can access only static data members of the class.
7. static member function can be called without creating an object of the class.
8. static member function can be called using the class name and scope resolution operator (::).

// ENCAPSULATION -> wrapping up of data(variable) and information(functions) in a single unit, while controlling access to them.
1. data hiding is achieved by making data members private and providing public member functions to access and modify them.

// ABSTRACTION -> hiding the implementation details and display only the essential features of the object.
*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    // private: default access specifier
    static int total_customer; // static data member
    string name;
    int age;
    int balance;

    public:
    Student(string name, int age, int balance) {
        this->name = name; // using 'this' pointer to refer to the current object
        this->age = age;    
        this->balance = balance;
        total_customer++; // increment the static data member for each object created
    }
    static void setTotalCustomer()
    {
        cout<<total_customer<<endl; // static member function to set the value of static data member
    }

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void printCount() { // static member function
        cout << "Total Students: " << total_customer << endl;
    }
};
int Student::total_customer = 0; // initialize static data member
int main() {
    Student s1("Alice", 20, 1000);
    s1.printInfo();
    Student s2("Bob", 22, 2000);
    s2.printInfo();
    s1.printCount(); // prints total number of students

    // Student::total_customer = 10; // directly accessing static member using class name , if static data member is public
    // cout << "Total Students after modification: " << Student::total_customer << endl; //

    // to access static data member when it is private we can use static member function
    Student::setTotalCustomer(); // calling static member function to access static data member

    return 0;
}