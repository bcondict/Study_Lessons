import json
import random

dictionary = {
    "id": random.randint(1, 100),
    "name": "John",
    "age": 30,
    "city": "New York"
}

def create_database():
    with open("database.json", "w") as file:
        json.dump(dictionary, file, indent=4)

def read_database():
    with open("database.json", "r") as file:
        data = json.load(file)
    print(data)


if __name__ == "__main__":
    print("creation of database")
    create_database()

    print("reading of database")
    read_database()

