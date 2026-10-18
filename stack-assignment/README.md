# Stack Assignment

This repository contains a simple C program demonstrating the basic operations of a stack using an array.

## Topic
Data Structures and Algorithms (DSA) - Stack

## What the program does
The program shows how to:
- push elements onto the stack
- pop elements from the stack
- display the current contents of the stack
- traverse the stack from top to bottom

## File
- `Stack question.c`

## Stack operations implemented
- `push(int value)`
- `pop()`
- `display()`

## Example behavior
The program fills the stack with values `1, 2, 3, 4, 5, 6`, displays them, then removes each value one by one until the stack is empty.

## How to run
```bash
gcc "Stack question.c" -o stack
./stack
```

## Notes
This is a fixed-size stack implemented using an array, with `MAX = 6`.
