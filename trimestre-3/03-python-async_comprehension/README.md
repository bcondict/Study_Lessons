# Python Async Comprehensions

## Concepts to Cover

- What are async comprehensions?
- How to use async comprehensions with `async for`
- Using async comprehensions with `asyncio`
- Performance benefits of async comprehensions

## Origin and Story

Async comprehensions were introduced in **Python 3.6 (PEP 530)** to improve efficiency when handling asynchronous iterators. Traditional comprehensions work synchronously, but **async comprehensions allow iteration over async generators**.

## What is an Async Comprehension and How to Use It?

### Why Use Async Comprehensions?

✅ Allows asynchronous iteration over large datasets

✅ More memory-efficient than manually looping with `async for`

✅ Works well with async database queries and network calls

### Basic Async Comprehension Syntax

- Example using an async generator:

  ```python
  import asyncio

  async def async_generator():
      for i in range(5):
          await asyncio.sleep(1)  # Simulate async work
          yield i

  async def main():
      result = [x async for x in async_generator()]
      print(result)

  asyncio.run(main())
  ```

  Output:

  ```sh
  [0, 1, 2, 3, 4]
  ```

  Instead of manually collecting values, the list comprehension automatically awaits the async generator.

### Using Async Comprehensions with asyncio

- We can use async comprehensions to process multiple async tasks at once:

  ```python
  import asyncio

  async def async_generator():
      for i in range(3):
          await asyncio.sleep(1)
          yield i * 2

  async def main():
      doubled_numbers = [num async for num in async_generator()]
      print(doubled_numbers)

  asyncio.run(main())
  ```

  Output:

  ```sh
  [0, 2, 4]
  ```

### Using asyncio.gather() Inside Comprehensions

- We can also use `asyncio.gather()` inside an async comprehension:

  ```python
  import asyncio

  async def square(n):
      await asyncio.sleep(1)
      return n * n

  async def main():
      numbers = [square(i) for i in range(5)]
      results = await asyncio.gather(*numbers)
      print(results)

  asyncio.run(main())
  ```

  Output:

  ```sh
  [0, 1, 4, 9, 16]
  ```

## Exercises

### Task 1:

Write an async comprehension that collects all numbers greater than 2 from an async generator.

### Task 2:

Modify the async generator to yield random numbers between 1 and 10, and filter out odd numbers.

### Task 3:

Write an async function that processes and squares numbers from an async generator.
