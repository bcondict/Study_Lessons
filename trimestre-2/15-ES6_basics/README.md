# ECMAScript 6 (ES6)

## Concepts to Cover

- Introduction to ES6

  - Overview of ES6
  - Benefits of using ES6

- Variables and Constants

  - `let` and `const`
  - Block scope

- Arrow Functions

  - Syntax and usage
  - Lexical `this`

- Template Literals

  - String interpolation
  - Multi-line strings

- Destructuring Assignment

  - Array and object destructuring
  - Default values

- Enhanced Object Literals

  - Shorthand property names
  - Method definitions

- Modules

  - `import` and `export` statements
  - Default and named exports

- Promises and Asynchronous Programming

  - Creating and using promises
  - async and await syntax

- Classes

  - Class syntax and inheritance
  - Static methods and properties

- Iterators and Generators

  - Understanding iterators
  - Using generators

## Origin and Story

ECMAScript 6 (ES6), also known as ECMAScript 2015, is a major update to the JavaScript language. It was finalized in June 2015 and introduced significant improvements and new features.

ES6 enhances JavaScript with new syntax and features that make the language more powerful, readable, and maintainable. It addresses many of the shortcomings of previous versions and aligns JavaScript with modern programming practices.

## What is it, and How to Use it?

### Introduction to ES6

- What is ES6?

  ES6 is the sixth edition of the ECMAScript language specification standard. It is also known as ECMAScript 2015 and introduced many new features to JavaScript.

- Benefits of Using ES6:

  - Readability: New syntax features make code more readable and concise.
  - Maintainability: Improved module system and class syntax.
  - Performance: Enhancements in the language lead to better performance in many cases.

### Variables and Constants

- `let` and `const`:

  - `let`: Declares a block-scoped variable.
  - `const`: Declares a block-scoped constant.

  Example:

  ```javascript
  let name = "John";
  const age = 30;

  if (true) {
    let name = "Jane";
    console.log(name); // Jane
  }

  console.log(name); // John
  ```

### Arrow Functions

- Syntax and Usage:

  Arrow functions provide a concise syntax for writing functions.

  Example:

  ```javascript
  const add = (a, b) => a + b;
  console.log(add(2, 3)); // 5
  ```

- Lexical this:

  Arrow functions do not have their own this context.

  Example:

  ```javascript
  function Person() {
    this.age = 0;

    setInterval(() => {
      this.age++;
      console.log(this.age);
    }, 1000);
  }

  let p = new Person();
  ```

### Template Literals

- String Interpolation:

  Template literals allow for easier string interpolation and multi-line strings.

  Example:

  ```javascript
  const name = "John";
  const message = `Hello, ${name}!`;
  console.log(message); // Hello, John!
  ```

- Multi-line Strings:

  ```javascript
  const poem = `
      Roses are red,
      Violets are blue,
      Sugar is sweet,
      And so are you.
  `;
  console.log(poem);
  ```

### Destructuring Assignment

- Array and Object Destructuring:

  Destructuring allows you to unpack values from arrays or properties from objects into distinct variables.

  Example:

  ```javascript
  const [a, b] = [1, 2];
  console.log(a, b); // 1 2

  const { name, age } = { name: "John", age: 30 };
  console.log(name, age); // John 30
  ```

- Default Values:

  ```javascript
  const [a = 1, b = 2] = [];
  console.log(a, b); // 1 2
  ```

### Enhanced Object Literals

- Shorthand Property Names:

  Simplifies the syntax for defining properties in an object literal.

  Example:

  ```javascript
  const name = "John";
  const age = 30;

  const person = { name, age };
  console.log(person); // {name: 'John', age: 30}
  ```

- Method Definitions:

  ```javascript
  const person = {
    name: "John",
    greet() {
      console.log(`Hello, ${this.name}`);
    },
  };

  person.greet(); // Hello, John
  ```

### Modules

- import and export Statements:

  ES6 introduces a module system for better code organization.

  Example:

  ```javascript
  // math.js
  export const add = (a, b) => a + b;
  export const subtract = (a, b) => a - b;

  // main.js
  import { add, subtract } from "./math";
  console.log(add(2, 3)); // 5
  ```

### Promises and Asynchronous Programming

- Creating and Using Promises:

  Promises represent asynchronous operations.

  Example:

  ```javascript
  const fetchData = () => {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve("Data fetched");
      }, 1000);
    });
  };

  fetchData().then((data) => console.log(data)); // Data fetched
  ```

- async and await Syntax:

  Simplifies working with promises.

  Example:

  ```javascript
  const fetchData = () => {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        resolve("Data fetched");
      }, 1000);
    });
  };

  const getData = async () => {
    const data = await fetchData();
    console.log(data);
  };

  getData(); // Data fetched
  ```

### Classes

- Class Syntax and Inheritance:

  ES6 introduces a class syntax for OOP.

  Example:

  ```javascript
  class Person {
    constructor(name, age) {
      this.name = name;
      this.age = age;
    }

    greet() {
      console.log(`Hello, ${this.name}`);
    }
  }

  class Student extends Person {
    constructor(name, age, grade) {
      super(name, age);
      this.grade = grade;
    }

    study() {
      console.log(`${this.name} is studying`);
    }
  }

  const student = new Student("John", 20, "A");
  student.greet(); // Hello, John
  student.study(); // John is studying
  ```

### Iterators and Generators

- Understanding Iterators:

  Iterators are objects that define a sequence and potentially a return value upon its termination.

  Example:

  ```javascript
  Copiar código
  const iterator = {
      [Symbol.iterator]() {
          let step = 0;
          return {
              next() {
                  step++;
                  if (step <= 5) {
                      return {value: step, done: false};
                  } else {
                      return {done: true};
                  }
              }
          };
      }
  };

  for (const value of iterator) {
      console.log(value);
  }
  ```

- Using Generators:

  Generators provide a powerful alternative to iterators.

  Example:

  ```javascript
  function* generator() {
    yield 1;
    yield 2;
    yield 3;
  }

  const gen = generator();
  for (const value of gen) {
    console.log(value); // 1 2 3
  }
  ```
