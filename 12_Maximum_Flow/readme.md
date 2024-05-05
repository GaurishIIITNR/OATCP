# Ford-Fulkerson Algorithm

## Intuition

The Ford-Fulkerson algorithm is a method for finding the maximum flow in a flow network. Think of a flow network as a system of pipes, where each pipe has a maximum capacity for carrying water. The goal is to find the maximum amount of water that can flow from a source to a sink through this network without violating any capacity constraints.

The algorithm works by iteratively finding paths from the source to the sink that can carry more flow. It increases the flow along these paths until no more such paths exist. This process continues until an optimal flow configuration is reached.

## Explanation

### Code Overview
The provided code implements the Ford-Fulkerson algorithm in C++. Here's a brief overview:

- **`ford_fulkerson`**: This function calculates the maximum flow in the graph using the Ford-Fulkerson algorithm. It iteratively finds augmenting paths from the source to the sink and updates the flow along these paths until no more augmenting paths exist.

- **`add_edge`**: This function adds an edge to the graph.

- **`main`**: The main function reads the input for the graph, constructs the graph, and then calculates and prints the maximum flow using the Ford-Fulkerson algorithm.

### How to Use
1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Enter the number of vertices (`V`), the source node (`s`), the sink node (`t`), and the number of edges (`n`).
4. Enter the details of each edge (source node, destination node, and weight).
5. The program will output the maximum flow in the graph.
