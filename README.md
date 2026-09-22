# 📚 ann-DSA

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Focus](https://img.shields.io/badge/Focus-DSA-orange?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Educational%20Lab-success?style=for-the-badge)
![Repository](https://img.shields.io/badge/Repository-GitHub-black?style=for-the-badge&logo=github)

> **Data Structures & Algorithms — Lab Implementations**

A structured collection of **Data Structures and Algorithms (DSA)** laboratory programs implemented primarily in **C**.

This repository contains implementations and experiments covering recursion, data structures, arrays, searching, pointers, memory addressing, sorting, stacks, and queues.

The programs are organized chronologically according to laboratory sessions and are intended for **academic learning, experimentation, and lab reference**.

---

# 📖 About

**ann-DSA** is a laboratory-oriented repository for practicing fundamental concepts of **Data Structures and Algorithms**.

The repository follows a progressive learning path:

```text
Recursion
   ↓
Data Structures
   ↓
Arrays
   ↓
Searching
   ↓
Pointers
   ↓
Memory Addressing
   ↓
Sorting
   ↓
Stack
   ↓
Queue

# 🗺️ Repository Map
ann-DSA/
│
├── 01. Recursion/
│   └── 01_factorial_recursion.c
│
├── 02. Data-Structures/
│   └── 02_data_structure_type.c
│
├── 03. Arrays/
│   ├── 03_access_array_element.c
│   ├── 04_traverse_array.c
│   ├── 05_array_insertion.c
│   └── 06_array_deletion.c
│
├── 04. Searching/
│   ├── 07_linear_search.c
│   ├── 08_iterative_binary_search.c
│   ├── 09_recursive_binary_search.c
│   └── 24_insertion_sort_then_binary_search.c
│
├── 05. Pointers/
│   ├── 10_pointer_operations.c
│   ├── 11_array_traversal_using_pointer.c
│   └── 12_linear_search_using_pointer.c
│
├── 06. Memory-Addresssing/
│   ├── 13_1d_array_address.c
│   └── 14_2d_array_address_row_major.c
│
├── 07. Sorting/
│   ├── 15_bubble_sort.c
│   ├── 16_selection_sort.c
│   ├── 17_insertion_sort.c
│   ├── 18_modified_bubble_sort.c
│   ├── 19_modified_selection_sort.c
│   ├── 20_sorting_switch_case.c
│   ├── 21_quick_sort.c
│   ├── 22_merge_sort_junction.c
│   ├── 23_merge_sort.c
│   └── 25_quick_sort.c
│
├── 08. Stack/
│   └── 26_stack.c
│
├── 09. Queue/
│   └── 27_queue.c
│
└── README.md
---

# 📋 Program Index
#	Date	Program Name	Topic	Source
1	03.08.26	Finding factorial using recursion	Recursion	01_factorial_recursion.c
2	03.08.26	Finding type of data structure	Data Structures	02_data_structure_type.c
3	03.08.26	Access and print array elements	Arrays	03_access_array_element.c
4	03.08.26	Traverse an array	Arrays	04_traverse_array.c
5	10.08.26	Insertion in an array	Arrays	05_array_insertion.c
6	10.08.26	Deletion in an array	Arrays	06_array_deletion.c
7	10.08.26	Linear search	Searching	07_linear_search.c
8	10.08.26	Iterative binary search	Searching	08_iterative_binary_search.c
9	10.08.26	Recursive binary search	Searching	09_recursive_binary_search.c
10	17.08.26	Playing with pointers	Pointers	10_pointer_operations.c
11	17.08.26	Traverse and access array using pointers	Pointers	11_array_traversal_using_pointer.c
12	17.08.26	Linear search using pointers	Pointers	12_linear_search_using_pointer.c
13	17.08.26	Calculate 1D array element memory address	Memory Addressing	13_1d_array_address.c
14	17.08.26	Calculate 2D array element memory address using row-major order	Memory Addressing	14_2d_array_address_row_major.c
15	24.08.26	Bubble sort	Sorting	15_bubble_sort.c
16	24.08.26	Selection sort	Sorting	16_selection_sort.c
17	24.08.26	Insertion sort	Sorting	17_insertion_sort.c
18	24.08.26	Modified bubble sort	Sorting	18_modified_bubble_sort.c
19	24.08.26	Modified selection sort	Sorting	19_modified_selection_sort.c
20	24.08.26	Switch-case to perform sorting	Sorting	20_sorting_switch_case.c
21	31.08.26	Quick sort	Sorting	21_quick_sort.c
22	31.08.26	Merge sort (junction)	Sorting	22_merge_sort_junction.c
23	07.09.26	Merge sort	Sorting	23_merge_sort.c
24	07.09.26	Insertion sort and binary search	Searching / Sorting	24_insertion_sort_then_binary_search.c
25	07.09.26	Quick sort	Sorting	25_quick_sort.c
26	14.09.26	Stack	Stack	26_stack.c
27	14.09.26	Queue	Queue	27_queue.c
---


# 🛠️ Development Workflow
💡 Understand the Problem
          ↓
🧩 Select Data Structure
          ↓
⚙️ Design Algorithm
          ↓
⌨️ Write C Program
          ↓
🧪 Compile & Test
          ↓
🐞 Debug
          ↓
📊 Analyze Complexity
          ↓
🚀 Commit & Push


# 📊 Complexity Reference
Algorithm	Best Case	Average Case	Worst Case
Linear Search	O(1)	O(n)	O(n)
Binary Search	O(1)	O(log n)	O(log n)
Bubble Sort*	O(n)	O(n²)	O(n²)
Selection Sort	O(n²)	O(n²)	O(n²)
Insertion Sort	O(n)	O(n²)	O(n²)
Quick Sort	O(n log n)	O(n log n)	O(n²)
Merge Sort	O(n log n)	O(n log n)	O(n log n)
* Best-case O(n) assumes an optimized Bubble Sort implementation that detects an already sorted array.


----

# 🚀 Getting Started
Clone the Repository
git clone https://github.com/anadebnath/ann-DSA.git
Enter the Repository
cd ann-DSA
Compile a Program
Using GCC:
gcc 01_factorial_recursion.c -o factorial
Run:
./factorial
On Windows:
factorial.exe
The exact compilation command may depend on the location of the source file and the compiler environment.
----

# Author Details
Anamika Debnath
Roll No.: UG/04/CSECS/2025/023
🎓 Academic Project: Data Structures & Algorithms Laboratory
🐙 GitHub: @anadebnath
📁 Repository: ann-DSA

<div align="center">
💻 Learn • Implement • Analyze • Optimize • Repeat
Made for learning DSA, one algorithm at a time.
⭐ If this repository helps you understand DSA concepts, consider giving it a star.
</div> ```
