# Python Async Programming

## Concepts to Cover

- What is asynchronous programming?
- How Python handles async programming (single-threaded, event loop)
- `async` and `await` keywords
- Using `asyncio` for async tasks
- Creating and running coroutines
- Handling multiple tasks with `asyncio.gather()`
- Using `asyncio.sleep()` for simulating async behavior
- Async exception handling

## Origin and Story

Traditional Python programs run synchronously, meaning each task executes sequentially. This can be slow, especially for tasks like network requests or database queries.

To overcome this, asynchronous programming allows Python to perform multiple operations at once without blocking execution. Python 3.5 introduced `async` and `await`, and Python 3.7 improved `asyncio` support, making async programming easier and more efficient.

## What is Async Programming and How to Use It?

### Why Use Async?

✅ Efficient for I/O-bound tasks (e.g., web scraping, API calls)

✅ Reduces waiting time for network requests and database operations

✅ Runs multiple tasks concurrently using an event loop

### Key Async Concepts

- **Coroutines**: Functions prefixed with async that can run asynchronously
- **`await` keyword**: Used inside async functions to wait for coroutines to complete
- **`asyncio` module**: Provides tools for handling async execution

### Basic Async Syntax

- Define an async function:

  ```python
  import asyncio

  async def say_hello():
      print("Hello")
      await asyncio.sleep(2)  # Simulating async task
      print("World")

  asyncio.run(say_hello())  # Runs the coroutine
  ```

### Creating and Running Multiple Async Tasks

- We can run multiple async functions concurrently using `asyncio.gather()`:

  ```python
  import asyncio

  async def task1():
      await asyncio.sleep(2)
      print("Task 1 completed")

  async def task2():
      await asyncio.sleep(1)
      print("Task 2 completed")

  async def main():
      await asyncio.gather(task1(), task2())

  asyncio.run(main())
  ```

  Output:

  ```bash
  Task 2 completed
  Task 1 completed
  ```

  (Task 2 finishes first because it sleeps for 1 second while Task 1 sleeps for 2.)

### Async Exception Handling

- Handle exceptions in an async function like a normal try-except block:

  ```python
  import asyncio

  async def risky_task():
      try:
          await asyncio.sleep(1)
          raise ValueError("Something went wrong!")
      except ValueError as e:
          print(f"Caught an error: {e}")

  asyncio.run(risky_task())
  ```

## Exercises

### Task 1:

Create an async function `send_email()` that takes 3 seconds to execute and prints "Email Sent!".

### Task 2:

Write a coroutine that fetches multiple URLs concurrently using `asyncio.gather()`.

### Task 3:

Handle an exception in an async function that simulates a failed API request.
