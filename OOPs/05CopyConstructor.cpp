#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age, rollNo;
    float grade;

    public:
    Student()
    {
        name = "Unknown";
        age = -1;
        rollNo = -1;
        grade = -1;
    }

    inline Student(string n, int age, int rollNo): name(n), age(age), rollNo(rollNo)
    {
        this -> grade = 0.0;
    }

    // Copy constructor (By Default)
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
        cout << "Roll Number: " << rollNo << endl;
        cout << "Grage: " << grade << endl;
    }
};

int main()
{
    Student S1;
    S1.display();
    cout << endl;

    Student S2("Karan", 25, 7);
    S2.display();
    cout << endl;

    Student S3(S2); // Copy constructor is called here
    S3.display();
    cout << endl;

    Student S4 = S2; // Copy constructor is called here
    S4.display();

    return 0;
}