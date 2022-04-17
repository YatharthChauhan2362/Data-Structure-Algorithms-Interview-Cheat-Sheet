// Author: Yatharth Chauhan

// Queue follows the First In First Out(FIFO) rule - the item that goes in first is the item that comes out first.

// In programming terms, putting items in the queue is called enqueue, and removing items from the queue is called dequeue.

// Basic Operations of Queue

// Enqueue: Add an element to the end of the queue
// Dequeue: Remove an element from the front of the queue
// IsEmpty: Check if the queue is empty
// IsFull: Check if the queue is full
// Peek: Get the value of the front of the queue without removing it

// Working of Queue
// 1. two pointers FRONT and REAR
// 2. FRONT track the first element of the queue
// 3. REAR track the last element of the queue
// 4. initially, set value of FRONT and REAR to -1

// Enqueue Operation
// 1. check if the queue is full
// 2. for the first element, set the value of FRONT to 0
// 3. increase the REAR index by 1
// 4. add the new element in the position pointed to by REAR

// Dequeue Operation
// 1. check if the queue is empty
// 2. return the value pointed by FRONT
// 3. increase the FRONT index by 1
// 4. for the last element, reset the values of FRONT and REAR to -1

// Algorithm

// INIT
// 1. FRONT : = 1;
// 2. REAR : = 0;
// 3. Return;

// INSERT-ITEM
// 1. If(REAR = MAX) then
//        a.Display “Queue overflow”;
//        b.Return;
// 2. Otherwise
//        a.REAR : = REAR + 1;
//        b.QUEUE(REAR) : = ITEM;
// 3. Return;

// REMOVE - ITEM
// 1. If(FRONT = REAR + 1) then
//        a.Display “Queue underflow”;
//        b.Return;
// 2. Otherwise
//        a.ITEM : = QUEUE(FRONT);
//        b.FRONT : = FRONT + 1;
// 3. Return;

// EMPTY - CHECK
// 1. If(FRONT = REAR + 1) then
//        a.EMPTY : = true;
// 2. Otherwise
//        a.EMPTY : = false;
// 3. Return;

// FULL - CHECK
// 1. If(REAR = MAX) then
//        a.FULL : = true;
// 2. Otherwise
//        a.FULL : = false;
// 3. Return;

// Queue implementation in C++

#include <iostream>
#define SIZE 5

using namespace std;

class Queue
{
private:
    int items[SIZE], front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element)
    {
        if (isFull())
        {
            cout << "Queue is full";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
            cout << endl
                 << "Inserted " << element << endl;
        }
    }

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }
        else
        {
            element = items[front];
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            } /* Q has only one element, so we reset the queue after deleting it. */
            else
            {
                front++;
            }
            cout << endl
                 << "Deleted -> " << element << endl;
            return (element);
        }
    }

    void display()
    {
        /* Function to display elements of Queue */
        int i;
        if (isEmpty())
        {
            cout << endl
                 << "Empty Queue" << endl;
        }
        else
        {
            cout << endl
                 << "Front index-> " << front;
            cout << endl
                 << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl
                 << "Rear index-> " << rear << endl;
        }
    }
};

int main()
{
    Queue q;

    // deQueue is not possible on empty queue
    q.deQueue();

    // enQueue 5 elements
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // 6th element can't be added to because the queue is full
    q.enQueue(6);

    q.display();

    // deQueue removes element entered first i.e. 1
    q.deQueue();

    // Now we have just 4 elements
    q.display();

    return 0;
}