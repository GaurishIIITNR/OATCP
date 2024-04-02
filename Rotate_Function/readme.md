The primary goal is to compute the maximum sum achievable by multiplying each element of the array by its index and summing them up.

#### Approach:

- Input the size of the array and its elements.
- Utilize dynamic programming to iteratively compute the maximum sum.
- Iterate through the array to calculate partial sums and update the maximum sum as needed.
#### Algorithm:

- Initialize variables for storing the total sum, initial sum considering original indices, and maximum sum.
-Iterate through the array to calculate the initial sum and total sum.
- Utilize dynamic programming to compute the maximum sum of i * A[i].
- Update the maximum sum if a higher value is found during iteration.
- Output the maximum sum as the result.
- Complexity Analysis:

####  Time Complexity: O(n), where n is the size of the input array.
####  Space Complexity: O(n), due to the dynamic programming array used to store intermediate results.

#### Conclusion:

- This code provides an efficient solution to the problem by employing dynamic programming techniques. 
- It ensures optimal computation of the maximum sum of indexed array elements, making it suitable for various applications where such calculations are required.
