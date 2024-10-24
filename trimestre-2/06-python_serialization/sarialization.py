import json


python_dictionary = {"name": "Mafe", "age": 50}

def serialize():
    json_string_py_dict = json.dumps(python_dictionary)

    with open("destination.json", "w") as file:
        json.dump(python_dictionary, file)
        # file.write(json_string_py_dict)
    print(f"serialized: {json_string_py_dict}")
    py_dict_deserialized = json.loads(json_string_py_dict)
    print(f"deserialized: {json_string_py_dict}")


if __name__ == "__main__":
    serialize()
