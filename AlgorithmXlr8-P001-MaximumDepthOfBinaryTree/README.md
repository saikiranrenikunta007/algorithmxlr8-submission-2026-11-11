<p align="center"><img src="https://algorithmxlr8.io/logo-mark.png" width="56" alt="AlgorithmXlr8.io logo" /></p>
<h3 align="center">AlgorithmXlr8.io</h3>
<p align="center"><sub>Solved and synced automatically from <a href="https://algorithmxlr8.io">AlgorithmXlr8.io</a></sub></p>

---

# Maximum Depth of Binary Tree

**Difficulty:** `Easy`

## Problem

Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

A leaf is a node with no children. The depth counts nodes, not edges, so a tree that has only a root has depth 1, and an empty tree has depth 0. The longest path may go through left children, right children or any mix of them.

Input format: A single line containing the tree in level order, with values separated by single spaces and the word null standing for a missing child.

Output format: Print a single integer, the maximum depth of the tree.

## Examples

### Example 1

**Input**
```
root = [3,9,20,null,null,15,7]
```
**Output**
```
3
```

**Explanation:** The longest root to leaf paths are 3 -> 20 -> 15 and 3 -> 20 -> 7, each with 3 nodes.

### Example 2

**Input**
```
root = [1,null,2]
```
**Output**
```
2
```

**Explanation:** The root 1 has only a right child 2, so the longest path 1 -> 2 has 2 nodes.

---

Solved on [AlgorithmXlr8.io](https://algorithmxlr8.io/solve-dsa/maximum-depth-of-binary-tree).