# Python Data Structures - List and Tuples

## Concepts to cover
- Introduction to Python Data Structures

  - Importance of Data Structures
  - Overview of Different Data Structures in Python

- Understanding Lists

  - What are Lists?
  - Characteristics of Lists
  - Creating and Initializing Lists
  - Accessing, Modifying, and Deleting Elements
  - Common List Methods and Operations

- Understanding Tuples

  - What are Tuples?
  - Characteristics of Tuples
  - Creating and Initializing Tuples
  - Accessing and Using Tuple Elements
  - Immutability and Its Implications
  - Common Tuple Methods and Operations

## Origin and Story
Python, created by Guido van Rossum, emphasizes code readability and simplicity. Data structures like lists and tuples are fundamental to Python, allowing for efficient and effective data manipulation.

Lists provide a flexible way to store and manipulate an ordered collection of items.
Tuples offer a way to store an ordered collection of items that should not change, providing a degree of safety and predictability.

## What is it, and how to use it?

### What is it?
#### List

**What are list?**
List are ordered, mutable collections of items. They can store items of any data type and allow for dynamic resizing.

**Characteristics of List:**
- Ordered: Items have a defined order.
- Mutable: Items can be added, removed, or changed.
- Dynamic: List can grow and shrink in size.

#### Tuples

**What are Tuples?**
Tuples are ordered, immutable collection of items. They can store items of any data type but do not allow for modification after creation.

**Characteristics of Tuples**
- Ordered: Items have a defined order.
- Immutable: Once created, items cannot be changed.
- Fixed Size: Tuples cannot grow or shrink in size.

## How to use it?

### List

- Creating and initializing:
  - Syntax: ```python
    my_list = [item1, item2, item3]
    ```
  - Example:
    ```python
    fruits = ["apple", "banana", "cherry"]
    ```
- Accessing, Modifying, and Deleting Elements:
  - Access elements using indexing.
    ```python
    print(fruits[0]) # output: apple
    ```
  - Modify elements:
    ```python
    fruits[1] = "bluberry"
    ```
  - Delete elements: use `del` or `remove`:
    ```python
    del fruits[2]
    fruits.remove("apple")
    ```

- Common List method and Operations:
  - Append: `fruits.append("orange")`
  - Insert: `fruits.insert(1, "grape")`
  - Remove: `fruits.remove("banana")`
  - Pop: `fruits.pop()`
  - Length: `len(fruits)`
  - Sort: `fruits.sort()`

### Tuples

- Creating and initializing:
  - Syntax:
    ```python
    my_tuple = (item1, item2, item3)
    ```
  - Example:
    ```python
    coordinates = (10.0, 20.0)
    ```

- Accessing and Using Tuple Elements:

  - Access elements using indexing.
    ```python
    print(coordinates[0])  # Output: 10.0
    ```

- Immutability and Its Implications:

  - Tuples cannot be modified after creation, ensuring data integrity.
  - Useful for fixed collections of items.

- Common Tuple Methods and Operations:

  - Count: `coordinates.count(10.0)`
  - Index: `coordinates.index(20.0)`

## Practical Exercise
- Exercise 1: List Operations and Method
  1. Objective:
    Perform various list operations such as appending, inserting, removing, and sorting elements.
  2. Exercise:
    Find in [python-list](./python-list)
- Exercise 2: Tuple Operations and Methods
  1. Objective:
    Work with tuples to access elements and use common tuple methods.
  2. Exercise:
    Find in [python-tuples](./python-tuple)



