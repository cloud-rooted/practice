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



# Possible LAQs

## Q. Explain stack implementation using linked lists with algorithm for push and pop.
### **Stack Implementation using Linked List**
A **stack** is a linear data structure that follows the **Last In, First Out** (LIFO) principle. The element that is inserted last is the first one to be removed. A stack can be implemented using an array or a linked list. In this case, we will explore the stack implementation using **linked lists**.

### **Stack Using Linked List**

In a linked list implementation of a stack, we use a singly linked list to store the elements of the stack. The top of the stack is represented by the **head** of the linked list.

#### **Operations on Stack:**

1. **Push Operation**: Adds an element to the stack (to the top).
2. **Pop Operation**: Removes an element from the stack (from the top).
3. **Peek Operation** (Optional): Views the element at the top of the stack without removing it.
4. **IsEmpty Operation** (Optional): Checks if the stack is empty.

### **Linked List Representation of Stack**

Each node in the linked list represents a stack element and contains two fields:

* **Data**: The value of the element.
* **Next**: A pointer to the next node in the stack.

**Stack** has a **top** pointer that points to the first (topmost) node of the linked list. When the stack is empty, the top pointer is `NULL`.

### **Algorithm for Push Operation**

To **push** an element into the stack:

1. **Create a new node** with the value to be pushed.
2. Set the **next** pointer of the new node to the current top (the topmost node in the stack).
3. Update the **top** pointer to point to the new node.

#### **Push Algorithm (in pseudocode)**:

```
Push(stack, data):
    // Create a new node
    new_node = createNode(data)
    
    // Point new node's next to the current top
    new_node.next = stack.top
    
    // Update top to the new node
    stack.top = new_node
```

### **Algorithm for Pop Operation**

To **pop** an element from the stack:

1. If the stack is not empty (i.e., the top is not `NULL`), retrieve the **data** from the top node.
2. Update the **top** pointer to point to the next node (i.e., the node below the current top).
3. Free the memory of the node that was removed (optional in languages with garbage collection).

#### **Pop Algorithm (in pseudocode)**:

```
Pop(stack):
    if stack.top == NULL:
        return "Stack is Empty"
    
    // Retrieve data from the top
    popped_data = stack.top.data
    
    // Update top to the next node
    stack.top = stack.top.next
    
    // Return the popped data
    return popped_data
```

### **Time Complexity**:

* **Push operation**: O(1) — The push operation involves adding a node at the beginning of the list, which is done in constant time.
* **Pop operation**: O(1) — The pop operation involves removing the node from the top of the stack, which is also done in constant time.

### **Example: Stack using Linked List**

Let's consider a stack and perform operations on it.

1. **Initialize an empty stack**:

   * `top = NULL`
2. **Push 10**:

   * New node created with value 10.
   * `top` points to this node.
3. **Push 20**:

   * New node created with value 20.
   * The next pointer of the new node points to the node containing 10, and `top` now points to this new node.
4. **Pop**:

   * The data at the top (20) is retrieved, and the `top` pointer is updated to point to the node containing 10.

### **Advantages of Stack Implementation with Linked List**:

1. **Dynamic Size**: Unlike arrays, linked lists do not require a predefined size, allowing for dynamic memory allocation.
2. **No Overflow**: There is no need to worry about overflow as long as memory is available, unlike stack implementations using arrays where the stack might overflow when it exceeds a predefined size.

### **Disadvantages**:

1. **Memory Overhead**: Linked lists require additional memory for the pointers (`next`), leading to more memory usage compared to an array-based implementation.
2. **Pointer Complexity**: More complex than an array-based stack due to the need for pointer management.

### **Diagram of Stack using Linked List**:

Consider the following linked list stack:

```
Top -> [20|next] -> [10|NULL]
```

Here, the stack contains two elements: 20 and 10. `Top` points to the node containing 20, and the next pointer of the node containing 20 points to the node containing 10.

### **Summary**:

In the linked list-based implementation of a stack:

* **Push** adds an element to the top by creating a new node and updating the top pointer.
* **Pop** removes the top element by updating the top pointer and freeing the memory of the removed node.
* Operations are efficient with O(1) time complexity for both push and pop, but there is overhead due to pointer management.



# Q. Describe queue implementation using linked list with necessary functions.
### **Queue Implementation using Linked List**

A **queue** is a linear data structure that follows the **First In, First Out** (FIFO) principle. The element that is inserted first is the first one to be removed. A queue can be implemented using an array or a linked list. In this case, we will explore the **queue implementation using a linked list**.

### **Queue Using Linked List**

In a linked list implementation of a queue, we use a **singly linked list** to store the elements of the queue. The queue has two main pointers:

