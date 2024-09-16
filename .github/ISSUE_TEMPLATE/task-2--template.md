---
name: 'Task 2: Calculate Number of Combinations from n choose k'
about: Task 2 for Students
title: 'Task 2: Calculate Number of Combinations from n choose k'
labels: enhancement
assignees: ''

---

Declare and implement the `chooseCombinations()` function.  This function
takes two integer parameters as input, `n` the size of the set and `k` 
the number of items being chosen from the set.  This function counts up
and returns all of the unique combinations from choose `k` items from
a set of size `n`.

You need to perform the following steps:

1. It is required that you reuse the `factorial()` function you wrote
   in Task 1.
   - And in fact you have to reuse this function 3 times here.
2. Perform the calculation to count the number of combinations and return 
   this as the result from this function.
3. Make sure that this function works correctly for $k = 0$ and $k = n$,
   but if you implemented the `factorial()` function correctly, you shouldn't
   have to do anything special to get this function to work for those
   cases.

**Suggested Solution**


**Additional Requirements**

- You are required to reuse the `factorial()` implementation from your
  previous task 1 here.
- You are required to use the standard equation for calculating the
  number of combinations from n choose k items.
