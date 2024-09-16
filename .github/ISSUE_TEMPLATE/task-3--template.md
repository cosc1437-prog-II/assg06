---
name: 'Task 3: Swap Values using Reference Parameters'
about: Task 3 for Students
title: 'Task 3: Swap Values using Reference Parameters'
labels: enhancement
assignees: ''

---

Define and implement a function named `swap()` to pass the given
tests.  This function will be a `void` function, is does not return an
explicit value.  It instead needs to take two reference parameters as
input (of type integer).  The function swaps the location in memory of
the two given reference parameters, and on return from this function
the caller will have the values swapped in the indicated variables
that it passed in.



You need to perform the following steps:

1. Create a function named `swap()`
2. Make sure the function is a `void` function, all work is returned implicitly by
   working on the reference parameters given to this function.
3. You must pass in the two integer parameters as reference parameters in order to get
   this to work in a function.
4. You will need to implement an algorithm to swap the referenced values in your
   function.  The normal way to do this in C/C++ is to declare and use a temporary
   local variable so you can move the referenced values around successfully.

**Suggested Solution**

You should declare a local variable to temporarily hold a value, so that you
can move around the two given reference parameter values in order to swap them.

**Additional Requirements**

- You are required to use reference parameters for the two integer parameters passed in
  so that the work of swapping the values in the referenced variables will be seen 
  on return to the caller.