* **front**: Points to the front of the queue (the element that will be dequeued next).
* **rear**: Points to the rear of the queue (the element that was last enqueued).

When the queue is empty, both **front** and **rear** will point to `NULL`.

### **Operations on Queue:**

1. **Enqueue Operation**: Adds an element to the end (rear) of the queue.
2. **Dequeue Operation**: Removes an element from the front of the queue.
3. **Peek/Front Operation** (Optional): Views the element at the front without removing it.
4. **IsEmpty Operation** (Optional): Checks if the queue is empty.

### **Linked List Representation of Queue**

Each node in the linked list contains:

* **Data**: The value of the element in the queue.
* **Next**: A pointer to the next node in the queue.

The **front** points to the first node in the queue, and **rear** points to the last node in the queue.

### **Algorithm for Enqueue Operation**

To **enqueue** an element (add an element to the rear of the queue):

1. **Create a new node** with the given value.
2. If the queue is empty (i.e., **rear** is `NULL`), set both **front** and **rear** to point to the new node.
3. If the queue is not empty, set the **next** pointer of the current **rear** node to the new node, then update **rear** to point to the new node.

#### **Enqueue Algorithm (in pseudocode)**:

```
Enqueue(queue, data):
    // Create a new node
    new_node = createNode(data)
    
    if queue.rear == NULL:
        // If queue is empty, both front and rear point to the new node
        queue.front = new_node
        queue.rear = new_node
    else:
        // Otherwise, add the new node at the end of the queue
        queue.rear.next = new_node
        queue.rear = new_node
```

### **Algorithm for Dequeue Operation**

To **dequeue** an element (remove an element from the front of the queue):

1. If the queue is not empty (i.e., **front** is not `NULL`), retrieve the **data** from the front node.
2. Update the **front** pointer to point to the next node in the queue.
3. If after updating, **front** becomes `NULL` (i.e., the queue is empty), set **rear** to `NULL` as well.

#### **Dequeue Algorithm (in pseudocode)**:

```
Dequeue(queue):
    if queue.front == NULL:
        return "Queue is Empty"
    
    // Retrieve data from the front
    dequeued_data = queue.front.data
    
    // Move the front pointer to the next node
    queue.front = queue.front.next
    
    // If the queue is empty after dequeue, set rear to NULL
    if queue.front == NULL:
        queue.rear = NULL
    
    return dequeued_data
```

### **Time Complexity**:

* **Enqueue operation**: O(1) — The enqueue operation involves adding a node at the end of the queue, which is done in constant time.
* **Dequeue operation**: O(1) — The dequeue operation involves removing the node from the front of the queue, which is also done in constant time.

### **Example: Queue using Linked List**

Let's consider the following sequence of operations on an empty queue.

1. **Initialize an empty queue**:

   * `front = NULL`, `rear = NULL`
2. **Enqueue 10**:

   * A new node is created with data 10.
   * Both **front** and **rear** point to this node.
3. **Enqueue 20**:

   * A new node is created with data 20.
   * The **next** pointer of the node containing 10 points to the new node, and **rear** is updated to point to this new node.
4. **Dequeue**:

   * The data at the front (10) is retrieved, and the **front** pointer is updated to point to the node containing 20.

### **Diagram of Queue using Linked List**:

Consider a queue with two elements: 10 and 20.

Initially:

```
Front -> [10|next] -> [20|NULL] <- Rear
```

After **Enqueue(30)**:

```
Front -> [10|next] -> [20|next] -> [30|NULL] <- Rear
```

After **Dequeue()** (removing 10):

```
Front -> [20|next] -> [30|NULL] <- Rear
```

### **Advantages of Queue Implementation with Linked List**:

1. **Dynamic Size**: Unlike arrays, linked lists do not require a predefined size, allowing for dynamic memory allocation.
2. **No Overflow**: There is no need to worry about overflow as long as memory is available, unlike queue implementations using arrays where the queue might overflow when it exceeds a predefined size.

### **Disadvantages**:

1. **Memory Overhead**: Linked lists require additional memory for the pointers (`next`), leading to more memory usage compared to an array-based implementation.
2. **Pointer Complexity**: More complex than an array-based queue due to the need for pointer management.

### **Functions for Queue Implementation**:

Here is a summary of the functions needed for the queue implementation:

1. **CreateNode**:

   * Creates a new node for the queue with the given data.

2. **Enqueue**:

   * Adds an element to the rear of the queue.

3. **Dequeue**:

   * Removes an element from the front of the queue.

4. **Peek/Front** (Optional):

   * Returns the data of the front element without dequeuing it.

