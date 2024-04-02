## Sorting and Intuition

Sorting is utilized in this problem to enable a greedy approach. By sorting the array of ice cream bar prices, we ensure that we prioritize buying the cheapest available ice cream bars first. This allows us to maximize the number of ice cream bars purchased with the given coins.

Intuitively, imagine you have a limited amount of money and you want to buy as many items as possible. It makes sense to buy the cheapest items first because it allows you to stretch your money further and buy more items overall.

## Code Explanation

- The code begins with importing the necessary C++ libraries and defining a macro for `long long`.
- The `main()` function starts by taking the input of the number of ice cream bars (`n`), followed by the prices of each ice cream bar (`costs`).
- It then takes the input of the number of coins available (`coin`).
- The `costs` array is sorted in ascending order.
- A variable `ans` is initialized to store the answer, i.e., the maximum number of ice cream bars that can be bought.
- A loop iterates through the sorted `costs` array, checking if the current price of the ice cream bar can be afforded with the available coins.
- If it can be afforded, the counter `ans` is incremented, and the cost of the ice cream bar is subtracted from the available coins.
- The loop breaks when the cost of the current ice cream bar exceeds the available coins.
- Finally, the maximum number of ice cream bars (`ans`) is printed.
