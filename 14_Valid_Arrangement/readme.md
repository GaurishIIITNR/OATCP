# Eulerian Path Finding Algorithm

## What it Does

The Eulerian Path Finding Algorithm helps find a path in a graph that covers each edge exactly once. Think of it as finding a route through a city's streets that hits every street just once.

## How it Works

### Code Overview

- **`euler_tour`**: This function explores the graph, building the Eulerian tour by backtracking when necessary.
  
- **`valid_arrangement`**: This function sets up the graph, counts the number of edges going in and out of each node, and determines the starting point for the tour.

- **`main`**: Reads the graph's data, constructs the graph, and finds the Eulerian path. If there's a valid path, it prints it; otherwise, it says it's not possible.