5. **IsEmpty** (Optional):

   * Checks if the queue is empty.

### **Summary**:

In the linked list-based implementation of a queue:

* **Enqueue** adds an element at the end (rear) by creating a new node and updating the `rear` pointer.
* **Dequeue** removes an element from the front by updating the `front` pointer and freeing the memory of the removed node.
* Both operations are efficient with O(1) time complexity for both enqueue and dequeue operations.
* However, the implementation requires extra memory for pointers and involves pointer manipulation.



# Q. Explain hashing and overflow handling techniques with examples.
# **Hashing and Overflow Handling Techniques**

### **1. What is Hashing?**

**Hashing** is a technique used to **store and retrieve data efficiently** in constant time *O(1)* on average.
It uses a **hash function** to convert a key into an index of a hash table.

### **Hash Function**

A **hash function (h(key))** maps a key to an index in the hash table.

Example:
If the table size is 10, a simple hash function can be:

```
h(key) = key % 10
```

If the key = 37:

```
h(37) = 37 % 10 = 7
```

So key 37 is stored at index **7**.

---

# **2. What is Collision?**

A **collision** occurs when two different keys generate the **same hash index**.

Example:
Table size = 10

```
h(17) = 17 % 10 = 7
h(27) = 27 % 10 = 7
```

Both keys map to index **7** → this is a **collision**.

To solve this, we use **overflow handling (collision resolution) techniques.**

---

# **3. Overflow Handling (Collision Resolution) Techniques**

There are two major categories:

---

# **A. Open Addressing Methods**

In this approach, when a collision occurs, the algorithm searches for another empty slot *within the hash table*.

---

## **1. Linear Probing**

When a collision occurs, the next slot is checked sequentially:

```
index = (h(key) + i) % table_size
```

where **i = 0, 1, 2, 3...**

### **Example**

Table size = 10
Insert keys: **27, 37, 47**

Hash:

```
27 % 10 = 7 → index 7 empty → store at 7
37 % 10 = 7 → collision → try 8 → store at 8
47 % 10 = 7 → collision → try 8 (occupied) → try 9 → store at 9
```

Table:

```
7 → 27
8 → 37
9 → 47
```

**Advantage:** Simple
**Disadvantage:** Clustering (continuous block of filled slots)

---

## **2. Quadratic Probing**

It resolves the clustering problem by checking positions using squares of i:

```
index = (h(key) + i²) % table_size
```

### **Example**

Insert **27, 37, 47** with h(key) = key % 10
Insert 37 (collision at 7):

```
i=1 → 7 + 1² = 8 → store at index 8
```

Insert 47:

```
i=1 → 7 + 1 = 8 (occupied)
i=2 → 7 + 4 = 11 % 10 = 1 → store at index 1
```

---

## **3. Double Hashing**

Uses **two hash functions** to reduce clustering:

```
index = (h1(key) + i * h2(key)) % table_size
```

### Example

```
h1(key) = key % 10
h2(key) = 7 - (key % 7)
```

Prevents clustering much better than linear/quadratic probing.

---

# **B. Chaining (Separate Chaining)**

Each table index stores a **linked list** of keys that hash to the same index.

### **Example**

Insert: 27, 37, 47
Table size = 10

```
h(27) = 7
h(37) = 7
h(47) = 7
```

Store all in a chain at index 7:

```
Index 7 → 27 → 37 → 47 → NULL
```

**Advantages:**

* No need to probe for free slots
* Table can store more elements than its size

**Disadvantages:**

* Extra memory for pointers

---

# **4. Examples of Hashing With Overflow Handling**

### **Example Problem**

Insert keys: **23, 43, 13, 27**
Table size = 10
Hash function:

```
h(key) = key % 10
```

### **A. Using Chaining**

```
23 → index 3 → 23
43 → index 3 → 23 → 43
13 → index 3 → 23 → 43 → 13
27 → index 7 → 27
```

### **B. Using Linear Probing**

```
23 → index 3 → store
43 → index 3 (occupied) → try 4 → store
13 → index 3 (occupied) → 4 (occupied) → 5 → store
27 → index 7 → store
```

---

# **5. Summary (Exam-Friendly)**

* **Hashing** is used for fast data access using a **hash function** that maps keys to indices.
* **Collisions** occur when two keys hash to the same index.
* **Overflow handling** techniques resolve collisions:

### **1. Open Addressing**

* **Linear Probing**: Check next cell → leads to clustering
* **Quadratic Probing**: Uses i² → reduces clustering
* **Double Hashing**: Uses two hash functions → best among open addressing

### **2. Chaining**

