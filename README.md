# Data Structures And Algorithms
----
 ## Table of Contents
 * [Data Structure](#data-structure)
 * [Array](#arraypractice)
 * [Linkedlist](#linked-listpractice)
 * [Stack](#stackpractice)
 * [Queue](#queuepractice)
 * [Tree](#tree)
 * [Binary Tree](#binary-treepractice)
 * [Binary Search Tree](#binary-search-treepractice)
 * [Bit Manipulation](#bit-manipulationpractice)
 * [Math](#mathpractice)
 * [C++](#c)
-----
## Data structure

Data structure is a particular way of storing and organizing data in a computer so that it can be used efficiently.

General data structure types include arrays, files, linked lists, stacks, queues, trees, graphs and so on.

Depending on the organization of the elements, data structures are classified into two types:

![](https://media.geeksforgeeks.org/wp-content/uploads/20191010170332/Untitled-Diagram-183.png)
* Linear data structures: Elements are accessed in a sequential order but it is not compulsory to store all elements sequentially. Examples: Linked Lists, Stacks and Queues.
* Non – linear data structures: Elements of this data structure are accessed in a non-linear order. Examples: Trees and graphs.
-----
## Array([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Array))

An array is a collection of items of same data type stored at contiguous memory locations.

The array elements can be accessed in constant time by using the index of the particular element as the
subscript.

Remember: “Location of next index depends on the data type we use”. 

![](https://media.geeksforgeeks.org/wp-content/uploads/array-2.png)

#### Why Constant Time for Accessing Array Elements?

To access an array element, First the size of an element of that data type is calculated and then it is multiplied with the index of the element to get the value to be added to the base address.

This process takes one multiplication and one addition. Since these two operations take constant
time, we can say the array access can be performed in constant time.

#### References

* [Array Data Structure](https://www.geeksforgeeks.org/array-data-structure/#difflang)
* [Top Array Coding Problems from GFG](https://www.geeksforgeeks.org/top-50-array-coding-problems-for-interviews/)
* [Top Array Coding Problems from Techie Delight](https://www.techiedelight.com/huge-collection-of-array-interview-questions/)

## Linked List([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Linked%20List))

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.They include a series of connected nodes. Here, each node stores the data and the address of the next node.

It is basically chains of nodes, each node contains information such as data and a pointer to the next node in the chain. In the linked list there is a head pointer, which points to the first element of the linked list, and if the list is empty then it simply points to null or nothing.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220816144425/LLdrawio.png)

#### Difference between Array and Linked List

![](https://media.geeksforgeeks.org/wp-content/uploads/20220525085238/Screenshot20220525085154.png)

#### What Are the Types of Linked Lists?
* Singly Linked Lists
* Doubly Linked List
* Circular Linked List
* Doubly Circular Linked List

### Singly Linked Lists([Implementation](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/blob/main/Linked%20List/singlyLinkedList.cpp))

Singly Linked Lists consists of a number of nodes in which each node stores the data and the address of the next node. The link of the last node in the list is
NULL, which indicates the end of the list.

![](https://media.geeksforgeeks.org/wp-content/uploads/singly-linkedlist.png)

### Doubly Linked List

In a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer).

![](https://media.geeksforgeeks.org/wp-content/uploads/20220712180755/Doublylinkedlist.png)

### Circular Linked List

 A circular linked list is a unidirectional linked list where each node points to its next node and the last node points back to the first node, which makes it circular.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220712181336/Circularlinkedlist.png)

### Doubly Circular Linked List

A doubly circular linked list is a linked list where each node points to its next node and its previous node and the last node points back to the first node and first node’s previous points to the last node.

![](https://media.geeksforgeeks.org/wp-content/uploads/20220830114920/doubly-660x177.jpg)


#### References

* [Linked List Data Structure](https://www.geeksforgeeks.org/data-structures/linked-list/)
* [Top Linked List Coding Problems from GFG](https://www.geeksforgeeks.org/top-20-linked-list-interview-question/)
* [Top Linked List Coding Problems from Techie Delight](https://www.techiedelight.com/linked-list-interview-questions/)

## Stack([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Stack))

Stack is a linear data structure in which insertion and deletion are done at one end, called
top. The last element inserted is the first one to be deleted. It follows the principle of Last In First Out (LIFO) or First in Last out (FILO).

When an element is inserted in a stack, the concept is called push, and when an element is removed from the stack, the
concept is called pop.

Trying to pop out an empty stack is called underflow and trying to push an
element in a full stack is called overflow.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221219100314/stack.drawio2.png)

#### Implementation

* [Simple array based implementation](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/blob/main/Stack/stack-using-array.cpp)
* [Linked lists implementation](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/blob/main/Stack/stack-using-linkedlist.cpp)

## Queue([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Queue))

Queue is a linear data structure in which insertions are done at one end (rear) and
deletions are done at other end (front).The first element to be inserted is the first one to be
deleted. It follows the principle of  First in First out (FIFO) or Last in Last out (LILO).

When an element is inserted in a queue, the concept is called EnQueue, and when an element is
removed from the queue, the concept is called DeQueue.

DeQueueing an empty queue is called underflow and EnQueuing an element in a full queue is
called overflow.

![](https://media.geeksforgeeks.org/wp-content/uploads/20221209094646/Queue-768.png)

#### Implementation

* [Simple Circular Array Implementation](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/blob/main/Queue/Queue%20using%20Circular%20Array.cpp)
* [Linked List Implementation](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/blob/main/Queue/Queue%20using%20Linkedlist.cpp)

## Tree

Tree is a non-linear data structure.A tree data structure is a way of organizing data hierarchically in a tree-like structure.

It consists of nodes connected by edges, with one node at the top (called the root node) and all other nodes arranged below it in a branching pattern.

* The root of a tree is the node with no parents. There can be at most one root node in a tree.
* A node with no children is called leaf node.
* Children of same parent are called siblings.

## Binary Tree([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Binary%20Tree))

A tree is called binary tree if each node has zero child, one child or two children.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/binary-tree-to-DLL.png)

## Binary Search Tree([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Binary%20Search%20Tree))

In binary search trees, all the left subtree elements should be less than root data and all the right
subtree elements should be greater than root data.Both the left and right subtrees must also be binary search trees.

## Bit Manipulation([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Bit%20Manipulation))

### Bitwise Operators in C/C++

Basically, there are
six operators that C and C++ support for bit manipulation:

![](https://www.researchgate.net/profile/Rama-M-A/publication/276202732/figure/fig3/AS:667718365749268@1536207872972/Bitwise-Operators-i-Bitwise-operators-cannot-be-applied-to-float-or-double-They-can.png)

1. Bitwise AND:
The bitwise AND tests two binary numbers and returns bit values of 1 for positions where both
numbers had a one, and bit values of 0 where both numbers did not have one.
2.  Bitwise OR:
The bitwise OR tests two binary numbers and returns bit values of 1 for positions where either bit
or both bits are one, the result of 0 only happens when both bits are 0.
3.  Bitwise Exclusive-OR:
The bitwise Exclusive-OR tests two binary numbers and returns bit values of 1 for positions
where both bits are different; if they are the same then the result is 0.
4. Bitwise Left Shift:
The bitwise left shift moves all bits in the number to the left and fills vacated bit positions with 0.
5. Bitwise Right Shift:
The bitwise right shift moves all bits in the number to the right.
6. Bitwise Complement:
The bitwise complement inverts the bits in a single binary number.

### Bitwise Hacks for Competitive Programming

##### References

* [Basic](https://www.techiedelight.com/bit-hacks-part-1-basic/#P2)
* [Playing with k’th bit](https://www.techiedelight.com/bit-hacks-part-2-playing-kth-bit/)
* [Playing with the rightmost set bit of a number](https://www.techiedelight.com/bit-hacks-part-3-playing-rightmost-set-bit-number/)
* [Questions from Medium.com](https://medium.com/techie-delight/bit-manipulation-interview-questions-and-practice-problems-27c0e71412e7)

* [Questions from GFG](https://www.geeksforgeeks.org/bitwise-algorithms/)

## Math([Practice](https://github.com/alkamaazmi/Data-Structures-and-Algorithms/tree/main/Math))

#### References

* [Basic Maths for Programming](https://medium.com/@sarthakagarwal147/maths-for-cp-and-dsa-c4f82f2740e1)

* [Mathematical Algorithms](https://www.geeksforgeeks.org/mathematical-algorithms/)

## C++

* [C++ Operator Precedence](https://en.cppreference.com/w/cpp/language/operator_precedence)