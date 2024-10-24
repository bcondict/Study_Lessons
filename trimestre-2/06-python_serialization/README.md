# Python serialization

## Concepts to Cover

- Introduction to Serialization

  - What is Serialization?
  - Why Serialization is Important

- Python Serialization Libraries

  - `json`
  - Other Serialization Formats

- Using `json` for Serialization

  - JSON Encoding and Decoding

- Practical Examples and Exercises

  - Serializing and Deserializing Objects with `json`

## Origin and Story

- Serialization:

  Serialization has been used for decades to convert data structures or objects into a format that can be stored or transmitted and reconstructed later.
  Why Serialization is Important:

  Serialization allows for the storage and transmission of complex data structures in a compact, efficient manner. It is essential for tasks like saving program state, transmitting data over a network, and persisting objects.

- JSON:
  JavaScript Object Notation (JSON):

  - JSON is a lightweight data-interchange format that is easy for humans to read and write and easy for machines to parse and generate.
  - JSON is a text format that is language-independent but uses conventions familiar to programmers of the C-family of languages.

  JSON is widely used for data exchange in web applications and APIs due to its simplicity and compatibility with most programming languages

## What is it, and How to Use it?

- What is Serialization?

  Serialization is the process of converting a data structure or object into a format that can be easily stored or transmitted and reconstructed later.

- Why Serialization is Important:

  Serialization is crucial for saving the state of an object to a file, transmitting data over a network, and sharing data between different components or applications.

### Python Serialization Libraries

- `json` Library:

  - The `json`` module provides a way to encode and decode data in JSON (JavaScript Object Notation) format, a lightweight data-interchange format.
  - Use Cases: Web APIs, configuration files, data interchange.

- Other Serialization Formats:

`pickle`: serializes Python objects into a byte stream and deserializes byte streams back into Python objects.
`YAML`: Human-readable data serialization format.
`MessagePack`: Efficient binary serialization format.

## What is it and how to use it?

### JSON Encoding and Decoding:

- Encoding

  - `json.dumps()`: Converts a python object into a JSON string. This method is useful when you need to serialize data to a JSON string for transmission or storage in environments that require string format.

    ```python
    import json

    data = {"name": "Alice", "age": 25}
    json_string = json.dumps(data)
    print(json_string)
    ```

  - `json.dump()`: Writes a python object as a JSON string to a file. This method is usefull for saving JSON data to a file for saving JSON data to a file for persistence.

    ```python
    import json

    data = {"name": "Alice", "age": 25}
    with open("data.json", "w") as file:
        json.dump(data, file)
    ```

- Decoding

  - `json.loads()`: Parses a JSON string and converts it into a Python object. This method is useful when you need to parse JSON data received from a web service or stored as a string.
    ```python
    json_string = '{"name": "Alice", "age": 25}'
    data = json.loads(json_string)
    print(data)
    ```
  - `json.load()`: Reads a JSON formatted string from a file and converts it into a python object. This method is useful for reading JSON data from a file for further processing.

    ```python
    import json

    with open("data.json", "r") as file:
        data = json.load(file)
    print(data)
    ```

## Extra

- Best Practices for JSON Serialization:

  - Indentation and Formatting:

    Use the indent parameter in json.dump() to make the output JSON more readable.

    ```python
    json.dump(data, file, indent=4)
    ```

  - Handling Complex Data Types:

    JSON supports basic data types such as strings, numbers, lists, and dictionaries. For more complex data types, consider converting them to a supported format before serialization.

    ```python
    from datetime import datetime
    data = {"name": "Alice", "timestamp": datetime.now().isoformat()}
    json_string = json.dumps(data)
    ```

## Practical Exercises

### Exercise 1:

1. Objective
   Serilize a python dictionary to a JSON string and save it into a json file, and deserialize it back into a dictionary and print it.
2. Exercise:
   found on [serialization.py](./serialization.py)