* Each index maintains a linked list.
* Simple, flexible, and handles many collisions well.


# Q. Explain binary tree traversals with algorithms.
Below is a **clear, exam-ready (5–8 marks)** answer for **Binary Tree Traversals with Algorithms**.

---

# **Binary Tree Traversals**

A **binary tree traversal** means visiting each node of the tree in a specific order.  
There are **two main types** of traversals:

1. **Depth-First Traversal (DFT)**
2. **Breadth-First Traversal (BFT)**

---

# **1. Depth-First Traversals**

Depth-first traversal goes **deep into the left subtree** before the right subtree.  
There are **three standard DFT methods**:

---

## **A. Inorder Traversal (Left → Root → Right)**

Steps:
1. Visit the **left subtree**
2. Visit the **root**
3. Visit the **right subtree**

### **Algorithm (Recursive)**
```
Inorder(node):
    if node ≠ NULL:
        Inorder(node.left)
        visit(node.data)
        Inorder(node.right)
```

### **Example**
For tree:

```
      A
     / \
    B   C
```
Inorder → **B A C**

---

## **B. Preorder Traversal (Root → Left → Right)**

Steps:
1. Visit the **root**
2. Traverse the **left subtree**
3. Traverse the **right subtree**

### **Algorithm (Recursive)**
```
Preorder(node):
    if node ≠ NULL:
        visit(node.data)
        Preorder(node.left)
        Preorder(node.right)
```

### **Example**
Preorder → **A B C**

---

## **C. Postorder Traversal (Left → Right → Root)**

Steps:
1. Visit the **left subtree**
2. Visit the **right subtree**
3. Visit the **root**

### **Algorithm (Recursive)**
```
Postorder(node):
    if node ≠ NULL:
        Postorder(node.left)
        Postorder(node.right)
        visit(node.data)
```

### Example
Postorder → **B C A**

---

# **2. Breadth-First Traversal (Level Order Traversal)**

Nodes are visited **level by level**, from top to bottom and left to right.  
A **queue** is used to store nodes temporarily.

---

## **Algorithm**
```
LevelOrder(root):
    if root == NULL:
        return

    create an empty queue
    enqueue(root)

    while queue is not empty:
        node = dequeue()
        visit(node.data)

        if node.left ≠ NULL:
            enqueue(node.left)

        if node.right ≠ NULL:
            enqueue(node.right)
```

### Example
For the same tree:

```
      A
     / \
    B   C
```
Level order → **A B C**

---

# **Summary Table**

| Traversal | Order | Usage |
|----------|----------------------|--------------------------|
| **Inorder** | Left → Root → Right | Gives sorted order in BST |
| **Preorder** | Root → Left → Right | Used to create a copy of tree |
| **Postorder** | Left → Right → Root | Used to delete/free tree |
| **Level Order** | Level by level | BFS, shortest path |

---

# **Exam-Ready Explanation (Short Version)**

Binary tree traversal means visiting all nodes in a specific order. There are three depth-first traversals:  
- **Inorder:** L → R → Root  
- **Preorder:** Root → Left → Right  
- **Postorder:** Left → Right → Root  

Level order traversal visits nodes **level by level** using a queue.

Each traversal has simple recursive algorithms (provided above).


# Q. Describe insertion, searching, and deletion in a BST.
# **Binary Search Tree (BST)**

A **Binary Search Tree** is a binary tree in which:

* Left child contains values **less than** the root.
* Right child contains values **greater than** the root.
* No duplicate values (in standard BST).

This property allows efficient **search, insertion, and deletion** operations.

---

# **1. Insertion in a BST**

### **Idea**

* Compare the new key with the root.
* If the key is **smaller**, go to the left subtree.
* If the key is **greater**, go to the right subtree.
* Insert at the position where a NULL pointer is found.

### **Algorithm (Recursive)**

```
Insert(node, key):
    if node == NULL:
        node = createNode(key)
        return node
    
    if key < node.data:
        node.left = Insert(node.left, key)
    else if key > node.data:
        node.right = Insert(node.right, key)

    return node
```

### **Example**

Insert 40 into this BST:

```
      50
     /
    30
```

40 < 50 → go left
40 > 30 → go right → insert here.

Tree becomes:

```
      50
     /
    30
      \
       40
```

---

# **2. Searching in a BST**

### **Idea**

Use BST property:

* If key < node → search in left subtree
* If key > node → search in right subtree
* If equal → element found

### **Algorithm**

```
Search(node, key):
    if node == NULL:
        return "Not Found"

    if key == node.data:
        return "Found"

    if key < node.data:
        return Search(node.left, key)
    else:
        return Search(node.right, key)
```

