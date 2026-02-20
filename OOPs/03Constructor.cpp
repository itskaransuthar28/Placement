#include <iostream>
using namespace std;

class Student
{
    private: 
    string name;
    int age, rollNo;
    float grade;

    public:
    // Types of constructors in C++
    // 1. Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        rollNo = 0;
        grade = 0.0;
    }

    // 2. Parameterized constructor
    Student(string n, int age, int rollNo, float grade)
    {
        name = n;
        this -> age = age;
        this -> rollNo = rollNo;
        this -> grade = grade;
    }

    Student(string n, int age, int rollNo)
    {
        name = n;
        this -> age = age;
        this -> rollNo = rollNo;
        // grade = 0.0;
    }

    // 3. Copy constructor
    Student(Student &s)
    {
        name = s.name;
        age = s.age;
        rollNo = s.rollNo;
        grade = s.grade;
    }   

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    // Default constructor
    Student S1;
    cout << "Student 1 Details" << endl;
    S1.display();
    cout << endl;

    // Parameterized constructor
    Student S2("Karan", 25, 7, 95.5);
    cout << "Student 2 Details" << endl;
    S2.display();
    cout << endl;

    Student S3("Aniket", 22, 21);
    cout << "Student 3 Details" << endl;
    S3.display();
    cout << endl;

    // Copy constructor
    Student S4(S2);
    cout << "Student 4 Details (Copy of Student 2)" << endl;
    S4.display();
}

/*
Q. What is constructor overloading?
=> Constructor overloading is a feature in C++ that allows a class to have multiple constructors with different parameter lists. This enables the creation of objects in different ways, depending on the arguments provided during object instantiation.
*/