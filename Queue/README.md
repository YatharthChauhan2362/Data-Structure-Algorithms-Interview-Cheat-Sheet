# Author: Yatharth Chauhan

# Algorithm For Queue

-> Queue follows the First In First Out(FIFO) rule - the item that goes in first is the item that comes out first.

-> In programming terms, putting items in the queue is called enqueue, and removing items from the queue is called dequeue.

# -> Basic Operations of Queue

Enqueue: Add an element to the end of the queue

Dequeue: Remove an element from the front of the queue

IsEmpty: Check if the queue is empty

IsFull: Check if the queue is full

Peek: Get the value of the front of the queue without removing it

# -> Working of Queue

1. two pointers FRONT and REAR
2. FRONT track the first element of the queue
3. REAR track the last element of the queue
4. initially, set value of FRONT and REAR to -1

# Simple Queue

# -> Enqueue Operation

1. check if the queue is full
2. for the first element, set the value of FRONT to 0
3. increase the REAR index by 1
4. add the new element in the position pointed to by REAR

# -> Dequeue Operation

1. check if the queue is empty
2. return the value pointed by FRONT
3. increase the FRONT index by 1
4. for the last element, reset the values of FRONT and REAR to -1

# Algorithm

# -> INIT

1. FRONT : = 1;
2. REAR : = 0;
3. Return;

# -> INSERT-ITEM

1. If(REAR = MAX) then

   a.Display “Queue overflow”;

   b.Return;

2. Otherwise

   a.REAR : = REAR + 1;

   b.QUEUE(REAR) : = ITEM;

3. Return;

# -> REMOVE - ITEM

1. If(FRONT = REAR + 1) then

   a.Display “Queue underflow”;

   b.Return;

2. Otherwise

   a.ITEM : = QUEUE(FRONT);

   b.FRONT : = FRONT + 1;

3. Return;

# -> EMPTY - CHECK

1. If(FRONT = REAR + 1) then

   a.EMPTY : = true;

2. Otherwise

   a.EMPTY : = false;

3. Return;

# -> FULL - CHECK

1. If(REAR = MAX) then

   a.FULL : = true;

2. Otherwise

   a.FULL : = false;

3. Return;

# Circular Queue

INIT

1. FRONT := 1;
2. REAR := 0;
3. COUNT := 0;
4. Return;

# INSERT-ITEM

1. If ( COUNT = MAX ) then

   a. Display “Queue overflow”;

   b. Return;

2. Otherwise

   a. If ( REAR = MAX ) then

   REAR := 1;

   b. Otherwise

   REAR := REAR + 1;

   c. QUEUE(REAR) := ITEM;

   d. COUNT := COUNT + 1;

3. Return;

# REMOVE-ITEM

1. If ( COUNT = 0 ) then

   a. Display “Queue underflow”;

   b. Return;

2. Otherwise

   a. ITEM := QUEUE(FRONT)l

   b. If ( FRONT =MAX ) then

   FRONT := 1;

   c. Otherwise

   FRONT := FRONT + 1;

   d. COUNT := COUNT + 1;

3. Return;

# EMPTY-CHECK

1. If( COUNT = 0 ) then

   a. EMPTY := true;

2. Otherwise

   a. EMPTY := false;

3. Return ;

# FULL-CHECK)

1. If ( COUNT = MAX ) then

   a. FULL := true;

2. Otherwise

   a. FULL := false;

3. Return ;

# Double Endend Queue

# INSERT-AT-FRONT

1.  If ( COUNT = MAX ) then

    a. Print “DeQueue Overflow”;

    b. Return;

2.  Otherwise

    a. If( FRONT = 1 ) then

    FRONT := MAX;

    b. Otherwise

    FRONT := FRONT – 1;

    c. DEQUEUE(FRONT) := ITEM;

    d. COUNT : = COUNT + 1;

3.  Return;

# # DELETE-FROM-REAR

1.  If(COUNT = 0 ) then

    a. Print “DeQueue underflow”;

    b. Return;

2.  Otherwise

    a. ITEM := DEQUEUE(REAR);

    b. If ( REAR = 1) then

    REAR := MAX;

    c. Otherwise

    REAR := REAR -1;

    d. COUNT := COUNT – 1;

3.  Return;
