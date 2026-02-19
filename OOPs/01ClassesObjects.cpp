#include <iostream>
using namespace std;

class Student
{
    private:
    string name;
    int age, rollNo;
    float grade;

    public:
    // Functions to set and get data of the student
    void setName(string n)
    {
        name = n;
    }

    void setAge(int age)
    {
        this -> age = age;
    }

    void setRollNo(int rollNo)
    {
        this -> rollNo = rollNo;
    }

    void setGrade(float grade)
    {
        this -> grade = grade;
    }

    void setData(string n, int age, int rollNo, float grade)
    {
        name = n;
        this -> age = age;
        this -> rollNo = rollNo;
        this -> grade = grade;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getRollNo()
    {
        return rollNo;
    }

    float getGrade(int pin)
    {
        if(pin == 1234)
            return grade;
        else
            return -1;
    }
};

int main()
{
    Student S1, S2, *S3;

    // Student 1
    S1.setData("Karan", 24, 7, 93.6);

    // Student 2
    S2.setName("Aniket");
    S2.setAge(22);
    S2.setRollNo(8);
    S2.setGrade(89.5);

    // Student 3
    S3 = new Student;
    S3 -> setData("Pandu", 5, 21, 90.5);

    cout << "Student 1 Details" << endl;
    cout << "Name: " << S1.getName() << endl;
    cout << "Age: " << S1.getAge() << endl;
    cout << "Roll No: " << S1.getRollNo() << endl;
    cout << "Grade: " << S1.getGrade(1234) << endl;

    cout << endl;
    cout << "Student 2 Details" << endl;
    cout << "Name: " << S2.getName() << endl;
    cout << "Age: " << S2.getAge() << endl;
    cout << "Roll No: " << S2.getRollNo() << endl;
    cout << "Grade: " << S2.getGrade(123) << endl;

    cout << endl;
    cout << "Student 3 Details" << endl;
    cout << "Name: " << (*S3).getName() << endl;
    cout << "Age: " << S3 -> getAge() << endl;
    cout << "Roll No: " << S3 -> getRollNo() << endl;
    cout << "Grade: " << S3 -> getGrade(1234) << endl;

    cout << endl;
    cout << "Size of objects" << endl;
    cout << "Size of Student object S1: " << sizeof(S1) << " bytes" << endl; 
    cout << "Size of Student object S2: " << sizeof(S2) << " bytes" << endl;
    cout << "Size of Student object S3: " << sizeof(*S3) << " bytes" << endl;
}