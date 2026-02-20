# 📕 Destructor in C++ 

## 🔹 What is a Destructor?

A **destructor** is a special **instance member function** that is **automatically called** when an object is about to be destroyed.

- It runs **at the end of the object’s life**
- It is the **last function** called for an object

```cpp
class Student {
public:
    ~Student() {
        cout << "Destructor called";
    }
};
````

---

## 🔹 Key Points About Destructor

* Name of destructor is **same as class name**, prefixed with `~`
* It has **no return type**
* It takes **no arguments**
* It is called **automatically** by the compiler

---

## ❓ Why Do We Use Destructor? (Use Case)

Destructor is used to **clean up resources** before an object is removed from memory.

### 🔸 What kind of cleanup?

* Free dynamically allocated memory
* Close files
* Release database connections
* Release locks or resources

### Example

```cpp
class Test {
    int* ptr;
public:
    Test() {
        ptr = new int(10);   // memory allocated
    }

    ~Test() {
        delete ptr;          // memory released
    }
};
```

Without destructor:

* Memory stays allocated
* Causes **memory leak**

👉 Destructor prevents this.

---

## ❓ Why Is Destructor the Last Function Called?

Because:

* Object must be **fully alive** while cleanup is happening
* Destructor may need access to data members
* After destructor finishes, memory is freed

So order is:

```
Destructor → Memory deallocated
```

---

## ❓ Why Constructor Is Called in One Order

## ❓ But Destructor Is Called in Reverse Order?

### Simple Reason:

> **What is created last should be destroyed first**

### Example

```cpp
class A {
public:
    A()  { cout << "A created\n"; }
    ~A() { cout << "A destroyed\n"; }
};

class B {
    A a;
public:
    B()  { cout << "B created\n"; }
    ~B() { cout << "B destroyed\n"; }
};
```

### Order of Execution

```
A created
B created
B destroyed
A destroyed
```

### Why?

* `A` is needed by `B`
* So `B` must be destroyed first
* Then `A`

This avoids using **already destroyed objects**

---

## ❓ Why Destructor Is NOT Called for

```cpp
Student* s1 = new Student;
```

### Very Important Concept

When you write:

```cpp
Student* s1 = new Student;
```

* Object is created in **heap**
* Compiler **does not manage heap memory automatically**

So:

* Constructor is called ✅
* Destructor is **NOT called automatically** ❌

---

## ❓ Why Do We Need `delete s1`?

Because:

* `new` allocates memory manually
* Compiler does not know **when** to destroy it
* Only programmer knows when object is no longer needed

```cpp
delete s1;   // destructor called + memory freed
```

### Rule (Must Remember)

> Every `new` must have a matching `delete`

---

## 🔁 Stack vs Heap (Very Short)

### Stack Object

```cpp
Student s;
```

* Destructor called **automatically**
* At end of scope

### Heap Object

```cpp
Student* s = new Student;
```

* Destructor called **only when `delete` is used**

---

## 🧠 Why Destructor Is Not Automatic for `new` Objects?

Because:

* Heap objects can live beyond scope
* Compiler cannot guess object lifetime
* Programmer controls lifetime

This gives **flexibility**, but also **responsibility**

---

## ✍️ Exam-Ready One-Liners

* Destructor is called automatically when object is destroyed
* Destructor is the last function executed for an object
* Destructor is used to release resources
* Constructor and destructor are called in opposite order
* Destructor is not called for heap objects unless `delete` is used
* `new` without `delete` causes memory leak

---

## 🧠 One-Line Intuition (Best to Remember)

> Constructor builds the object,
> Destructor cleans it up.

Both are needed for a **safe object life cycle**.