### **Example**

Search 30 in the BST:

```
       40
      /  \
    20    60
```

30 > 20 → go right
30 == 30 → found.

---

# **3. Deletion in a BST**

Deletion is the most complex operation.
There are **three cases**:

---

## **Case 1: Node to be deleted is a leaf (no children)**

Simply remove it.

Example: delete **20** from:

```
    30
   /
  20
```

Result:

```
  30
```

---

## **Case 2: Node has **one child**

Replace the node with its child.

Example: delete **30** from:

```
    30
      \
      40
```

Result:

```
   40
```

---

## **Case 3: Node has **two children**

Steps:

1. Find **inorder successor** (smallest node in right subtree).
2. Copy its value to the node to be deleted.
3. Delete the inorder successor.

### Example

Delete 50 from:

```
       50
      /  \
    30    70
         /
        60
```

Inorder successor = 60
Replace 50 → 60
Delete 60 from right subtree.

Result:

```
       60
      /  \
    30    70
```

---

### **Algorithm for Deletion**

```
Delete(node, key):
    if node == NULL:
        return node

    if key < node.data:
        node.left = Delete(node.left, key)
    else if key > node.data:
        node.right = Delete(node.right, key)
    else:
        // Case 1: No child
        if node.left == NULL and node.right == NULL:
            return NULL

        // Case 2: One child
        else if node.left == NULL:
            return node.right
        else if node.right == NULL:
            return node.left

        // Case 3: Two children
        temp = inorderSuccessor(node.right)
        node.data = temp.data
        node.right = Delete(node.right, temp.data)

    return node
```

---

# **Summary (Exam-Friendly)**

* **Insertion:** Compare key → go left/right → insert at NULL.
* **Searching:** Compare key → go left/right → found or not found.
* **Deletion:**

  * **Case 1:** Delete leaf.
  * **Case 2:** Replace with child.
  * **Case 3:** Replace with inorder successor, then delete it.

BST operations take **O(h)** time, where *h* is tree height.


# Q. Explain AVL tree balancing using suitable rotations
# **AVL Tree Balancing Using Rotations**

An **AVL tree** is a self-balancing Binary Search Tree (BST).
For every node:

[
\text{Balance Factor} = \text{height(left)} - \text{height(right)}
]

The AVL property requires:

[
| \text{Balance Factor} | \le 1
]

Whenever an insertion or deletion makes the tree unbalanced, **rotations** are used to restore the balance.

There are **four types of rotations**:

1. **LL Rotation (Left-Left)**
2. **RR Rotation (Right-Right)**
3. **LR Rotation (Left-Right)**
4. **RL Rotation (Right-Left)**

These correspond to four cases of imbalance.

---

# **1. LL Rotation (Left-Left Case)**

### **Occurs when:**

A node is inserted into the **left subtree of the left child**.

### **Example**

Insert 10, 5, 2

Tree becomes:

```
        10
       /
      5
     /
    2     ← imbalance at 10 (BF = +2)
```

### **Fix: Right Rotation at the unbalanced node (10)**

```
      5
     / \
    2   10
```

**LL → perform Right Rotation**

---

# **2. RR Rotation (Right-Right Case)**

### **Occurs when:**

A node is inserted into the **right subtree of the right child**.

### **Example**

Insert 10, 15, 20

```
    10
      \
      15
        \
        20   ← imbalance at 10 (BF = -2)
```

### **Fix: Left Rotation at the unbalanced node (10)**

```
      15
     /  \
    10   20
```

**RR → perform Left Rotation**

---

# **3. LR Rotation (Left-Right Case)**

### **Occurs when:**

A node is inserted into the **right subtree of the left child**.

This requires **two rotations**:

1. Left rotation on left child
2. Right rotation on unbalanced node

### **Example**

Insert 30, 20, 25

```
      30
     /
    20
      \
      25    ← imbalance at 30 (BF = +2)
```

### **Fix:**

Step 1: **Left Rotation on 20**

```
      30
     /
    25
   /
  20
```

Step 2: **Right Rotation on 30**

```
      25
     /  \
    20   30
```

**LR → perform Left Rotation + Right Rotation**

---

# **4. RL Rotation (Right-Left Case)**

### **Occurs when:**

A node is inserted into the **left subtree of the right child**.

This requires **two rotations**:

1. Right rotation on right child
2. Left rotation on unbalanced node

### **Example**

Insert 20, 30, 25

```
    20
      \
      30
     /
    25     ← imbalance at 20
```

### **Fix:**

Step 1: **Right Rotation on 30**

```
    20
      \
      25
        \
        30
```

Step 2: **Left Rotation on 20**

