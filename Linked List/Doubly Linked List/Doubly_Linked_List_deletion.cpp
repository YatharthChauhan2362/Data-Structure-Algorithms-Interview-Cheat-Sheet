// Author: Yatharth Chauhan

// 1. Delete the First Node of Doubly Linked List
if (*head == del_node)
    *head = del_node->next;

if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;

free(del);

// 2. Deletion of the Inner Node
if (del_node->next != NULL)
    del_node->next->prev = del_node->prev;

if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;

// 3. Delete the Last Node of Doubly Linked List
if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;