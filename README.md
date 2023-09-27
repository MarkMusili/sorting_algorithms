# 0x1B. C - Sorting algorithms & Big O

## Authors

* [Mark Musili](https://github.com/MarkMusili)
* [Ote Ian](https://github.com/OteIan)

## Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/b-QhraVUoSGmQ1C4QfNoFw), **without the help of Google**:

### General

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project, is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like `printf`, `puts`, … is totally forbidden.
* In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called `sort.h`
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.

## More Info

### Data Structure and Functions

* For this project you are given the `print_array`, and `print_list` functions
* Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
* Please declare the prototype of the functions `print_array` and `print_list` in your sort.h header file

### Tests

Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://intranet.alxswe.com/rltoken/YR-VWQbICB59wZs1eAaI3w)

## Tasks

### 0. Bubble sort `mandatory`

[Bubble-sort with Hungarian ("Csángó") folk dance](https://youtu.be/lyZQPjUT5B4)

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://intranet.alxswe.com/rltoken/awhP8BhtkGi-lwmMc2-KAw) algorithm

* Prototype: `void bubble_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements
* File: `0-bubble_sort.c, 0-O`

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 1. Insertion sort `mandatory`

[Insert-sort with Romainian folk dance](https://www.youtube.com/watch?v%253DROalU379l3U)

Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://intranet.alxswe.com/rltoken/GocxRKbPdsmERXeOHMCO2w) algorithm

* Prototype: `void insertion_sort_list(listint_t **list);`
* You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
* You’re expected to print the `list` after each time you swap two elements
* File: `1-insertion_sort_list.c, 1-O`

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 2. Selection sort `mandatory`

[Select-sort with Gypsy folk dance](https://www.youtube.com/watch?v%253DNs4TPTC8whw)

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://intranet.alxswe.com/rltoken/SEbg0fBEraioQcl-igvUSw) algorithm

* Prototype: `void selection_sort(int *array, size_t size);`
* You’re expected to print the `array` after each time you swap two elements
* File: `2-selection_sort.c, 2-O`

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### 3. Quick sort `mandatory`

[Quick-sort with Hungarian (Küküllőmenti legényes) folk dance](https://www.youtube.com/watch?v%253DywWBy6J5gz8)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://intranet.alxswe.com/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

* Prototype: `void quick_sort(int *array, size_t size);`
* You must implement the `Lomuto` partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You’re expected to print the `array` after each time you swap two elements
* File: `3-quick_sort.c, 3-O`

Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case
