# Author: Yatharth Chauhan

# Linked List

A linked list is a non-sequential collection of data items.

A Linked List is a Linear Data Structure.

A LL is the collection of nodes that are randomly stored.

Each node has data and a pointer to the next node.

Each node is divided into two parts, the first part represents the data of the element and the second part contains the address of next node.

The last node of the list stored null value as the address.

It is possible for a list to have no nodes at all, such a list is called empty list.

# Time Complexity

Worst case Average Case

Search O(n) O(n)

Insert O(1) O(1)

Deletion O(1) O(1)

# Space Complexity: O(n)

# Linked List Applications

Dynamic memory allocation
Implemented in stack and queue
In undo functionality of softwares
Hash tables, Graphs

# Doubly Linked List

We add a pointer to the previous node in a doubly-linked list. Thus, we can go in either direction: forward or backward.

Each struct node has a data item, a pointer to the previous struct node, and a pointer to the next struct node.

# Insertion on a Doubly Linked List

# -> Insertion at the beginning

1. Create a new node
   allocate memory for newNode
   assign the data to newNode.

2. Set prev and next pointers of new node
   point next of newNode to the first node of the doubly linked list
   point prev to null

3. Make new node as head node
   Point prev of the first node to newNode (now the previous head is the second node)
   Point head to newNode

4. Set the next pointer of new node and previous node
   assign the value of next from previous node to the next of newNode
   assign the address of newNode to the next of previous node

5. Set the prev pointer of new node and the next node
   assign the value of prev of next node to the prev of newNode
   assign the address of newNode to the prev of next node

Insertion in-between nodes
Insertion at the End

# -> Insertion in between two nodes

1. Create a new node
   allocate memory for newNode
   assign the data to newNode.

2. Set the next pointer of new node and previous node
   assign the value of next from previous node to the next of newNode
   assign the address of newNode to the next of previous node

3. Set the prev pointer of new node and the next node
   assign the value of prev of next node to the prev of newNode
   assign the address of newNode to the prev of next node

# -> Insertion at the End

1. Create a new node

2. Set prev and next pointers of new node and the previous node
   If the linked list is empty, make the newNode as the head node. Otherwise, traverse to the end of the doubly linked list and

# Circular Linked List

A circular linked list is a variation of a linked list in which the last element is linked to the first element. This forms a circular loop.

A circular linked list can be either singly linked or doubly linked.

for singly linked list, next pointer of last item points to the first item
In the doubly linked list, prev pointer of the first item points to the last item as well.

#
