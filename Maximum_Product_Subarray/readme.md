**Headers:**

Includes necessary libraries for standard input/output and vector manipulation.

**Definition of Macros and Data Types:**

- `ll` is defined as `long long` for large integer data types.

**Global Variables:**

- `t`: Variable to store the number of test cases.
- `n`: Variable to store the size of the array `a`.
- `a`: Array to store the input elements.
- `res`: Variable to store the result.
- `mx`: Variable to store the maximum product subarray.
- `mn`: Variable to store the minimum product subarray.

**Function `main()`:**

- Inputs the number of test cases.
- Iterates through each test case.
    - Inputs the size of array `a` and its elements.
    - Finds the maximum product subarray using a linear algorithm.
    - Prints the maximum product subarray.

**Explanation:**

The given code finds the maximum product subarray of a given array `a` using a linear algorithm instead of dynamic programming or recursion. 
The algorithm works as follows:
- Initialize `res`, `mx`, and `mn` with the first element of the array `a`.
- Iterate through the array `a`.
    - If the current element is negative, swap `mx` and `mn`.
    - Update `mx` and `mn` with the maximum and minimum of either the current element or the product of the current element and `mx` or `mn` respectively.
    - Update `res` with the maximum of `res` and `mx`.
- Print the maximum product subarray `res`.
