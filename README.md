
# Sorting algorithms implemented in C++

A collection of sorting algorithms implemented in C++ to see the advantages and disadvantages of each one of them

 ## Algorithm Comparison

|     Algorithm   |  Stable |In-Place |  Complexity             |
| :--------------:| :-----: | :-----: | :---------------------: |
| Insertion Sort  | yes     | yes     | O(n^2)                  |
| Bubble Sort     | yes     | yes     | O(n^2)                  |
| Selection       | no      | yes     | O(n^2)                  |
| Merge Sort      | yes     | no      | O(nlogn)                |
| Quick sort      | no      | yes     | O(nlogn) - average      |

## Insertion Sort
Insertion sort is a simple sorting algorithm that works the way we sort playing cards. It is efficient for (quite) small data sets.  
It is often used when the data set is nearly sorted (it takes minimum time (Order of n)).    
It takes maximum time to sort if elements are sorted in reverse order.


![](https://upload.wikimedia.org/wikipedia/commons/9/9c/Insertion-sort-example.gif)
## Bubble Sort
Bubble sort is a basic algorithm for arranging a string of numbers or other elements in the correct order. The method works by examining each set of adjacent elements in the string, from left to right, switching their positions if they are out of order.


![File:Bubble-sort-example-300px.gif - Wikimedia Commons](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif?20131109191607)


## Selection Sort

The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

![Selection Sort in Data Structure – StudiousGuy](https://i2.wp.com/algorithms.tutorialhorizon.com/files/2019/01/Selection-Sort-Gif.gif?ssl=1)


## Merge Sort
the merge sort method divides the list into halves, then iterates through the new halves, continually dividing them down further to their smaller parts.  

![File:Merge-sort-example-300px.gif - Wikimedia Commons](https://upload.wikimedia.org/wikipedia/commons/c/cc/Merge-sort-example-300px.gif?20151222172210)

## Quick sort

Quick sort, like Merge Sort, is a divide-and-conquer sorting algorithm. The premise of quicksort is to separate the "big" elements from the "small" elements repeatedly. The first step of the algorithm requires choosing a "pivot" value that will be used to divide big and small numbers.

![File:Quicksort-example.gif - Wikimedia Commons](https://upload.wikimedia.org/wikipedia/commons/9/9c/Quicksort-example.gif)