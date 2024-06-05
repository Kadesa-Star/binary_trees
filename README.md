* BINARY TREE DATA STRUCTURE
============================

- A binary tree is a non-linear data structure whre each node has at most two children;
	- Left Child
	- Right Child
- Topmost node in a binary tree is the *root*
- The bottomost are the *leaves*

* Representation of a Binary Tree
==================================
	+ Data
	+ Pointer to the left child
	+ Pointer to the right child

* Operations on Binary Tree
	1. Insertion in a Binary Tree
	2. Traversal of Binary Tree
		- Depth-First Search (DFS) Algorithms
			i. Preorder Traversal (current-left-right)
				*visit current node before visiting any nodes inside the left or right subtrees i.e. root-left child-right child
			ii. Inorder Traversal (left-Current-right)
				*visit current node after visiting all nodes inside the left subtree but before visiting any node within the right subtree i.e left child - root - right child
			iii. Postorder Traversal (left-right-current)
				*visit current node after visiting all the nodes of the left and right subtrees i.e left child - right child - root
		- Breadth-First Search (BFS) algorithms
			- visit nodes level by level and left to right fashion at the same level. Most left child is traversed first then other children of the same level from left to right have traversed
	3. Deletion in Binary Tree
	4. Searching in Binary Tree

* Advantages of Binary Tree
	- Efficient Search when searching for a specific element
	- Memory efficient as it requires less memory as compared to other tree data structures 
	- Binary Trees are relatively easy to implement and understand as each node has atmost two children.

* Applications of Binary Tree
===============================
1. can be used to represent hierarchical data
2. Data compression algorithms e.g. Huffman coding Trees
3. Priority Queue
4. useful for indexing segmented at database in storing cache in the system
5. Implementation of Decision Trees - a machine learning algorithm jused for classification and regression analysis.


* Resources
- Geeksforgeeks
- freecodecamp
- tutorialspoint
