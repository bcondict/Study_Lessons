# Python RESTful API

## Concepts to cover

- Introduction to RESTful APIs
  - What is RESTful API?
  - Importance of RESTful APIs
- Principles of REST
  - Statelessness
  - Uniform Interface
  - Cacheability
  - Layered System
  - Code on Demand (optional)
- HTTP Methods and Status Codes
  - GET, POST, PUT, DELETE, PATCH
  - Common HTTP Status Codes
- Building a RESTful API with Flask
  - setting up Flask
  - Creating Endpoints
  - Handling Requests and Responses
  - Data Serialization with JSON
- Best Practices
  - API Documentation
  - Authentication and AUthorization
  - Versioning
- Practical Examples and Exercises
  - Creating a Simple RESTfulAPI
  - Implementing CRUD Operations

## Origin and Story

Representational State Transfer (REST) was introduced by Roy Fielding in his doctoral dissertation in 2000. It has since become a dominant architectural style for designing networked applications.

RESTful APIs provide a standardized way for web applications to communicate over HTTP. They enable interoperability between different systems and platforms, making it easier to build scalable and maintainable applications.

## What is it and how to use it?

### What is it?

#### RESTful API

A RESTful API is an application programming interface (API) that adheres to the principles of REST. It allows clients to interact with a server by using standard HTTP methods and exchanging data in a stateless manner.

RESTful APIs enable the integration of different systems and applications, promoting scalability, flexibility, and ease of maintenance. They are widely used in web development, mobile app development, and microservices architectures.

#### Principles of REST

- Statelessness:

  Each request from a client to a server must contain all the information needed to understand and process the request. The server does not store any state between requests.

- Client-Server Architecture:

  The client and server are independent of each other, allowing them to evolve separately. The client handles the user interface and user experience, while the server manages data storage and business logic.

- Uniform Interface:

  A consistent and standardized way of interacting with the API, typically using HTTP methods (GET, POST, PUT, DELETE) and URIs.

- Cacheability:

  Responses from the server should be explicitly marked as cacheable or non-cacheable, to improve performance by reducing the need for repeated requests.

- Layered System:

  The API architecture can be composed of multiple layers, each with a specific responsibility, such as security, load balancing, or data transformation.

- Code on Demand (optional):

  Servers can temporarily extend or customize the functionality of a client by transferring executable code.

#### HTTP Methods and Status Codes

- HTTP Methods

  - **GET**: Retrieve data from the server.
  - **POST**: Create new resources on the server.
  - **PUT**: Update existing resources on the server.
  - **DELETE**: Delete resources from the server.
  - **PATCH**: Partially update resources on the server.

- Common HTTP Status Codes:
  - **200 OK**: The request was successful.
  - **201 Created**: The resource was successfully created.
  - **400 Bad Request**: The request was malformed or invalid.
  - **401 Unauthorized**: Authentication is required.
  - **403 Forbidden**: The server understood the request but refuses to authorize it.
  - **404 Not found**: The requested resource was not found.
  - **500 Internal Server Error**: An error occurred on the server.

### How to use it? (with flask)

how to build a RESTful API with flask

- Install Flask using pip:
  ```python
  pip install Flask
  ```
- Creating Endpoints:
  Define routes and methods to handle API requests.

  ```python
  from flask import Flask, jsonify, request

  app = Flask(__name__)

  @app.route("/api/resource", methods=["GET"])
  def get_resource():
    return jsonify({"message": "Get request received"})

  if __name__ == "__main__":
    app.run(debug=True)
  ```

- Process incoming data and send appropriate responses.
  ```python
  @app.route("/api/resource", methods=["POST"])
  def create_resource():
    data = request.get_json()
    return jsonify({"message": "POST request received", "data": data}), 201
  ```
- Use Flask's build-in JSON support to serialize and deserialize data.

  ```python
  from flask import jsonify

  @app.route('/api/resource/<int:id>', methods=['GET'])
  def get_resource_by_id(id):
      return jsonify({"id": id, "name": "Resource Name"})
  ```

### Extras

#### Best Practices

- API Documentation:
  Provide clear and comprehensive documentation for you API, including endpoints, request/response formats, and examples. Tools like Swagger can automate this process.
- Authentication and Authorization:
  Implement security measures to protect your API, such as token-based authentication (e.g., JSON) and role-based access control.
- Versioning:
  Version you API to ensure backward compatibility and smooth transitions when making changes or adding new features.

## Practical Examples and Exercises

### Exercise 1

1. Objective:
   Create a basic RESTful API with Flask that handles GET and POST request.
2. Exercise:
   Found on [restAPI.py]("./restAPI.py")

### Exercise 2

1. Objective
   Extend the previous example to include endpoints for updating and deleting resources.
2. Exercise:
   Found on [restAPI.py]("./restAPI.py")
