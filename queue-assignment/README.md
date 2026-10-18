# Queue Assignment

This folder contains a simple C program demonstrating basic queue operations using a fixed-size array.

Topic
- Data Structures and Algorithms (DSA) — Queue (linear array-based implementation)

File
- `queue_assignment.c` (located at the repository root)

What the program demonstrates
- Enqueue (insert)
- Dequeue (remove)
- Display (show current elements in the queue)
- Basic boundary checks (full / empty)

Build & run

From the repository root, compile and run using GCC:

```bash
gcc "queue_assignment.c" -o queue
./queue
```

Notes
- The implementation uses a fixed-size array with MAX = 5. This is intended as a simple instructional example rather than a production-ready queue.
- If you prefer the queue source to be colocated in this folder, I can move `queue_assignment.c` into `queue-assignment/` and update the README accordingly.
