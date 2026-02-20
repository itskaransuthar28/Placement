# 📘 Constructor in C++ (Simple Explanation)

## 🔹 What is a Constructor?
A **constructor** is a special function that is **automatically called** when an object is created.

👉 Its main job is to **prepare the object for use**.

```cpp
class Student {
public:
    int age;

    Student() {        // constructor
        age = 20;
    }
};
````

---

## 🔹 Key Rules of Constructor

### 1️⃣ Name of Constructor

* The constructor name **must be the same as the class name**

```cpp
class Student {
public:
    Student() { }
};
```

---

### 2️⃣ Constructor Has No Return Type (Very Simple Explanation)

A constructor **does not return anything** because:

* The object is **already created in memory**
* Constructor only **initializes the object**
* Returning a value makes no sense

Think like this:

> Memory is allocated first → constructor fills the data

That is why:

* No `int`, `float`, or even `void`
* Constructor is **not a normal function**

---

### 3️⃣ Why Not Use `void`?

`void` is used for **normal functions**.

Constructor is **not called by the programmer**, it is **called by the compiler**.

If we write:

```cpp
void Student() { }
```

❌ This becomes a normal function, **not a constructor**

---

### 4️⃣ Use of Constructor

* Initialize data members
* Put object into a valid state
* Allocate resources if needed

```cpp
Student s1;   // constructor called automatically
```

---

## 🔹 Default Constructor

* Takes **no arguments**
* Called when object is created without parameters

```cpp
class Student {
public:
    Student() {
        cout << "Default constructor";
    }
};
```

---

## 🔹 Parameterized Constructor

* Takes parameters
* Allows setting values at object creation

```cpp
class Student {
public:
    int age;

    Student(int a) {
        age = a;
    }
};
```

```cpp
Student s1(20);
```

---

## 🔹 Constructor Overloading

### What is Constructor Overloading?

* Having **multiple constructors** in the same class
* Constructors differ by **number or type of parameters**

```cpp
class Student {
public:
    Student() {
        cout << "Default";
    }

    Student(int a) {
        cout << "Parameterized";
    }
};
```

```cpp
Student s1;
Student s2(20);
```

---

## 🧠 Important Points to Remember

* Constructor is called **automatically**
* Constructor has **no return type**
* Constructor initializes data members
* Multiple constructors can exist in a class
* Constructor overloading improves flexibility

---

## ✍️ Exam One-Liners

* Constructor is a special member function used to initialize objects
* Constructor name must be same as class name
* Constructor does not return any value
* Constructor is invoked automatically at object creation
* Constructor overloading allows multiple ways to create objects