```
      25
     /  \
    20   30
```

**RL → perform Right Rotation + Left Rotation**

---

# **Summary Table**

| Case   | Condition                                | Rotation Used                           |
| ------ | ---------------------------------------- | --------------------------------------- |
| **LL** | Inserted in left subtree of left child   | Right Rotation                          |
| **RR** | Inserted in right subtree of right child | Left Rotation                           |
| **LR** | Inserted in right subtree of left child  | Left Rotation on child + Right Rotation |
| **RL** | Inserted in left subtree of right child  | Right Rotation on child + Left Rotation |

---

# **Why Rotations Are Needed?**

Rotations restore the AVL property by adjusting the structure of the tree **while preserving the BST order**.

This ensures:

* Search time remains **O(log n)**
* Insertion and deletion remain efficient



# Q. Explain BFS and DFS with algorithms and sample output.
# **Breadth-First Search (BFS) and Depth-First Search (DFS)**

Graph traversal means visiting every vertex of a graph in a systematic manner.
Two commonly used traversal methods are:

1. **BFS – Breadth-First Search**
2. **DFS – Depth-First Search**

Both work on graphs and trees.

---

# **1. Breadth-First Search (BFS)**

### **Definition**

BFS explores a graph **level by level**.
It uses a **queue** to visit the nearest neighbors first.

### **Algorithm (Using Queue)**

```
BFS(G, start):
    create an empty queue Q
    mark start as visited
    enqueue(start)

    while Q is not empty:
        v = dequeue(Q)
        visit(v)

        for each neighbor u of v:
            if u is not visited:
                mark u as visited
                enqueue(u)
```

---

### **Example Graph**

```
    1
   / \
  2   3
 / \
4   5
```

### **BFS starting from 1**

**Steps:**

* Start = 1
* Visit neighbors in increasing order

**Traversal order:**

```
1 → 2 → 3 → 4 → 5
```

---

# **2. Depth-First Search (DFS)**

### **Definition**

DFS explores a graph **deeply along each branch** before backtracking.
It uses a **stack** (or recursion).

### **Algorithm (Recursive)**

```
DFS(v):
    mark v as visited
    visit(v)

    for each neighbor u of v:
        if u is not visited:
            DFS(u)
```

### **Algorithm (Using Stack)**

```
DFS(G, start):
    create an empty stack S
    push(start)
    
    while S is not empty:
        v = pop(S)
        
        if v is not visited:
            mark v as visited
            visit(v)
        
            for each neighbor u of v in reverse order:
                if u is not visited:
                    push(u)
```

---

### **Example Graph**

Using the same graph:

```
    1
   / \
  2   3
 / \
4   5
```

### **DFS starting from 1**

**Steps (recursive):**
1 → 2 → 4 → backtrack → 5 → backtrack → 3

**Traversal order:**

```
1 → 2 → 4 → 5 → 3
```

---

# **Comparison of BFS vs DFS**

| Feature        | BFS                        | DFS                                |
| -------------- | -------------------------- | ---------------------------------- |
| Data structure | Queue                      | Stack / recursion                  |
| Traversal type | Level-by-level             | Depth-first                        |
| Shortest path  | Yes                        | No                                 |
| Memory usage   | High                       | Low                                |
| Typical uses   | Shortest path, Level order | Topological sort, Cycles detection |

---

# **Summary**

* **BFS** explores neighbors first → uses **queue** → output: *1,2,3,4,5*
* **DFS** explores deep paths first → uses **stack/recursion** → output: *1,2,4,5,3*
* Both visit each node once: time complexity **O(V + E)**


# Q. Explain Kruskal’s algorithm for MST with a suitable example.
# **Kruskal’s Algorithm for Minimum Spanning Tree (MST)**

### **Definition**

Kruskal’s algorithm is a **greedy** algorithm used to find the **Minimum Spanning Tree (MST)** of a connected, weighted graph.

A **Minimum Spanning Tree** is a subset of edges that:

* Connects all vertices
* Has **no cycles**
* Has the **minimum possible total weight**

---

# **Steps of Kruskal’s Algorithm**

1. **Sort all edges** of the graph in **increasing order of weights**.
2. Initialize an empty set MST.
3. For each edge in the sorted list:

   * If the edge **does NOT form a cycle**, include it in the MST.
   * Otherwise **skip** the edge.
4. Continue until MST contains **(V – 1)** edges.

Cycle detection is done using **Disjoint Set (Union–Find)** data structure.

---

# **Example Graph**

Consider the weighted graph:

```
      (4)
   A-------B
   | \     |
 (1)|  \(2)| (5)
   |   \   |
   C-------D
      (3)
```

