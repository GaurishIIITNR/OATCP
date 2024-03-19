##### Headers 
- Includes necessary libraries for standard input/output and vector manipulation.
##### Definition of macros and data types
- ll is defined as long long for large integer data types.
- Global variables: n and m are declared to store the sizes of vectors a and b respectively.
- a vector to store skills of boys and b vectors to store skills of girls.
- dp is a 2D vector to store the result. where dp[i][j] = total pairs if taken(i..to ..n boys) and (j to m girls).
##### Function f(i, j):
- This function recursively computes the total pairs between vectors a (boys) and b(girls).
- Base cases: If i or j reaches the end of their respective vectors, return 0.
- Memoization: If the result is already computed, return it from dp array.
- Recursive calls:
-- Move to the next element in skill vectors a or b.
-- If the absolute difference between elements of a and b is less than or equal to 1, increment the pair count.
##### Main function:
- Inputs the no of boys and  of skill vector a, sorts it.
- Inputs the no of girls and skill  vector b, sorts it.
- Initializes the dynamic programming table with -1.
- Calls f(0, 0) to compute and print the total pairs.

