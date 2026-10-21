Voter ID Management Application Using BST

Aim

To develop a Voter ID Management Application by constructing two Binary Search Trees (BSTs) from sorted and shuffled voter IDs and displaying their heights.

Objectives

- To understand Binary Search Tree (BST) operations.
- To construct a BST using sorted voter IDs.
- To construct another BST using shuffled voter IDs.
- To calculate and compare the heights of both BSTs.
- To understand how insertion order affects BST structure.

Introduction

A Binary Search Tree (BST) is a hierarchical data structure in which smaller values are stored in the left subtree and larger values are stored in the right subtree.

In this project, two BSTs are constructed using the same set of voter IDs. The first BST is created by inserting sorted IDs, while the second BST is created by inserting shuffled IDs. Their heights are calculated and displayed to demonstrate the effect of insertion order on tree structure.

Algorithm

1. Start the program.
2. Create a list of voter IDs.
3. Construct the first BST by inserting sorted voter IDs.
4. Shuffle the voter IDs randomly.
5. Construct the second BST using shuffled voter IDs.
6. Calculate the height of both BSTs.
7. Display the voter IDs and the heights of both trees.
8. Stop the program.

Data Structure Used

Binary Search Tree (BST)

Each node contains:

- Voter ID
- Pointer to the left child
- Pointer to the right child

Concepts Used

- Binary Search Tree
- Dynamic Memory Allocation
- Recursion
- Inorder Traversal
- Random Shuffling
- Tree Height Calculation

Time Complexity

Let "n" be the number of voter IDs.

- BST insertion: O(n) in the average case per complete construction can be O(n log n); in the worst case, O(n²).
- Height calculation: O(n).
- Inorder traversal: O(n).
- Shuffling: O(n) expected time.

Applications

- Voter ID record organization
- Understanding hierarchical data storage
- Comparing BST structures
- Studying the effect of insertion order on tree performance

Result

Two Binary Search Trees are constructed using sorted and shuffled voter IDs. The heights of both trees are calculated and displayed successfully.

Conclusion

This project demonstrates the construction of Binary Search Trees using different insertion orders. It shows that inserting sorted IDs can produce an unbalanced BST, while shuffled insertion may produce a more balanced tree. The actual height depends on the insertion order.

