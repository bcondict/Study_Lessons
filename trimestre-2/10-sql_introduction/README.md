# SQL Introduction

## Concepts to Cover

- Introduction to SQL

  - What is SQL?
  - Importance of SQL

- Basic SQL Concepts

  - Databases and Tables
  - Data Types
  - SQL Syntax

- Basic SQL Operations

  - Creating Tables
  - Inserting Data
  - Querying Data
  - Updating Data
  - Deleting Data

- Advanced SQL Concepts

  - Joins
  - Aggregate Functions
  - Subqueries

- Practical Examples and Exercises

  - Creating and Managing a Database
  - Writing SQL Queries

## Origin and Story

SQL (Structured Query Language) was developed in the 1970s by IBM for managing and manipulating relational databases. It has since become the standard language for interacting with relational database management systems (RDBMS).

SQL provides a standardized way to query and manipulate data stored in relational databases, which are widely used in various industries for data management and analysis.

## What is it and how to use it?

### What is it?

SQL (Structured Query Language) is a standardized language for managing and manipulating relational databases. It allows users to create, read, update, and delete data in a database.

SQL is essential for interacting with relational databases, which are used to store and manage large amounts of structured data. SQL's simplicity and power make it a fundamental tool for data analysis, reporting, and application development.

---

#### Basic SQL Concepts

- Databases and Tables:

  A database is a collection of related data organized in tables. Each table consists of rows (records) and columns (fields) that define the structure of the data.

- Data Types:

  SQL supports various data types for defining columns, such as `INTEGER`, `VARCHAR`, `DATE`, and `BOOLEAN`.

- SQL Syntax:

  SQL statements follow a specific syntax, using keywords like `SELECT`, `INSERT`, `UPDATE`, `DELETE`, `CREATE`, and `DROP` to perform operations on the data.

### Hot to use it?

#### Basic SQL Operations

- Creating Tables:

  The CREATE TABLE statement defines the structure of a new table.

  ```sql
  CREATE TABLE IF NOT EXISTS `users` (
      `id` INT PRIMARY KEY,
      `name` VARCHAR(50),
      `email` VARCHAR(100)
  );
  ```

- Inserting Data:

  The INSERT INTO statement adds new records to a table.

  ```sql
  INSERT INTO `users` (`id`, `name`, `email`) VALUES (1, 'Alice', 'alice@example.com');
  ```

- Querying Data:

  The SELECT statement retrieves data from a table.

  ```sql
  SELECT * FROM `users`;
  SELECT `id` as myId FROM `users`
  ```

- Updating Data:

  The UPDATE statement modifies existing records in a table.

  ```sql
  UPDATE `users` SET `email` = 'alice@newdomain.com' WHERE `id` = 1;
  ```

- Deleting Data:

  The DELETE statement removes records from a table.

  ```sql
  DELETE FROM `users` WHERE `id` = 1;
  ```

#### Advanced SQL Concepts

- Joins:

  Joins combine rows from two or more tables based on a related column.

  ```sql
  SELECT orders.id, customers.name
  FROM orders
  JOIN customers ON orders.customer_id = customers.id;
  ```

- Aggregate Functions:

  Aggregate functions perform calculations on multiple rows and return a single result, such as COUNT, SUM, AVG, MIN, and MAX.

  ```sql
  SELECT COUNT(*) FROM users;
  ```

- Subqueries:

  Subqueries are nested queries that provide data to the outer query.

  ```sql
  SELECT name FROM users WHERE id IN (SELECT user_id FROM orders);
  ```

## Practical Examples and Exercises

### Exercise 1

1. Objective:

- Create a new database called `company`
- Define tables `employees` and `departments`:
  `employees` columns: id, name, position, salary
  `departments` columns: id, name, location

2. Exercise:
   found on [sql_introduction]("./sql_introduction.sql")

### Exercise 2

1. Objective:
   Write SQL queries to insert, update, and retrieve data from the tables.
2. Exercise:
   found on [sql_actions]("./sql_actions.sql")
