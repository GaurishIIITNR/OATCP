## Approach:
1. **Counting Subgrids Whoose Corners are black**:
   - We iterate over each pair of rows (i, j) where i < j, denoting the top and bottom rows of the subgrid.
   - We count the number of columns where both rows have black squares. This gives us the width of the potential subgrid.
   - We iterate over all possible pairs of columns (p, q) where p < q, denoting the left and right columns of the subgrid.
   - We count the number of rows between i and j (exclusive) that have black squares in columns p to q. This gives us the height of the potential subgrid.
   - If both width and height are at least two, and all four corners of the subgrid are black, we consider it a countable subgrid.

2. **Counting Subgrids Efficiently**:
   - We can optimize the counting process using bitwise operations.
   - We represent each row of the grid as a bitset.
   - By performing bitwise AND operation between two rows, we can count the number of columns where both rows have black squares.
   - This allows us to efficiently count the number of countable subgrids.

## Code Explanation:

1. We use a bitset array `b` of size `3001` to represent the grid, where each bitset represents a row.
2. The `f` function calculates the number of combinations to choose 2 items from `x`.
3. In the `main` function, we input the size of the grid `n` and initialize the variable `ans` to store the total count of countable subgrids.
4. We input the grid by reading each row into the bitset array `b`.
5. We iterate over each pair of rows (i, j) and count the number of common black squares in the columns.
6. For each pair of columns (p, q), we count the number of black squares in the rows between i and j.
7. If both width and height of the potential subgrid are at least two, and all four corners are black, we add the count of such subgrids to `ans`.
8. Finally, we divide `ans` by 2 to avoid double counting, as each subgrid is counted twice (once for each pair of rows).

This approach efficiently counts the number of countable subgrids within the given grid.

