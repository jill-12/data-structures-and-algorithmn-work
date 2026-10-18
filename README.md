# Data Structures and Algorithmn Work

This repository combines multiple DSA practice assignments and example programs into one project.

## Included topics

- Stack assignment in `stack-assignment/`
- C++ array operations in `cpp-array-operations/`
- Queue assignment in `queue assignment.c`

## Repository structure

```text
.
├── README.md
├── queue assignment.c
├── stack-assignment/
│   ├── README.md
│   └── Stack question.c
├── cpp-array-operations/
│   ├── README.md
│   ├── examples/
│   │   ├── delete.cpp
│   │   ├── display.cpp
│   │   ├── insert.cpp
│   │   ├── reverse.cpp
│   │   ├── search.cpp
│   │   ├── sort.cpp
│   │   ├── statistics.cpp
│   │   ├── traverse.cpp
│   │   └── update.cpp
│   └── src/
│       └── array_operations.cpp
└──
```

## How to run

### Stack assignment

```bash
gcc "stack-assignment/Stack question.c" -o stack
./stack
```

### C++ array operations

```bash
g++ -std=c++17 -Wall -Wextra -pedantic "cpp-array-operations/src/array_operations.cpp" -o array_ops
./array_ops
```

### Queue assignment

```bash
gcc "queue assignment.c" -o queue
./queue
```

This repository was created as a combined collection of the original assignments and examples for learning data structures and algorithms.
