#include <iostream>
using namespace std;

class Student
{
    string name;
    int age, rollNo;
    float grade;
    
    public:
    // Inline constructor 
    Student(string n, int age, int rollNo, float grade): name(n), age(age), rollNo(rollNo), grade(grade)
    {
        // Constructor body can be empty
        /*
        name = n;
        this -> age = age;
        this -> rollNo = rollNo;
        this -> grade = grade;
        */
    }

    // Inline constructor with default value for grade
    Student(string n, int age, int rollNo): name(n), age(age), rollNo(rollNo), grade(0.0)
    {
        // Constructor body can be empty
        /*
        name = n;
        this -> age = age;
        this -> rollNo = rollNo;
        */
    }

    // Inline copy constructor
    inline Student(Student &s): name(s.name), age(s.age), rollNo(s.rollNo), grade(s.grade)
    {
        /*
        name = s.name;
        age = s.age;
        rollNo = s.rollNo;
        grade = s.grade;
        */
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
    Student S1("Karan", 25, 7, 95.5);
    cout << "Student 1 details: " << endl;
    S1.display();
    cout << endl;

    Student S2(S1);
    cout << "Student 2 details (copy of Student 1): " << endl;
    S2.display();
    cout << endl;

    Student S3("Aniket", 22, 8);
    cout << "Student 3 details: " << endl;
    S3.display();

    return 0;
}