### **Edges List**

| Edge | Weight |
| ---- | ------ |
| A–C  | 1      |
| C–D  | 3      |
| A–D  | 2      |
| A–B  | 4      |
| B–D  | 5      |

---

# **Step-by-Step Execution**

### **Step 1: Sort edges by weight**

Sorted order:

1. A–C (1)
2. A–D (2)
3. C–D (3)
4. A–B (4)
5. B–D (5)

---

### **Step 2: Pick edges one by one**

### **1. Pick A–C (1)**

No cycle → add to MST
MST: **A–C**

### **2. Pick A–D (2)**

No cycle → add
MST: **A–C, A–D**

### **3. Pick C–D (3)**

Forms a cycle (A–C–D)
→ **Skip**

### **4. Pick A–B (4)**

No cycle → add
MST: **A–C, A–D, A–B**

### **Stop**, since MST has **V – 1 = 3** edges.

---

# **Final MST**

Edges included:

```
A–C (1)
A–D (2)
A–B (4)
```

The **total minimum cost**:
[
1 + 2 + 4 = 7
]

---

# **Diagram of the MST**

```
    (4)
 A-------B
 |
(1)
 C
 |
(2)
 D
```

---

# **Time Complexity**

* Sorting edges: **O(E log E)**
* Union-Find operations: almost **O(1)** each
  Total: **O(E log E)**

---

# **Summary (Exam-ready)**

* Kruskal’s algorithm is a **greedy algorithm** that builds the MST by repeatedly picking the **smallest weight edge** that does not form a cycle.
* Uses **sorting** + **Union–Find** to avoid cycles.
* Works well for **sparse graphs**.
* Example MST edges: **A–C, A–D, A–B** with total weight **7**.


# Q. Explain Prim’s algorithm for MST with time complexity.
# **Prim’s Algorithm for MST**

### **Definition**

Prim’s algorithm is a **greedy algorithm** used to find the **Minimum Spanning Tree (MST)** of a connected weighted graph.
It builds the MST **starting from a single vertex** and grows it by repeatedly adding the **minimum weight edge** that connects a visited node to an unvisited node.

---

# **Steps of Prim’s Algorithm**

1. Choose any vertex as the **starting node**.
2. Add it to the MST set.
3. Among all edges that connect MST vertices to non-MST vertices,
   **pick the edge with the minimum weight**.
4. Add the selected edge and the new vertex to the MST.
5. Repeat until all vertices are included in the MST (V – 1 edges).

---

# **Example Graph**

```
      2
   A------B
   | \    |
  3|  \1  |4
   |   \  |
   C------D
      5
```

### **Edges:**

A–B (2), A–C (3), A–D (1), B–D (4), C–D (5)

---

# **Prim’s Algorithm Execution**

Start at **A**.

### **Step 1: From A**

Edges from A:

* A–D (1) ← **minimum**
* A–B (2)
* A–C (3)

Pick **A–D (1)**
MST: A–D

### **Step 2: From {A, D}**

Possible edges:

* A–B (2)
* A–C (3)
* D–B (4)
* D–C (5)

Pick **A–B (2)**
MST: A–D, A–B

### **Step 3: From {A, D, B}**

Possible edges:

* A–C (3)
* B–D (4)
* D–C (5)

Pick **A–C (3)**
MST: A–D, A–B, A–C

Now all 4 vertices are included → **STOP**.

---

# **Final MST**

Edges:

```
A–D (1)
A–B (2)
A–C (3)
```

Total cost = **1 + 2 + 3 = 6**

---

# **Prim’s Algorithm: Time Complexity**

Prim’s complexity depends on the data structure used:

---

### **1. Using Adjacency Matrix + Linear Search**

* At each iteration, find the minimum edge → O(V)
* Repeated for V vertices
  **Time Complexity: O(V²)**
  Suitable for **dense graphs**.

---

### **2. Using Min-Heap / Priority Queue + Adjacency List**

* Insert / extract minimum from heap → O(log V)
* Done for all edges
  **Time Complexity: O(E log V)**
  Efficient for **sparse graphs**.

---

### **3. Using Fibonacci Heap**

Allows faster decrease-key operations.
**Time Complexity: O(E + V log V)**
Theoretical best but complex to implement.

---

# **Summary (Exam-Ready)**

* Prim’s is a **greedy algorithm** starting from one node and adding the smallest connecting edge.
* Maintains two sets: **MST vertices** and **non-MST vertices**.
* Best implementation uses a **priority queue**, giving time complexity **O(E log V)**.
* Example MST: **A–D, A–B, A–C** with total cost **6**.


