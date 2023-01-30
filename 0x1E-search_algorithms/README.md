<h1 style="text-align: center;">
	<a href='https://intranet.alxswe.com/projects/295'>
		C - Search Algorithms
	</a>
</h1>

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs


## Resources
* [Linear Search](https://en.wikipedia.org/wiki/Linear_search)
* [Binary search](https://en.wikipedia.org/wiki/Binary_search_algorithm)
* [Jump Search](https://en.wikipedia.org/wiki/Jump_search)
* [Jump Search *](https://www.geeksforgeeks.org/jump-search/)
* [name_3](link)



## Project Overview

- [**Mandatory Task**](#mandatory-task)
	- [Header File](search_algos.h)
	- [0. Linear search](0-linear.c)
	- [1. Binary search](1-binary.c)
	- [2. Big O #0](2-O)
	- [3. Big O #1](3-O)
	- [4. Big O #2](4-O)
	- [5. Big O #3](5-O)
	- [6. Big O #4](6-O)
	- [7. Jump search](100-jump.c)
	- [Task_1](link_to_file)
	- [Task_1](link_to_file)

- [**Advanced Task**](#advanced-task)
	- [Task_013](link_to_file)
	- [Task_014](link_to_file)
	- [Task_1](link_to_file)
	- [Task_1](link_to_file)
	- [Task_1](link_to_file)
	- [Task_1](link_to_file)

---A

<h2 style="text-align: center;">Tasks</h2>

### Mandatory Task
#### 0. Linear search

**Problem:** Write a function that searches for a value in an array of integers using the Linear search algorithm

**Requirements:**
* Prototype : `int linear_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in `array`
* And value is the `value` to search for
* Your function must return the first index where `value` is located
* If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

- [x] *File:* [0-linear.c](0-linear.c)

---

#### 1. Binary search

**Problem:** Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

**Requirements:**
* Prototype : `int binary_search(int *array, size_t size, int value);`
* Where `array` is a pointer to the first element of the array to search in
* `size` is the number of elements in array
* And `value` is the value to search for
* Your function must return the index where `value` is located
* You can assume that `array` will be sorted in ascending order
* You can assume that `value` won’t appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```
imitor＠excalibur»/0x1E-search_algorithms(main)➜ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Found 7 at index: 7

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1
```
- [x] *File:* [1-binary.c](1-binary.c)

---

#### 2. Big O #0

**Problem:** What is the time complexity (worst case) of a linear search in an array of size `n`?

- [x] *File:* [2-O](2-O)

---

#### 3. Big O #1

**Problem:** What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

- [x] *File:* [3-O](3-O)

---

#### 4. Big O #2

**Problem:** What is the time complexity (worst case) of a binary search in an array of size n?

- [x] *File:* [4-O](4-O)

---

#### 5. Big O #3

**Problem:** What is the space complexity (worst case) of a binary search in an array of size n?

- [x] *File:* [5-O](5-O)

---

#### 6. Big O #4

**Problem:** What is the space complexity of this function / algorithm?
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
- [x] *File:* [4-O](4-O)

---

#### 7. Jump search

**Problem:**

**Requirements:**
* lorem ipsum
* lorem ipsum

```
code sample
```
- [ ] *File:* [100-jump.c](100-jump.c)

---

#### Task_1

**Problem:**

**Requirements:**
* lorem ipsum
* lorem ipsum

```
code sample
```
- [ ] *File:* [Task_1](link_to_file)

---

#### Task_1

**Problem:**

**Requirements:**
* lorem ipsum
* lorem ipsum

```
code sample
```
- [ ] *File:* [Task_1](link_to_file)

---

### Advanced Task

---
#### Task_013
**Problem:** lorem ipsum

**Requirements:**
* lorem ipsum
* lorem ipsum

```
code sample
```
- [ ] *File:* [Task_13](link_to_file)

---

#### Task_014

**Problem:** lorem ipsum

**Requirements:**
* lorem ipsum
* lorem ipsum

```
code sample
```
- [ ] *File:* [Task_14](link_to_file)

---

<h2 style="text-align: center;">Collaborative Author(s)</h2>

[**Emmanuel Fasogba**](https://www.linkedin.com/in/emmanuelofasogba/)
- GitHub - [fashemma007](https://github.com/fashemma007)
- Twitter - [@tz_emiwest](https://www.twitter.com/tz_emiwest)
