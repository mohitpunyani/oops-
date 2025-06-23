/*NOTES

CONSTRUCTOR 
1. special function that invoked automatically when an object of class is created.
2. used to initialize data members of class.
3. same name as class name.
4. no return type.

TYPES OF CONSTRUCTOR 
1. Default constructor -> no parameters.
2. Parameterized constructor -> takes parameters.
3. inline constructor -> defined inside the class.
4. copy constructor -> used to create a new object as a copy of an existing object.

DESTRUCTOR 
1. special function or instance member function that invoked automatically when an object of class is going to be destroyed.
2. it is a last function that is going to be called before the object is destroyed.
3. (IMP) delete dynamically allocated memory(heap), don't delete the object , because static memory(stack)(jisme object hota hain)
is deleted automatic, when the program ends or main function ends.

NOTE: Constructor works order wise and destructor works in reverse order.
*/


/*
#include<bits/stdc++.h>
using namespace std;    
class Student
{
    // public:
    string name;
    int age;
    string profesion;
    int *roi;

    // CONSTRUCTOR
    public:
    Student()
    { // default constructor
        name="mohit";
        age=20;
        profesion="developer";
        roi = new int[100]; // dynamically allocating memory for roi in heap memory
    }
    Student(string a, int b){
        name=a;
        age=b;

    }
    // parameterized constructor

    // Student(string name,int age,string profesion) 
    // {
    //     // THIS POINTER -> JIS OBJECT NE ISE CALL KIYA  HAIN, USKE ADDRESS KO STORE KARWA KE RAKHTA HAIN.
    //     this->name=name; // this pointer is used to refer to the current object
    //     this->age=age;      
    //     this->profesion=profesion;
    // }

    // inline constructor
    inline Student(string name, int age, string profesion) : name(name), age(age), profesion(profesion) {
    }

    // copy constructor
    Student(Student &s) {
        name = s.name; // copy the name
        age = s.age; // copy the age
        profesion = s.profesion; // copy the profesion
    }
    void printInfo()
    {
        cout<<name<<age << profesion<<endl;

    }
};
int main(){
    Student s1; // default constructor will be called
    s1.printInfo(); // prints default values

    Student s2("mohit", 10); // parameterized constructor will be called
    s2.printInfo(); // prints values passed to constructor   

    // creating another object
    // it will call the parameterized constructor with three parameters
    Student s3("rohit", 20 ,"teacher"); // parameterized constructor or inline constructor will be called
    s3.printInfo();

    // copy constructor
    
    Student s4(s3);
    s4.printInfo(); // by default copy constructor is called or we can define our own copy constructor

    Student s5 = s3; // copy constructor will be called
    s5.printInfo(); // prints values copied from s3
    return 0;
};

*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int age;
    int *roi;

    // CONSTRUCTOR

    // Student()
    // { // default constructor
    //     age=22;
    //     roi=new int;
    //     *roi = 100; // dynamically allocating memory for roi in heap memory
    //     cout<<"default constructor called"<<endl;
    // }
    // ~Student() {
    //     delete roi; // destructor to free dynamically allocated memory
    //     cout<<"destructor called, memory freed"<<endl;
    // }

    // CONSTRUCTOR WORKS ORDER WISE AND DESTRUCTOR WORKS IN REVERSE ORDER

    
    Student(int age)
    { 
        this->age=age;
        cout<<"constructor is"<<age<<endl;
    }
    ~Student() {
        cout<<"destructor is "<<age<<endl;
        // delete roi; // if roi was dynamically allocated, we would free it here
    }
};
int main(){
    // Student s1; // default constructor will be called
    
    Student s1(1),s2(2),s3(3); // parameterized constructor will be called for each object
    
    Student *s4=new Student(4); // dynamically object created,
     
    delete s4; // destructor will be called for s4, memory will be freed
    return 0;
};
