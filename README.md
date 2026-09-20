# 📚 ANN-DSA — Data Structures & Algorithms Lab

> **A collection of C implementations for learning, practicing, and understanding fundamental Data Structures & Algorithms.**

This repository contains educational implementations of fundamental **Data Structures and Algorithms (DSA)** concepts using the **C programming language**.

The purpose of this repository is to provide simple, readable, and practical implementations that can be used for **academic laboratory work, DSA practice, algorithm analysis, and programming fundamentals**.

----

## 🎯 Objectives

The repository focuses on understanding how commonly used algorithms work internally rather than relying on built-in library functions.

### Main objectives

* Understand fundamental algorithmic techniques.
* Implement algorithms using C.
* Develop problem-solving and logical-thinking skills.
* Understand searching and sorting techniques.
* Practice recursion.
* Compare different algorithmic approaches.
* Build a strong foundation for advanced DSA and competitive programming.

---

# 📋 Program Index

The following programs are currently present in the repository.

| No. | Program Name                          | Topic                              |
| --: | ------------------------------------- | ---------------------------------- |
|   1 | `Recursion.c`                         | Recursion                          |
|   2 | `anaa.c`                              | C Programming / Algorithm Practice |
|   3 | `ann.c`                               | C Programming / Algorithm Practice |
|   4 | `binary search with unsorted array.c` | Searching / Binary Search          |
|   5 | `bubbleSort & quickSort.c`            | Sorting / Bubble Sort & Quick Sort |
|   6 | `merge fun.c`                         | Sorting / Merge Operation          |
|   7 | `output/`                             | Program Output / Supporting Files  |

> **Note:** File names are preserved as they currently appear in the repository.

---

# 🧩 Topic Index

## 1. Recursion

**File:** `Recursion.c`

Recursion is a technique where a function calls itself to solve smaller instances of the same problem.

### Key concepts

* Base condition
* Recursive case
* Function call stack
* Recursive problem decomposition

---

## 2. Searching

**File:** `binary search with unsorted array.c`

Searching algorithms are used to locate a particular element within a collection of data.

### Binary Search

Binary search normally works on **sorted data** and repeatedly divides the search space into two halves.

### Important idea

Instead of checking every element:

```text
Search Space
     ↓
Divide into half
     ↓
Choose relevant half
     ↓
Repeat
```

This gives binary search a typical time complexity of:

**O(log n)**

when the data is appropriately sorted.

---

## 3. Sorting

### Bubble Sort

**File:** `bubbleSort & quickSort.c`

Bubble Sort repeatedly compares adjacent elements and swaps them when they are in the wrong order.

Typical time complexity:

* Best case: **O(n)** with an optimized implementation
* Average case: **O(n²)**
* Worst case: **O(n²)**

---

### Quick Sort

**File:** `bubbleSort & quickSort.c`

Quick Sort uses a **divide-and-conquer** strategy.

Basic process:

```text
Choose Pivot
     ↓
Partition Array
     ↓
Left Part + Pivot + Right Part
     ↓
Recursively Sort Both Parts
```

Average time complexity:

**O(n log n)**

Worst-case time complexity:

**O(n²)**

---

### Merge Operation

**File:** `merge fun.c`

Merge operations are a fundamental component of **Merge Sort**.

Two already sorted portions can be combined into a single sorted sequence efficiently.

Typical merge complexity:

**O(n)**

---

# 🗺️ Repository Map

```text
ann-DSA/
│
├── 📁 output/
│   └── Program output / supporting files
│
├── 📄 Recursion.c
│   └── Recursion implementation
│
├── 📄 anaa.c
│   └── C / algorithm practice
│
├── 📄 ann.c
│   └── C / algorithm practice
│
├── 📄 binary search with unsorted array.c
│   └── Searching / Binary Search
│
├── 📄 bubbleSort & quickSort.c
│   ├── Bubble Sort
│   └── Quick Sort
│
├── 📄 merge fun.c
│   └── Merge operation
│
└── 📄 README.md
    └── Repository documentation
```

The current GitHub repository contains these source files and the `output` directory.

---

# ⚙️ Technologies Used

### Programming Language

```text
C
```

### Development Environment

The programs can be compiled using a standard C compiler such as:

```bash
gcc filename.c -o program
```

Run the generated executable:

```bash
./program
```

On Windows:

```bash
program.exe
```

---

# 🧠 Complexity Cheat Sheet

| Algorithm       |       Best |    Average |    Worst |
| --------------- | ---------: | ---------: | -------: |
| Binary Search   |       O(1) |   O(log n) | O(log n) |
| Bubble Sort     |       O(n) |      O(n²) |    O(n²) |
| Quick Sort      | O(n log n) | O(n log n) |    O(n²) |
| Merge Operation |       O(n) |       O(n) |     O(n) |

> Complexity can depend on the exact implementation and input characteristics.

---


---

# 💻 Tech Corner

A tiny line of C code can say a lot:

```c
return 0;
}
```

Traditionally, returning `0` from `main()` indicates successful program termination.

In other words:

```text
Algorithm completed
        ↓
Program executed
        ↓
No fatal error
        ↓
return 0;
```

And then comes the legendary closing brace:

```c
}
```

### Developer Philosophy

```text
while (learning)
{
    practice();
    debug();
    understand();
    improve();
}

return 0;
}
```

Because in programming:

> **The compiler tells you where the code is wrong; debugging teaches you why.** 🧠💻

---


# 📜 License

## UNLICENSED — EDUCATIONAL LAB IMPLEMENTATION ONLY

This repository is **not licensed for general redistribution, commercial use, or production use**.

The code is provided for **educational and academic laboratory purposes only**.

### Usage Notice

```text
UNLICENSED

Educational Lab Implementation Only.

Copyright © Anamika Debnath

This repository is intended for academic learning,
laboratory work, experimentation, and personal study.

No warranty is provided.
Use in production environments is not recommended.
```

---

# 🌱 Future Scope

The repository can be extended with implementations of:

* Arrays
* Linked Lists
* Stacks
* Queues
* Circular Queues
* Trees
* Binary Search Trees
* Heaps
* Hash Tables
* Graphs
* BFS
* DFS
* Dijkstra's Algorithm
* Minimum Spanning Trees
* Dynamic Programming
* Greedy Algorithms
* Advanced Sorting Algorithms

---

# ⭐ Repository Goal

The ultimate goal of `ann-DSA` is simple:

```text
Learn → Implement → Analyze → Debug → Improve
```

DSA isn't just about writing code.

It's about learning how to **think computationally**.

---

## 👩‍💻 Creator

**Anamika Debnath**

**Roll No.:** `UG/04/CSECS/2025/023`

> Built with C, curiosity, algorithms, and a healthy amount of debugging. ☕💻

```c
#include <stdio.h>

int main()
{
    printf("Keep learning. Keep coding. Keep debugging.\n");

    return 0;
}
```

**return 0; }**
