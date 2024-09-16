---
name: 'Task 4: Primitive Sort of 3 Values Using Reference Parameters'
about: Task 4 for Students
title: 'Task 4: Primitive Sort of 3 Values Using Reference Parameters'
labels: enhancement
assignees: ''

---

Declare and implement the `threeSort()` function to pass the given
tests for this assignment.  This function is again a `void` function.
This function takes 3 integer reference parameters as input.  Upon
return, the 3 integers should be sorted in increasing value, with
the smallest in the first parameter given and the largest in the
last parameter.

You need to perform the following steps:

1. Declare the `threeSort()` function with three reference parameters.  As should now
   be usual, create the prototype and put in the header file, and have the implementation
   in the `.cpp` file.
2. Sort the 3 values by performing the described 3 comparisons and conditional swaps.
   - You are required to reuse your `swap()` function here whenever you need to swap
     some values.

**Suggested Solution**

Given above, you need to effectively perform 1 "bubble" pass where you compare a and b,
then b and c, and swap if out of order.  After the first pass it is still possible that the
smallest value is not in a, so need to perform one more comparison and swap of a and b
to ensure all values sorted properly.

1. Compare `a` and `b` and if `a` is larger swap it with `b` (using your `swap()` function).
   - As a result of this comparison and possible first swap, you are
     guaranteed that the larger of the two values originally in `a`
     and `b` is now in `b`.
2. Then compare `b` and `c` and swap them if `b` is the larger.
   - So from these first two comparisions and potential swaps, you should be able to
     convince yourself that the largest value has to now be in `c` (though the smallest might
	 not yet be in `a`).
3. Now that the largest is in `c` we can ensure everything is sorted by
   comparing and swapping `a` and `b` again if needed.  So repeat step 1 to
   compare and swap if `a` is bigger than `b`.


**Additional Requirements**

- You are required to use 3 integer reference parameters for this function.
- You are required to reuse your `swap()` function implementation from the 
  previous task.  This function will be doing the actual work of swapping
  values if they are out of order.
