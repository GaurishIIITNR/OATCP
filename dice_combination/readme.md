## Intuition and Approach

- This problem can be solved using dynamic programming.
- We define a function `f(n)` which represents the number of ways to construct sum `n`.
- The base cases for this recursive function are:
  - If `n < 0`, there are no ways to construct the sum, so return 0.
  - If `n == 0`, there is only one way to construct the sum, which is by not throwing the dice at all, so return 1.
- The recursive formula for calculating `f(n)` is as follows: f(n) = f(n - 1) + f(n - 2) + f(n - 3) + f(n - 4) + f(n - 5) + f(n - 6);
- This is because each throw of the dice can result in outcomes from 1 to 6, and the total number of ways to construct `n` is the sum of the number of ways to construct `n - 1`, `n - 2`, `n - 3`, `n - 4`, `n - 5`, and `n - 6`.
- To avoid redundant calculations, we use memoization. We store the calculated values of `f(n)` in an array `dp` and reuse them whenever needed.

## Code Explanation

- The code defines a function `f(n)` which calculates the number of ways to construct sum `n` as per the recursive formula mentioned above.
- The function uses memoization to avoid redundant calculations by storing the computed values in the array `dp`.
- In the `main()` function, we initialize the base case `dp[0] = 1`, as there is one way to construct sum 0.
- We then take the input `n` and call the function `f(n)` to calculate the number of ways to construct the given sum.
- The result is printed modulo \(10^9 + 7\) to handle large numbers.
