# Data Structures and Algorithms Work

A combined collection of small data-structures practice programs and example code. This repository gathers multiple assignments and examples into one place so you can explore, compile, and run each program independently.

Contents
- stack-assignment/: simple C stack implementation and README
- cpp-array-operations/: C++ array operation examples and a menu-driven program
- queue_assignment.c: simple C queue implementation (menu-driven)

Repository layout

```
.
├── README.md                   # this file
├── queue_assignment.c          # queue assignment (renamed)
├── queue assignment.c          # original filename (left in place)
├── stack-assignment/
│   ├── README.md
│   └── Stack question.c
└── cpp-array-operations/
    ├── README.md
    ├── examples/
    │   ├── delete.cpp
    │   ├── display.cpp
    │   ├── insert.cpp
    │   ├── reverse.cpp
    │   ├── search.cpp
    │   ├── sort.cpp
    │   ├── statistics.cpp
    │   ├── traverse.cpp
    │   └── update.cpp
    └── src/
        └── array_operations.cpp
```

How to build and run

- Stack assignment (C)

  ```bash
  gcc "stack-assignment/Stack question.c" -o stack
  ./stack
  ```

- Queue assignment (C)

  ```bash
  gcc "queue_assignment.c" -o queue
  ./queue
  ```

  Note: The original file named `queue assignment.c` is still present in the repo. I created `queue_assignment.c` as a cleaned-up filename. If you want me to remove the original file, I can do that in a follow-up commit.

- C++ array operations

  Compile the menu program:
  ```bash
  g++ -std=c++17 -Wall -Wextra -pedantic "cpp-array-operations/src/array_operations.cpp" -o array_ops
  ./array_ops
  ```

  Or compile any individual example in `cpp-array-operations/examples/` with a similar g++ command.

Notes
- This repo was created by combining your `Stack-Assignment` and `cpp-array-operations` repositories and adding a queue assignment file.
- If you'd like, I can:
  - remove the old `queue assignment.c` file so only the cleaned filename remains
  - improve the per-subproject READMEs
  - add a LICENSE or CONTRIBUTING file
