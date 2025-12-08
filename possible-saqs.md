# UNIT–III: LINKED LIST & HASHING

## Q1. What is a singly linked list? Write any two operations.
A singly linked list is a dynamic linear data structure consisting of a sequence of nodes, where each node contains data and a pointer to the next node.

**Common operations:**
- Insertion at beginning/end  
- Deletion of a node  

**Advantages:** dynamic size & efficient insert/delete.

---

## Q2. Compare singly linked list and doubly linked list.

| Feature | Singly Linked List | Doubly Linked List |
|--------|---------------------|---------------------|
| Links | One (next) | Two (next & prev) |
| Traversal | Forward only | Forward & backward |
| Memory | Less | More |
| Deletion | Needs previous pointer | Easier due to prev pointer |

---

## Q3. What is a linked stack?
A linked stack is a stack implemented using a linked list instead of an array.

- **Push:** insert node at head  
- **Pop:** delete node from head  
It removes stack overflow issues of static arrays.

---

## Q4. Explain hashing and hash functions.
Hashing is a method of mapping keys to positions in a hash table using a hash function, which converts a key into an index.  
Good hash functions reduce collisions and distribute keys uniformly.

✔ Included: Static hashing, hash table, hash functions  
✖ Excluded: theoretical evaluation of overflow handling  

---

## Q5. What is overflow handling in hashing? Name two techniques.
Overflow handling refers to methods used to resolve collisions when multiple keys map to the same index.

**Techniques:**
- Chaining  
- Open addressing (linear probing, quadratic probing)

---

# UNIT–IV: TREES, BST & AVL

## Q6. Define a binary tree.
A binary tree is a hierarchical structure in which each node has at most two children, called left and right child.

---

## Q7. Write the three types of binary tree traversals.
- **Preorder:** Root → Left → Right  
- **Inorder:** Left → Root → Right  
- **Postorder:** Left → Right → Root  

They can be implemented recursively or using stacks.

---

## Q8. What is a Binary Search Tree (BST)?
A BST is a binary tree where:
- Left subtree contains keys smaller than root  
- Right subtree contains keys greater than root  

BST enables efficient search, insertion, and deletion.

---

## Q9. Perform insertion and deletion in a BST (explain conceptually).

**Insert:** Traverse left/right based on comparisons until an empty location is found and place the new node.  

**Delete:**
- Node with no child: delete directly  
- Node with one child: replace with child  
- Node with two children: replace with inorder successor or predecessor  

✔ Included in Unit-IV  

---

## Q10. What is an AVL Tree? Why is balancing required?
AVL tree is a height-balanced BST where the difference in heights of left and right subtrees (balance factor) is not more than 1.

**Balancing ensures:**
- faster search  
- guaranteed O(log n) complexity  

Balancing is done through rotations during insertion or deletion.

---

# UNIT–V: GRAPHS & MST

## Q11. What is a graph Abstract Data Type (ADT)?
Graph ADT represents a set of vertices and edges, supporting operations such as:
- creation  
- add vertex / add edge  
- traversal (BFS/DFS)

---

## Q12. Explain BFS and DFS.

**BFS (Breadth First Search):** explores graph level by level using a queue; good for shortest paths in unweighted graphs.  

**DFS (Depth First Search):** explores deeper nodes first using a stack or recursion.  

✔ Included with problems

---

## Q13. What is a Minimum Cost Spanning Tree (MST)?
A spanning tree connects all vertices with minimum number of edges and no cycles.  
MST is a spanning tree with minimum total edge cost.

---

## Q14. Differentiate Kruskal’s and Prim’s MST algorithms.

| Feature | Kruskal | Prim |
|---------|---------|-------|
| Type | Greedy on edges | Greedy on vertices |
| Data | Needs sorting edges | Grows from a starting vertex |
| Structure | Good for sparse graphs | Good for dense graphs |

---

# UNIT–V: SORTING & SEARCHING

## Q15. Define insertion sort and its time complexity.
Insertion sort builds a sorted list element by element by inserting each new element into correct position.  
**Time complexity:** O(n²) worst case.

---

## Q16. Explain the working of quick sort.
Quick sort selects a pivot, partitions the array into elements less than and greater than the pivot, and recursively sorts subarrays.  
**Average complexity:** O(n log n).

---

## Q17. Explain merge sort.
Merge sort divides the array into two halves, recursively sorts them, and merges sorted halves.  
Guaranteed **O(n log n)** even in worst case.

---

## Q18. What is heap sort?
Heap sort builds a max-heap from the data, repeatedly deletes the maximum element, and places it at the end of the array.  
**Time complexity:** O(n log n).  

✖ Shell sort is excluded.

---

## Q19. Difference between linear search and binary search.

| Linear Search | Binary Search |
|---------------|----------------|
| Check each element sequentially | Repeatedly divide sorted list |
| Works on unsorted lists | Works only on sorted lists |
| O(n) | O(log n) |

✔ Included as function/program/problem topics
