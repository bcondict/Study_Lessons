# Pagination in Python

## Concepts to Cover

- What is Pagination?
- Why is Pagination important?
- Common use cases for Pagination
- How to implement Pagination in Python
- Pagination in APIs and databases
- Using math for manual Pagination
- Implementing Pagination with Flask
- Implementing Pagination with Django

## Origin and Story

Pagination has been a key concept in computer science and web development since early databases and search engines. It was introduced to manage large datasets efficiently without overwhelming memory or processing power.

For example, Google Search, Amazon product listings, and Twitter feeds all use pagination to break content into manageable pages, reducing load times and improving user experience.

## What is Pagination and How to Use It?

### What is Pagination?

✅ Pagination is the process of dividing a dataset into smaller chunks (pages) instead of loading everything at once.

✅ This is especially useful for databases, APIs, and web applications to improve performance and user experience.

Example:
If a database has 1,000,000 records, it is inefficient to load all at once. Instead, we can fetch only 10, 20, or 50 records per page.

### How to use it?

#### Manual Pagination in Python

We can implement pagination using Python’s built-in slicing:

```python
def paginate_list(data, page, page_size):
    start = (page - 1) * page_size
    end = start + page_size
    return data[start:end]

# Example usage
data = list(range(1, 101))  # Simulating 100 items
page = 2
page_size = 10

print(paginate_list(data, page, page_size))
```

🔹 Output (Page 2, 10 items per page):

```python
[11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
```

#### Pagination with Flask (REST API Example)

Flask makes pagination easy when dealing with API responses.

```python
from flask import Flask, request, jsonify

app = Flask(__name__)

data = list(range(1, 101))  # Simulating 100 records

@app.route('/items')
def get_items():
    page = int(request.args.get("page", 1))
    page_size = int(request.args.get("page_size", 10))

    start = (page - 1) * page_size
    end = start + page_size

    return jsonify({
        "page": page,
        "page_size": page_size,
        "total_items": len(data),
        "items": data[start:end]
    })

if __name__ == "__main__":
    app.run(debug=True)
```

🔹 API Call Example:

```bash
http://127.0.0.1:5000/items?page=2&page_size=5
```

🔹 Response:

```json
{
  "page": 2,
  "page_size": 5,
  "total_items": 100,
  "items": [6, 7, 8, 9, 10]
}
```
