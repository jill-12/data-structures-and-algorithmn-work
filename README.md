# Data Structures and Algorithms — Work Collection

A professional collection of small, focused data-structures practice programs and example implementations. This repository gathers independent assignments so you can build, run, and review each program in isolation.

Table of contents
- About
- Repository layout
- Prerequisites
- Build & run
  - Stack (C)
  - Queue (C)
  - Tree Traversal (C++)
  - C++ Array Operations
- Recommended housekeeping
- Contributing


About

This repository combines several  assignments and example programs covering basic data-structure concepts (stack, queue, tree traversal, and array operations). Each exercise is self-contained and intended to be easy to compile and understand.

Repository layout

```
.
├── README.md
├── queue_assignment.c            # cleaned queue filename
├── stack-assignment/
│   ├── README.md
│   └── "Stack question.c"
├── tree-traversal/
│   ├── README.md
│   └── tree_traversal.cpp
├── cpp-array-operations/
│   ├── README.md
│   ├── examples/                 # small single-file examples
│   └── src/                      # menu-driven array operations program
└──
```

Prerequisites

- A POSIX-like shell (Linux, macOS, WSL on Windows)
- GCC for C programs: `gcc` (version >= 5 recommended)
- G++ for C++ programs: `g++` (supporting C++17)

Build & run

Follow the commands below from the repository root. Each command example compiles a single program and then runs it.

1) Stack assignment (C)

```bash
# Compile
gcc "stack-assignment/Stack question.c" -o stack

# Run
./stack
```

2) Queue assignment (C)

We provide a cleaned filename `queue_assignment.c` for convenience. To build and run:

```bash
# Compile
gcc "queue_assignment.c" -o queue

# Run
./queue
```

3) Tree traversal (C++)

This example demonstrates binary tree traversal in preorder, inorder, postorder, and level order.

```bash
# Compile
g++ -std=c++17 "tree-traversal/tree_traversal.cpp" -o tree_traversal

# Run
./tree_traversal
```

4) C++ array operations

This subproject contains both individual single-file examples and a menu-driven program located at `cpp-array-operations/src/array_operations.cpp`.

To build and run the menu program:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic "cpp-array-operations/src/array_operations.cpp" -o array_ops
./array_ops
```

To compile and run any single example (for example `insert.cpp`):

```bash
g++ -std=c++17 "cpp-array-operations/examples/insert.cpp" -o insert
./insert
```

Contributing

Contributions are welcome. For small exercises, open a pull request with a clear description of the change and a short testing note (how you built / ran the program).
