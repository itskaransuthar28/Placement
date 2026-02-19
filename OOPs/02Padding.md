Here’s the **complete, clean README.md-style version** of everything you shared ✨
You can **copy–paste directly** into your `README.md` without changes.

````md
# 🔑 Golden Rules (Memorize These)

- Each data member must start at its **required alignment**
- Compiler inserts **padding bytes automatically**
- **Order of members matters**
- Total object size is padded to match the **largest member alignment**
- **Empty class has size 1 byte** (for address uniqueness)

---

## 📦 Class A

```cpp
class A {
    int num;   // 4
    char a;    // 1
    char b;    // 1
    char c;    // 1
};
````

### Memory Layout

* `int num`  → 4 bytes (offset 0–3)
* `char a`   → 1 byte  (4)
* `char b`   → 1 byte  (5)
* `char c`   → 1 byte  (6)
* `padding`  → 1 byte  (7) ← to make size multiple of 4

✅ **Total Size = 8 bytes**

---

## 📦 Class B

```cpp
class B {
    char a;    // 1
    int num;   // 4
    char b;    // 1
    char c;    // 1
};
```

### Memory Layout

* `char a`   → 1 byte (0)
* `padding`  → 3 bytes (1–3) ← align `int`
* `int num`  → 4 bytes (4–7)
* `char b`   → 1 byte (8)
* `char c`   → 1 byte (9)
* `padding`  → 2 bytes (10–11) ← align class to 4

✅ **Total Size = 12 bytes**

📌 Same variables as Class A, different order → **bigger size**

---

## 📦 Class C

```cpp
class C {
    char a;    // 1
    char b;    // 1
    int num;   // 4
    char c;    // 1
    double d;  // 8
};
```

### Memory Layout

* `char a`   → 1 byte (0)
* `char b`   → 1 byte (1)
* `padding`  → 2 bytes (2–3)
* `int num`  → 4 bytes (4–7)
* `char c`   → 1 byte (8)
* `padding`  → 7 bytes (9–15) ← align `double`
* `double d` → 8 bytes (16–23)

✅ **Total Size = 24 bytes**

---

## 📦 Class D (Best Ordering)

```cpp
class D {
    char a;    // 1
    char b;    // 1
    char c;    // 1
    int num;   // 4
    double d;  // 8
};
```

### Memory Layout

* `char a`   → 1 byte (0)
* `char b`   → 1 byte (1)
* `char c`   → 1 byte (2)
* `padding`  → 1 byte (3)
* `int num`  → 4 bytes (4–7)
* `double d` → 8 bytes (8–15)

✅ **Total Size = 16 bytes**

🔥 **Least padding → Best ordering so far**

---

## 📦 Class E (Worst Ordering)

```cpp
class E {
    char a;    // 1
    int num;   // 4
    char b;    // 1
    double d;  // 8
    char c;    // 1
};
```

### Memory Layout

* `char a`   → 1 byte (0)
* `padding`  → 3 bytes (1–3)
* `int num`  → 4 bytes (4–7)
* `char b`   → 1 byte (8)
* `padding`  → 7 bytes (9–15)
* `double d` → 8 bytes (16–23)
* `char c`   → 1 byte (24)
* `padding`  → 7 bytes (25–31) ← align class to 8

❌ **Very bad ordering**

✅ **Total Size = 32 bytes**

---

## 📦 Class F (Empty Class)

```cpp
class F {};
```

### Why size = 1 byte?

C++ forbids zero-sized objects.

```cpp
F x, y;
&x == &y;  // ❌ Illegal
```

To ensure **unique addresses**, compiler assigns **1 byte minimum**.

✅ **Total Size = 1 byte**

---

## 🧠 Exam Gold Tip

> Arrange members from **largest to smallest** type to reduce padding.

**Best Order:**

```
double → int → char
```

---

## ⚖️ Static vs Dynamic Allocation (Simple Table)

| Feature       | Static Allocation | Dynamic Allocation    |
| ------------- | ----------------- | --------------------- |
| Memory Area   | Stack             | Heap                  |
| Keyword       | None              | `new`, `delete`       |
| Creation Time | Compile time      | Runtime               |
| Deallocation  | Automatic         | Manual                |
| Speed         | Faster            | Slower                |
| Lifetime      | Scope-based       | Programmer controlled |

---

## 🧩 Objects vs Pointers (Common Confusion)

```cpp
Student s1;     // Object itself (stack)
Student* s2;    // Pointer (stack) → object (heap)
```

📌 In **dynamic allocation**:

* Pointer → **Stack**
* Object → **Heap**

---

## ✍️ Exam One-Liners

* Static allocation: Memory allocated at **compile time** and freed **automatically**
* Dynamic allocation: Memory allocated at **runtime** using `new` and freed using `delete`
* Static objects are stored in **stack**
* Dynamic objects are stored in **heap**

```