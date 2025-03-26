import asyncio

async def say_hello():
    print("Hello")
    await asyncio.sleep(2)  # Simulating async task
    print("World")

asyncio.run(say_hello())  # Runs the coroutine
