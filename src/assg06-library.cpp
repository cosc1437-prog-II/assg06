/** @file assg06-library.cpp
 *
 * @brief Implementation file for Assignment 06: Functional Decomposition and Reference Parameters
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @date   September 01, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
using namespace std;


/** @brief calculate the nth facorial
 *
 * Given n as input, calculate the n!, which is defined as
 *
 * n! = 1 x 2 x 3 x ... x n
 * 
 * By definition 0! = 1! = 1
 *
 * @param n Which factorial n! we are to calculate and return from
 *    this function.  We assume n is an unsigned integer value here,
 *    e.g. that n >= 0
 *
 * @returns int Returns n!, the nth factorial.
 *    calculated and returned as the result from this function.
 */
// Your implementation of task 1 factorial() function goes here


/** @brief calculate n choose k combinations
 *
 * Calculate the number of (unique) combinations that 
 * can be made when choosing k items from a set of
 * n items. Often read as n choose k.  The formula
 * for the number of combinations of n choose k is
 *
 * {n \choose k} = \frac{n!}{k! (n - k)!}
 * 
 * @param n The size of the set of items we are choosing
 *    combinations from.
 * @param k The number of items we choose from the set for
 *    each unique combination.
 *
 * @returns int Returns the count of the number of combinations
 *    from a set of size n where we choose k items at a time.
 */
// Your implementation of task 2 chooseCombinations() function goes here


/** @brief swap two given integer values in memory
 *
 * Given two integer values, swap their locations
 * in memory.  We can do this because the parameters
 * are passed by reference, so when we modify them
 * in this function, we are modifying the original
 * values passed to us.
 *
 * @param a A reference to a value in memory to be swapped with
 *    some other value.
 * @param b A second reference to a value in memory to be swapped.
 *
 * @returns void This is a void function.  Our work is returned
 *    implicitly by swapping the values in the referenced memory
 *    locations a and b.
 */
// Your implementation of task 3 swap() function goes here


/** @brief sort three values in ascending order
 *
 * Given three integer values, passed in by reference,
 * cause the three values to be sorted in the
 * variables with the smallest value in the first
 * parameter a, the largest in the last c, and the
 * in between one in b.
 *
 * @param a A reference to a value in memory to compared and sorted.
 * @param b A reference to a value in memory to compared and sorted.
 * @param c A reference to a value in memory to compared and sorted.
 *
 * @returns void This is a void function.  Our work is returned
 *    implicitly by comparing and sorting the 3 values into
 *    ascending order, smalles in a, largets in c and in between
 *    value in b.
 */
// Your implementation of task 4 threeSort() function goes here
