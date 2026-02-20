#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age, rollNo;
    float grade;

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
    // Student S1; // Default constructor is called here
    Student S1 = Student(); // Default constructor is called here (Same meaning as above line)
    S1.name = "Karan";
    S1.age = 25;
    S1.rollNo = 7;
    S1.grade = 95.5;

    cout << "Student 1 details: " << endl;
    S1.display();
    cout << endl;

    Student S2(S1); // Default copy constructor is called here
    // Student S2 = S1; // Default copy constructor is called here (Same meaning as above line)
    cout << "Student 2 details: " << endl;
    S2.display();

    return 0;
}