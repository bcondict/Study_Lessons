# Python ORM

## Concepts to Cover

- Introduction to ORM

  - What is ORM?
  - Importance and benefits of ORM

- Popular ORM Libraries in Python

  - SQLAlchemy
  - Django ORM
  - Peewee

- Basic ORM Concepts

  - Models
  - Fields
  - Relationships

- Setting Up and Using SQLAlchemy

  - Installation and setup
  - Defining models
  - CRUD operations
  - Querying data

- Best Practices

  - Database migrations
  - Managing sessions and transactions

- Practical Examples and Exercises

  - Creating and querying a database with SQLAlchemy

## Origin and Story

Object-Relational Mapping (ORM) is a programming technique for converting data between incompatible type systems in object-oriented programming languages. The term was first coined in the 1990s as a solution to the impedance mismatch problem between relational databases and object-oriented languages.

ORMs simplify database interactions by allowing developers to work with objects rather than raw SQL queries. This abstraction layer improves code maintainability and reduces the likelihood of SQL injection attacks.

## What is it, and How to Use it?

### What is it?

- **What is ORM?**

  ORM stands for Object-Relational Mapping. It is a technique that allows you to interact with a relational database using an object-oriented paradigm. An ORM library maps database tables to classes, rows to objects, and columns to object attributes.

- Importance and Benefits of ORM:

  - Abstraction: ORMs provide a high-level abstraction over raw SQL queries, making database operations more intuitive.
  - Productivity: Developers can work with Python objects instead of writing complex SQL queries, speeding up the development process.
  - Security: ORMs help prevent SQL injection attacks by using parameterized queries.
  - Maintainability: The codebase is easier to maintain and refactor, as changes to the database schema are reflected in the model classes.

#### Popular ORM Libraries in Python

- SQLAlchemy:

  SQLAlchemy is a powerful and flexible ORM library for Python. It provides both high-level ORM and low-level database interaction capabilities.

- Django ORM:

  The Django ORM is a core feature of the Django web framework. It is a high-level ORM that integrates seamlessly with Django's other components.

- Peewee:

  Peewee is a lightweight ORM that provides a simple and expressive way to interact with databases.

#### Basic ORM Concepts

- Models:

  Models are Python classes that represent database tables. Each model class corresponds to a table, and each attribute corresponds to a column.

- Fields:

  Fields are the attributes of the model class. They represent the columns of the table and define the data type and constraints for each column.

- Relationships:

  Relationships define how tables are related to each other. Common relationships include one-to-many, many-to-many, and one-to-one.

### how to use it

#### Setting Up and Using SQLAlchemy

- Installation and Setup:

  Install SQLAlchemy using pip:

  ```sh
  pip install sqlalchemy
  ```

- Defining Models:

Define a model class that represents a table in the database.

```python
from sqlalchemy import create_engine, Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

Base = declarative_base()

class User(Base):
    __tablename__ = 'users'
    id = Column(Integer, primary_key=True)
    name = Column(String)
    email = Column(String)

engine = create_engine('sqlite:///example.db')
Base.metadata.create_all(engine)
```

- CRUD Operations:

  Perform Create, Read, Update, and Delete operations using SQLAlchemy's ORM capabilities.

  ```python
  Session = sessionmaker(bind=engine)
  session = Session()
  # Create
  new_user = User(name='Alice', email='alice@example.com')
  session.add(new_user)
  session.commit()

  # Read
  user = session.query(User).filter_by(name='Alice').first()
  print(user.email)

  # Update
  user.email = 'alice@newdomain.com'
  session.commit()

  # Delete
  session.delete(user)
  session.commit()
  ```

- Querying Data:

  Use SQLAlchemy's query API to retrieve data from the database.

  ```python
  users = session.query(User).all()
  for user in users:
      print(user.name, user.email)
  ```

## Practical Examples and Exercises

### Exercise 1: Creating and Querying a Database with SQLAlchemy

Objective:
Create a database with SQLAlchemy, define models, and perform basic CRUD operations.

Exercise:
found on [python_orm.py](./python_orm)
