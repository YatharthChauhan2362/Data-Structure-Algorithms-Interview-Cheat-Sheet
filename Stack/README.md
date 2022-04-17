# Stack

# (Author: Yatharth Chauhan)

A stack is a linear data structure that follows the principle of Last In First Out(LIFO).
This means the last element inserted inside the stack is removed first.
In programming terms, putting an item on top of the stack is called push and removing an item is called pop.

# Basic Operations of Stack

Push: Add an element to the top of a stack
Pop: Remove an element from the top of a stack
IsEmpty: Check if the stack is empty
IsFull: Check if the stack is full
Peek: Get the value of the top element without removing it.

# Algorithm: Stack

-> Initialization of stack.

1. TOP: = 0;
2. Exit

-> Push operation is used to insert an element into stack.

1. IF TOP = MAX then
   Print “Stack is full”;
   Exit;
2. Otherwise
   TOP: = TOP + 1; /_increment TOP_/
   STACK(TOP) : = ITEM;
3. End of IF
4. Exit

-> Pop operation is used to remove an item from stack, first get the element and then decrease TOP pointer.

1. IF TOP = 0 then
   Print “Stack is empty”;
   Exit;
2. Otherwise
   ITEM: =STACK (TOP);
   TOP : = TOP – 1;
3. End of IF
4. Exit

-> IS_FULL(STACK,TOP,MAX,STATUS)

1. IF TOP = MAX then
   STATUS:=true;
2. Otherwise
   STATUS:=false;
3. End of IF
4. Exit

-> IS_EMPTY(STACK,TOP,MAX,STATUS)

1. IF TOP = 0 then
   STATUS:=true;
2. Otherwise
   STATUS:=false;
3. End of IF
4. Exit
