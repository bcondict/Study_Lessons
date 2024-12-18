# JavaScrpit - Dom Manpulation

## Concepts to Cover

- Introduction to the DOM

  - What is the DOM?
  - Importance of the DOM in web development

- Selecting Elements

  - `getElementById`
  - `getElementsByClassName`
  - `getElementsByTagName`
  - `querySelector` and `querySelectorAll`

- Manipulating Elements

  - Changing element content
  - Changing element attributes
  - Adding and removing classes
  - Changing styles

- Creating and Removing Elements

  - Creating new elements
  - Appending and inserting elements
  - Removing elements

- Event Handling

  - Adding event listeners
  - Common event types
  - Event delegation

- Traversing the DOM

  - Parent, child, and sibling relationships
  - Navigating the DOM tree

## Origin and Story

The Document Object Model (DOM) was introduced by the W3C (World Wide Web Consortium) as a cross-platform and language-independent interface that allows programs and scripts to dynamically access and update the content, structure, and style of documents.

The DOM represents the page so that programs can change the document structure, style, and content. It enables interactive web applications and is the foundation of modern web development.

## What is it, and How to Use it?

- What is the DOM?

  The DOM is a programming interface for HTML and XML documents. It represents the page as nodes and objects, allowing programming languages to interact with the page.

- Importance of the DOM in Web Development:

  The DOM allows developers to create dynamic web pages. It enables scripts to update the content, structure, and style of a document while the user is viewing it.

## Selecting Elements

- `getElementById`:

  Selects an element by its ID.

  Example:

  ```javascript
  const element = document.getElementById("myElement");
  console.log(element);
  ```

- `getElementsByClassName`:

  Selects elements by their class name.

  Example:

  ```javascript
  const elements = document.getElementsByClassName("myClass");
  console.log(elements);
  ```

- `getElementsByTagName`:

  Selects elements by their tag name.

  Example:

  ```javascript
  const elements = document.getElementsByTagName("div");
  console.log(elements);
  ```

- `querySelector` and `querySelectorAll`:

  Selects elements using CSS selectors.

  Example:

  ```javascript
  const element = document.querySelector(".myClass");
  console.log(element);

  const elements = document.querySelectorAll(".myClass");
  console.log(elements);
  ```

### Manipulating Elements

- Changing Element Content:

  `innerHTML` and `textContent` can be used to change the content of an element.

  Example:

  ```javascript
  const element = document.getElementById("myElement");
  element.innerHTML = "Hello, World!";
  ```

- Changing Element Attributes:

  `setAttribute` and `getAttribute` methods.

  Example:

  ```javascript
  const element = document.getElementById("myElement");
  element.setAttribute("data-value", "123");
  console.log(element.getAttribute("data-value"));
  ```

- Adding and Removing Classes:

  `classList` property.

  Example:

  ```javascript
  const element = document.getElementById("myElement");
  element.classList.add("newClass");
  element.classList.remove("oldClass");
  ```

- Changing Styles:

  `style` property.

  Example:

  ```javascript
  const element = document.getElementById("myElement");
  element.style.color = "red";
  element.style.fontSize = "20px";
  ```

### Creating and Removing Elements

- Creating New Elements:

  `createElement` method.

  Example:

  ```javascript
  const newElement = document.createElement("div");
  newElement.innerHTML = "I am a new element";
  ```

- Appending and Inserting Elements:

  `appendChild` and `insertBefore` methods.

  Example:

  ```javascript
  const parentElement = document.getElementById("parent");
  const newElement = document.createElement("div");
  newElement.innerHTML = "I am a new element";

  parentElement.appendChild(newElement);
  ```

- Removing Elements:

  `removeChild` method.

  Example:

  ```javascript
  const parentElement = document.getElementById("parent");
  const childElement = document.getElementById("child");

  parentElement.removeChild(childElement);
  ```

### Event Handling

- Adding Event Listeners:

  `addEventListener` method.

  Example:

  ```javascript
  const button = document.getElementById("myButton");
  button.addEventListener("click", () => {
    alert("Button clicked!");
  });
  ```

- Common Event Types:

  - Click, mouseover, keyup, etc.

- Event Delegation:

  Using a single event listener to manage events for multiple elements.

  Example:

  ```javascript
  const parent = document.getElementById("parent");
  parent.addEventListener("click", (event) => {
    if (event.target && event.target.matches("button.className")) {
      alert("Button clicked!");
    }
  });
  ```

### Traversing the DOM

- Parent, Child, and Sibling Relationships:

  `parentNode`, `childNodes`, `firstChild`, `lastChild`, `nextSibling`, `previousSibling`.

  Example:

  ```javascript
  const parent = document.getElementById("child").parentNode;
  const firstChild = document.getElementById("parent").firstChild;
  const nextSibling = document.getElementById("child").nextSibling;
  ```

- Navigating the DOM Tree:

  Using traversal properties and methods to navigate the DOM tree.
