# import json
#
# data = {"name": "Alice", "age": 25}
# print(data)
# json_string = json.dumps(data)
# print(json_string)

import json
#
# data = [{"name": "Alice", "age": 25}, {"name": "Alice", "age": 25}, {"name": "Alice", "age": 25}, {"name": "Alice", "age": 25}]
# with open("data.json", "w") as file:
#     json.dump(data, file, indent=4)


from datetime import datetime
data = {"name": "Alice", "timestamp": datetime.now().isoformat()}
json_string = json.dumps(data)
print(f"json_string {json_string}")