# Q. Write short notes on insertion sort and heap sort.
# ⭐ **Short Note: Insertion Sort**

### **Definition**

Insertion sort is a simple comparison-based sorting technique that builds the final sorted array **one element at a time**, similar to sorting playing cards in your hand.

### **Working Principle**

* Start from the second element.
* Insert it into its **correct position** in the sorted portion (left side).
* Shift elements to the right to make space.

### **Algorithm (Simple)**

```
for i = 1 to n−1:
    key = A[i]
    j = i − 1
    while j ≥ 0 and A[j] > key:
        A[j+1] = A[j]
        j = j − 1
    A[j+1] = key
```

### **Example**

Array: 5, 3, 4, 1
After sorting: **1, 3, 4, 5**

### **Characteristics**

* **Adaptive:** Efficient for nearly sorted data
* **Stable:** Equal elements retain their order
* **In-place:** Requires no extra memory

### **Time Complexity**

* **Best case:** O(n)  (already sorted)
* **Average & Worst case:** O(n²)
* **Space Complexity:** O(1)

---

# ⭐ **Short Note: Heap Sort**

### **Definition**

Heap sort is a comparison-based sorting algorithm that uses a **binary heap data structure** (usually a max-heap).
It repeatedly extracts the **maximum element** and rebuilds the heap.

### **Steps**

1. **Build Max-Heap** from the input array.
2. Swap the **root (largest element)** with the last element.
3. Reduce heap size and **heapify** the root.
4. Repeat until all elements are sorted.

### **Algorithm (High-Level)**

```
HeapSort(A):
    buildMaxHeap(A)
    for i = n-1 down to 1:
        swap(A[0], A[i])
        heapify(A, 0, i)
```

### **Example**

Array: 4, 10, 3, 5

Max heap: [10, 5, 3, 4]
Then extract and rebuild → Sorted result: **3, 4, 5, 10**

### **Characteristics**

* **Not stable**
* **In-place**, but requires heap structure
* Efficient for large datasets

### **Time Complexity**

* **Building heap:** O(n)
* **Heapify operations:** O(log n) each
* **Total:** O(n log n)
* **Space Complexity:** O(1)

---

# **Summary Table**

| Feature         | Insertion Sort   | Heap Sort             |
| --------------- | ---------------- | --------------------- |
| Type            | Simple, adaptive | Efficient, heap-based |
| Time Complexity | O(n²)            | O(n log n)            |
| Space           | O(1)             | O(1)                  |
| Stability       | Stable           | Not stable            |


# Q. Explain binary search with an example.
# **Binary Search**

### **Definition**

Binary search is an efficient algorithm to find the **position of a key** in a **sorted array**.
It works by repeatedly dividing the search interval **in half**.

### **Prerequisite**

* The array **must be sorted** in ascending or descending order.

---

# **Algorithm (Iterative Version)**

```
BinarySearch(A, key):
    low = 0
    high = n-1
    
    while low ≤ high:
        mid = (low + high) / 2
        if A[mid] == key:
            return mid  // key found
        else if A[mid] < key:
            low = mid + 1  // search right half
        else:
            high = mid - 1  // search left half
    
    return -1  // key not found
```

---

# **Algorithm (Recursive Version)**

```
BinarySearch(A, low, high, key):
    if low > high:
        return -1  // key not found
    
    mid = (low + high) / 2
    
    if A[mid] == key:
        return mid
    else if key < A[mid]:
        return BinarySearch(A, low, mid-1, key)
    else:
        return BinarySearch(A, mid+1, high, key)
```

---

# **Example**

Sorted Array:

```
A = [2, 5, 8, 12, 16, 23, 38, 45]
Key = 16
```

### **Step 1:**

low = 0, high = 7 → mid = (0+7)/2 = 3 → A[3] = 12
16 > 12 → search right half (low = 4, high = 7)

### **Step 2:**

mid = (4+7)/2 = 5 → A[5] = 23
16 < 23 → search left half (low = 4, high = 4)

### **Step 3:**

mid = (4+4)/2 = 4 → A[4] = 16 → key found at index **4**

---

# **Characteristics**

* **Time Complexity:**

  * Best case: O(1)
  * Average & Worst case: O(log n)
* **Space Complexity:**

  * Iterative: O(1)
  * Recursive: O(log n) due to recursion stack
* **Requirement:** Array must be sorted.
* **Method:** Divide and conquer.

---

# **Summary**

Binary search efficiently finds an element in a **sorted array** by halving the search range each time.
**Example result:** Key 16 found at index 4 in the array `[2, 5, 8, 12, 16, 23, 38, 45]`.

