# Best algorithm to sort an array in C


### My goal in this project is to find the fastest and the best sorting algorithm in C, by comparing 4 algorithms.

># Table of Contents

* [Introduction](#Introduction)
* [Bubble sort](#Bubble-sort)
* [Selection sort](#Selection-sort)
* [Insertion sort](#nsertion-sort)
* [Tree sort](#Tree-sort)
* [Analysis](#Analysis)
* [Conclution](#Conclution)


----




## Introduction
In this experiment, I'm using my laptop with the processor Intel® Core™ i5-5300U × 4, and i have changed my stack maximuim memory to more then 200Mo (204800Kb to be exact) so it could stand the largest dataset.

---
## Bubble sort
Bubble sort is a simple sorting algorithm that repeatedly steps through the input list element by element, comparing the current element with the one after it, swapping their values if needed, unil the whole array in sorted, 
and thus it's time complexity in O(n²).

<a href="Bubble sort"><img src="./pic/pic_1.png" align="middle" width="55%" height="260px" ></a>

---

## Selection sort
Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list,
and it's time complexity is also O(n²).

 
<a href="Bubble sort"><img src="./pic/pic_2.png" align="middle" width="55%" height="200px"></a>

---


## Insertion sort
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration and it's time complexity is O(n²).

<a href="Bubble sort"><img src="./pic/pic_3.png" align="middle" width="55%" ></a>

 
---

## Tree sort

What happens here is: 

1- first  we generate the root of the tree, and it's the average number of the tree and it doesn't even have to be an element of the tree, 

2- Then take the unsorted array, we create a tree from it,each node has 2 variable: 

   -The key(number we took from the array), 

   -Iteration(iteration of the number),

and 3 pointers: 

   -One to the parent, 
    
   -One to the left son 
    
   -One to the right son, 

after that, in the last function we pick the numbers from the tree into a sorted array, with each number we pick we delete the node.


And the final time complexity is O(n).


 <a href="alternative text"><img src="./pic/pic_4.jpeg" align="middle" width="55%" height="300px"></a>

---
## Analysis
---


## Conclution



