# Recursion

Recursion is a programming technique where a function calls itself directly or indirectly in order to solve a problem.

## Key Components:

- Base Case: The condition under which the recursion ends.
- Recursive Case: The condition under which the function calls itself to continue the recursion.

## Origin

Recursion has been a fundamental concept in mathematics, utilized for functions and problem solving, well-documented in the works of mathematicians like Gödel and Turing.

## Functional Programming:

In languages like Haskell and Scala, recursion replaces loops for repeating computations, aligning with the immutability and statelessness of functional paradigms.

- Example to mention:
  The factorial function in Haskell, showcasing how functional languages naturally express recursive operations.

## When and Why to Use Recursion:

### Ideal Use Cases:

Problems that can be divided into smaller subproblems of the same type, such as sorting algorithms (merge sort, quick sort), searching algorithms (binary search), and computational problems (Fibonacci numbers).

### Implementation Strategy:

Identify the base case: The simplest, smallest scenario which can be solved directly.
Define the recursive case: How to reduce the problem in each step towards eventually reaching the base case.
