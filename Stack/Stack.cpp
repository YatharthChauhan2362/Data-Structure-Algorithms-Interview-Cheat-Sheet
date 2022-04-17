// Author: Yatharth Chauhan

// A stack is a linear data structure that follows the principle of Last In First Out(LIFO).
// This means the last element inserted inside the stack is removed first.
// In programming terms, putting an item on top of the stack is called push and removing an item is called pop.

// Basic Operations of Stack

// Push: Add an element to the top of a stack
// Pop: Remove an element from the top of a stack
// IsEmpty: Check if the stack is empty
// IsFull: Check if the stack is full
// Peek: Get the value of the top element without removing it.

// Algorithm: Stack

// -> Initialization of stack.
// 1) TOP: = 0;
// 2) Exit

// -> Push operation is used to insert an element into stack.
// 1) IF TOP = MAX   then
//    Print “Stack is full”;
//    Exit;
// 2) Otherwise
//    TOP: = TOP + 1;        /*increment TOP*/
//    STACK(TOP) : = ITEM;
// 3) End of IF
// 4) Exit

// -> Pop operation is used to remove an item from stack, first get the element and then decrease TOP pointer.
// 1) IF TOP = 0 then
//     Print “Stack is empty”;
// Exit;
// 2) Otherwise
//     ITEM: =STACK (TOP);
// TOP : = TOP – 1;
// 3) End of IF
// 4) Exit

// -> IS_FULL(STACK,TOP,MAX,STATUS)
// 1) IF TOP = MAX then
//         STATUS:=true;
// 2) Otherwise
//         STATUS:=false;
// 3) End of IF
// 4) Exit

// -> IS_EMPTY(STACK,TOP,MAX,STATUS)
// 1) IF TOP = 0 then
//         STATUS:=true;
// 2) Otherwise
//         STATUS:=false;
// 3)  End of IF
// 4)  Exit

// Stack implementation in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

// Creating a stack
struct stack
{
    int items[MAX];
    int top;
};
typedef struct stack st;

void createEmptyStack(st *s)
{
    s->top = -1;
}

// Check if the stack is full
int isfull(st *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Check if the stack is empty
int isempty(st *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Add elements into stack
void push(st *s, int newitem)
{
    if (isfull(s))
    {
        cout << "STACK FULL";
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
    size++;
}

// Remove element from stack
void pop(st *s)
{
    if (isempty(s))
    {
        cout << "\n STACK EMPTY \n";
    }
    else
    {
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

// Print elements of stack
void printStack(st *s)
{
    printf("Stack: ");
    for (int i = 0; i < size; i++)
    {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Driver code
int main()
{
    int ch;
    st *s = (st *)malloc(sizeof(st));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n";
    printStack(s);
}