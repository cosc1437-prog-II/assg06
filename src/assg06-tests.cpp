/** @file assg06-tests.cpp
 *
 * @brief Unit tests for Assignment 06: Functional Decomposition and Reference Parameters
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 13, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg06-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#undef task4


/** factorial() test cases
 * Create a function called factorial() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <factorial()> tests", "[task1]")
{
  CHECK(factorial(0) == 1);
  CHECK(factorial(1) == 1);
  CHECK(factorial(2) == 2);
  CHECK(factorial(3) == 6);
  CHECK(factorial(4) == 24);
  CHECK(factorial(5) == 120);
  CHECK(factorial(6) == 720);
  CHECK(factorial(7) == 5040);
  CHECK(factorial(8) == 40320);
  CHECK(factorial(9) == 362880);
  CHECK(factorial(10) == 3628800);
  CHECK(factorial(11) == 39916800);
  CHECK(factorial(12) == 479001600);  
  // CHECK(factorial(13) == 6227020800);  
}
#endif


/** countCombinations() test cases
 * Create a function called countCombinations() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task 2 <countCombinations()> tests", "[task2]")
{
  // base cases, if asked to choose 0 items the result is
  // always 1, there is only 1 way to choose 0 items
  CHECK(chooseCombinations(4, 0) == 1);
  CHECK(chooseCombinations(10, 0) == 1);

  // likewise there is only way to choose n items from a set of n items
  CHECK(chooseCombinations(4, 4) == 1);
  CHECK(chooseCombinations(10, 10) == 1);

  // some test with a set of size 4, like {A,B,C,D}
  // 4 choose 1 is A, B, C, D = 4
  CHECK(chooseCombinations(4, 1) == 4);
  
  // 4 choose 2 is AB, AC, AD, BC, BD = 6
  CHECK(chooseCombinations(4, 2) == 6);

  // 4 choose 3 is ABC, ABD, ACD, BCD = 4
  CHECK(chooseCombinations(4, 3) == 4);

  // some checks of choosing from set of 10 items
  CHECK(chooseCombinations(10, 1) == 10);
  CHECK(chooseCombinations(10, 2) == 45);
  CHECK(chooseCombinations(10, 3) == 120);
  CHECK(chooseCombinations(10, 4) == 210);
  CHECK(chooseCombinations(10, 5) == 252);
  CHECK(chooseCombinations(10, 6) == 210);
  CHECK(chooseCombinations(10, 7) == 120);
  CHECK(chooseCombinations(10, 8) == 45);
  CHECK(chooseCombinations(10, 9) == 10); // this is same as how many ways to leave 1 out
}
#endif


/** swap() test cases
 * Create a function called swap() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task3
TEST_CASE("Task 3 <swap()> tests", "[task3]")
{
  // to pass by value, we need local variables
  int a;
  int b;

  // swap to values
  a = 5;
  b = 10;
  swap(a, b);
  CHECK(a == 10);
  CHECK(b == 5);

  // and swap back
  swap(a, b);
  CHECK(a == 5);
  CHECK(b == 10);

  // a few more tests
  int c = 42;
  swap(a, c);
  CHECK(a == 42);
  CHECK(b == 10);
  CHECK(c == 5);

  swap(a, b);
  CHECK(a == 10);
  CHECK(b == 42);
  CHECK(c == 5);

  swap(b, c);
  CHECK(a == 10);
  CHECK(b == 5);
  CHECK(c == 42);

  // everything back to where we started
  swap(a, b);
  CHECK(a == 5);
  CHECK(b == 10);
  CHECK(c == 42);
}
#endif


/** threeSort() test cases
 * Create a function called threeSort() to pass
 * the following tests as described in the assignment description.
 */
#ifdef task4
TEST_CASE("Task 4 <threeSort()> tests", "[task4]")
{
  int a, b, c;

  // already sorted
  a = 1; b = 2; c = 3;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);
  
  // in reverse order
  a = 3; b = 2; c = 1;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);


  // all other possible permutations
  a = 1; b = 3; c = 2;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 2; b = 3; c = 1;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 2; b = 1; c = 3;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);

  a = 3; b = 1; c = 2;
  threeSort(a, b, c);
  CHECK(a == 1);
  CHECK(b == 2);
  CHECK(c == 3);
}
#endif
