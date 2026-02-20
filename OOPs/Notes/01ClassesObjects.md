# Object-Oriented Programming (OOPS) in C++

---

## 1. What is OOPS?

**OOPS (Object-Oriented Programming System)** is a programming style in which programs are built using **objects** instead of only functions and variables.

OOPS is based on **four main principles**:

1. **Encapsulation** – Wrapping data and the functions that operate on that data into a single unit  
2. **Abstraction** – Showing only essential details and hiding implementation  
3. **Inheritance** – Reusing existing code by acquiring properties of another class  
4. **Polymorphism** – Same function name with different behavior  

---

## 2. Why is OOPS Required in C++?

Real-world problems are complex and difficult to manage using only procedural programming.

### Problems Without OOPS
- Code becomes lengthy and difficult to understand  
- Hard to manage and modify large programs  
- No proper data protection  
- Code reusability is low  

### Advantages of OOPS
- Code is well-structured and organized  
- Easy to maintain and scale  
- Better data security through access control  
- High reusability  

**Example:**  
Instead of creating separate variables for every student, we create a **Student object**.

---

## 3. Class and Object

### What is a Class?
- A **class is a user-defined data type**
- It acts as a **blueprint or template**
- It defines:
  - Data members (variables)
  - Member functions (functions)

```cpp
class Student {
public:
    string name;
    int age;
    int roll;
    float grade;
};
````

> A class does **not** occupy memory by itself.

---

### What is an Object?

* An **object is an instance of a class**
* Memory is allocated when an object is created

```cpp
Student s1;
```

#### Does an Object Store Reference or Data?

* By default, an object stores **actual data**, not references
* References or pointers are used only when explicitly declared

---

## 4. Class vs Object

| Feature | Class                  | Object              |
| ------- | ---------------------- | ------------------- |
| Type    | User-defined data type | Variable of a class |
| Memory  | No memory allocated    | Memory allocated    |
| Example | `class Student`        | `Student s1;`       |
| Purpose | Blueprint              | Real-world entity   |

---

## 5. Function vs Class

### Using Only Functions (Procedural Style)

```cpp
string name;
int age, roll;
float grade;

void printStudent() {
    cout << name << " " << age << endl;
}
```

**Disadvantages**

* Data is global
* No data protection
* Not reusable

---

### Using Class (OOPS Style)

```cpp
class Student {
public:
    string name;
    int age;
    int roll;
    float grade;

    void printStudent() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Rahul";
    s1.age = 20;
    s1.roll = 101;
    s1.grade = 8.5;

    s1.printStudent();
}
```

**Advantages**

* Data and functions are bound together
* Better organization
* Improved security
* Reusable code

---

## 6. Struct vs Class

### struct in C++

```cpp
struct Student {
    string name;
    int age;
};
```

### class in C++

```cpp
class Student {
    string name;
    int age;
};
```

### Differences Between struct and class

| Feature        | struct               | class               |
| -------------- | -------------------- | ------------------- |
| Default access | public               | private             |
| Data hiding    | Weak                 | Strong              |
| Usage          | Simple data grouping | Real-world modeling |
| OOPS support   | Limited              | Complete            |

* **struct** is mainly used for simple data storage
* **class** is preferred for full OOPS-based design

---

## 7. Access Modifiers

### What are Access Modifiers?

Access modifiers control **who can access the members of a class**.

### Types of Access Modifiers in C++

#### 1. `public`

* Accessible from anywhere
* Used to expose class functionality

#### 2. `private`

* Accessible only within the class
* Used for data hiding and security
* **Default access modifier for class**

#### 3. `protected`

* Accessible within the class
* Accessible in derived (child) classes
* Used mainly in inheritance

---

### Access Modifiers Table

| Modifier  | Same Class | Outside Class | Child Class |
| --------- | ---------- | ------------- | ----------- |
| public    | Yes        | Yes           | Yes         |
| private   | Yes        | No            | No          |
| protected | Yes        | No            | Yes         |

---

## 8. Need for Access Modifiers

### Without Access Modifiers

* Data can be modified by anyone
* No validation or control
* Program becomes unsafe

### With Access Modifiers

* Data is protected
* Controlled access using methods
* Implements **Encapsulation**

---

## 9. Class and Object Example (Setters and Getters)

### Class Definition

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int roll;
    float grade;

public:
    // Setter methods
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setRoll(int r) { roll = r; }
    void setGrade(float g) { grade = g; }

    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
    int getRoll() { return roll; }
    float getGrade() { return grade; }
};
```

---

### Object Creation and Usage

```cpp
int main() {
    Student s1;

    s1.setName("Amit");
    s1.setAge(20);
    s1.setRoll(101);
    s1.setGrade(8.7);

    cout << "Name: " << s1.getName() << endl;
    cout << "Age: " << s1.getAge() << endl;
    cout << "Roll: " << s1.getRoll() << endl;
    cout << "Grade: " << s1.getGrade() << endl;

    return 0;
}
```

---

## 10. Important Exam Points

* Data members are usually kept **private**
* Access is provided through **public methods**
* This mechanism is called **Encapsulation**
* Objects store **actual data**
* **Class represents Intension**
* **Object represents Extension**

---

## 11. Summary

* OOPS is an object-based programming approach
* Class is a blueprint or user-defined data type
* Object is a real-world instance of a class
* Classes provide better security and reusability than functions
* Classes support complete OOPS concepts compared to structures
