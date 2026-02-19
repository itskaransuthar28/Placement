# Object-Oriented Programming (OOPS) in C++

---

## 1. What is OOPS?

**OOPS (Object-Oriented Programming System)** is a programming style where we write code using **objects** instead of only functions and variables.

OOPS is based on **four main principles**:

1. **Encapsulation** – Wrapping data and functions together  
2. **Abstraction** – Showing only what is necessary  
3. **Inheritance** – Reusing existing code  
4. **Polymorphism** – Same function, different behavior  

---

## 2. Why is OOPS required in C++?

Real-world problems are **complex**, and OOPS helps manage that complexity.

### Without OOPS (Problems)
- Code becomes long and messy  
- Hard to manage large projects  
- No proper data protection  
- Difficult to reuse code  

### With OOPS (Solutions)
- Code is well organized  
- Easy to maintain and scale  
- Data is secure  
- High reusability  

**Example:**  
Instead of writing separate variables for every student, we create a **Student object**.

---

## 3. What is a Class and an Object?

### What is a Class?
- A **class is a user-defined data type**
- It is a **blueprint/template** that defines:
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
