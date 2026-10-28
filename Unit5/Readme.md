Streetlight Power Distribution Using Prim's Algorithm

1. Problem Statement

Develop a streetlight power distribution graph with installation costs, and apply Prim's Algorithm to connect all streetlight control units at minimum total cost.

2. Aim

To develop a C++ program that uses Prim's Algorithm to find the minimum installation cost required to connect all streetlight control units in a network.

3. Objectives

- To represent streetlight control units using a weighted graph.
- To store installation costs between different units.
- To implement Prim's Algorithm.
- To find the Minimum Spanning Tree (MST).
- To calculate the minimum total installation cost.

4. Theory

A graph is a non-linear data structure consisting of vertices and edges. In this project, vertices represent streetlight control units, and weighted edges represent the installation cost of connecting two units.

Prim's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree of a connected, weighted, undirected graph.

The algorithm starts from one vertex and repeatedly selects the minimum-cost edge connecting a visited vertex to an unvisited vertex. It continues until all vertices are connected.

5. Algorithm

1. Start the program.
2. Read the number of streetlight control units.
3. Input the installation cost matrix.
4. Mark the first unit as visited.
5. Find the minimum-cost edge connecting a visited unit to an unvisited unit.
6. Select the edge and mark the new unit as visited.
7. Add the selected edge's cost to the total cost.
8. Repeat until all units are connected.
9. If no suitable edge exists before all units are connected, display that the network cannot connect all units.
10. Display the selected edges and minimum total installation cost.
11. Stop the program.

6. Sample Input

4
0 10 6 5
10 0 0 15
6 0 0 4
5 15 4 0

7. Sample Output

Edges selected by Prim's Algorithm:
Unit 1 - Unit 4 : Cost = 5
Unit 4 - Unit 3 : Cost = 4
Unit 1 - Unit 2 : Cost = 10

8. Applications

- Streetlight power distribution planning
- Electrical network installation
- Roadside lighting infrastructure
- Connecting control units at minimum installation cost
- Planning cost-efficient cable networks

9. Advantages

- Minimizes the total installation cost.
- Provides a simple representation of the distribution network.
- Avoids unnecessary connections.
- Demonstrates a practical application of graph algorithms.

10. Conclusion

The project successfully demonstrates Prim's Algorithm for designing a cost-efficient streetlight power distribution network. It identifies the connections needed to connect all control units at minimum total installation cost, provided the network is connected 
