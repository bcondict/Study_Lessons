# HTML and CSS

## Concepts to Cover

- HTML:

  - Introduction to HTML

    - What is HTML?
    - Importance of HTML in web development
    - Basic structure of an HTML document

  - HTML Elements and Attributes

    - Tags, elements, and attributes
    - Common HTML elements (headings, paragraphs, links, images, lists, etc.)

  - HTML Forms and Inputs

    - Creating forms
    - Form elements (input, textarea, select, etc.)
    - Form attributes and validation

  - HTML5 Semantic Elements

    - Section, article, nav, aside, header, footer, etc.
    - Importance of semantic elements for accessibility and SEO

- CSS:

  - Introduction to CSS

    - What is CSS?
    - Importance of CSS in web design
    - Basic syntax and structure

  - CSS Selectors

    - Types of selectors (element, class, ID, attribute, etc.)
    - Grouping, combinators, and pseudo-classes

  - CSS Box Model

    - Understanding the box model (content, padding, border, margin)
    - Width, height, and overflow

  - CSS Layouts

    - Display property (block, inline, inline-block, flex, grid)
    - Positioning (static, relative, absolute, fixed, sticky)
    - Float and clear

  - Responsive Design

    - Media queries
    - Responsive units (%, em, rem, vh, vw)
    - Mobile-first design approach

  - CSS Flexbox and Grid

    - Basics of Flexbox
    - Basics of Grid layout
    - Advanced Topics:

  - Animations and Transitions

    - CSS transitions
    - CSS animations and keyframes

  - CSS Preprocessors

    - Introduction to Sass and LESS

## Origin and Story

### **HTML:**

HTML (HyperText Markup Language) was created by Tim Berners-Lee in 1991 to format and link documents on the World Wide Web. The first version, HTML 1.0, was very basic, providing a simple way to format text and create hyperlinks.

HTML has evolved significantly, with HTML5 being the latest major version. HTML5 introduced new semantic elements, form controls, and multimedia elements, enhancing the web's capabilities.

### **CSS:**

CSS (Cascading Style Sheets) was developed by Håkon Wium Lie and Bert Bos in 1996 to separate content from presentation. This separation allows for more flexible and efficient web design.

CSS has also evolved, with CSS3 introducing new modules such as Flexbox, Grid, transitions, and animations, providing powerful tools for web designers.

## What is it, and How to Use it?

### **HTML:**

- What is HTML?

  HTML is a markup language used to create the structure of web pages. It consists of a series of elements that define different parts of the content, such as headings, paragraphs, links, images, and more.

- Basic Structure of an HTML Document:

  ```html
  <!doctype html>
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title>Document</title>
    </head>
    <body>
      <h1>Hello, World!</h1>
      <p>This is a paragraph.</p>
    </body>
  </html>
  ```

- Common HTML Elements:

  - Headings:
    ```html
    <h1>Main Heading</h1>
    <h2>Subheading</h2>
    ```
  - Paragraphs:
    ```html
    <p>This is a paragraph.</p>
    ```
  - Links:
    ```html
    <a href="https://www.example.com">Visit Example</a>
    ```
  - Images:

  ```html
  <img src="image.jpg" alt="Description" />
  ```

  - Lists:
    ```html
    <ul>
      <li>Item 1</li>
      <li>Item 2</li>
    </ul>
    <ol>
      <li>First item</li>
      <li>Second item</li>
    </ol>
    ```

- HTML Forms and Inputs:

  - Creating a form:
    ```html
    <form action="/submit" method="post">
      <label for="name">Name:</label>
      <input type="text" id="name" name="name" />
      <input type="submit" value="Submit" />
    </form>
    ```

- HTML5 Semantic Elements:

  - Example of semantic elements:
    ```html
    <header>
      <h1>Website Header</h1>
    </header>
    <nav>
      <ul>
        <li><a href="#home">Home</a></li>
        <li><a href="#about">About</a></li>
      </ul>
    </nav>
    <main>
      <article>
        <h2>Article Title</h2>
        <p>Article content...</p>
      </article>
      <aside>
        <h2>Related Links</h2>
        <p>Additional information...</p>
      </aside>
    </main>
    <footer>
      <p>Website Footer</p>
    </footer>
    ```

  ```

  ```

### **CSS:**

- What is CSS?

  CSS is a stylesheet language used to describe the presentation of a document written in HTML. It controls the layout, colors, fonts, and overall visual appearance of web pages.

- Basic CSS Syntax:

  ```css
  selector {
    property: value;
  }
  ```

- Common CSS Selectors:

  - Element Selector:
    ```css
    p {
      color: blue;
    }
    ```
  - Class Selector:
    ```css
    .my-class {
      font-size: 20px;
    }
    ```
  - ID Selector:
    ```css
    #my-id {
      background-color: yellow;
    }
    ```

- CSS Box Model:

  - Example of box model properties:
    ```css
    .box {
      width: 300px;
      height: 200px;
      padding: 10px;
      border: 5px solid black;
      margin: 20px;
    }
    ```

- CSS Layouts:

  - Flexbox:
    ```css
    .container {
      display: flex;
      justify-content: space-between;
    }
    .item {
      flex: 1;
    }
    ```
  - Grid:
    ```css
    .grid-container {
      display: grid;
      grid-template-columns: repeat(3, 1fr);
      gap: 10px;
    }
    .grid-item {
      background-color: lightgrey;
      padding: 20px;
    }
    ```

- Responsive Design:

  - Example of a media query:
    ```css
    @media (max-width: 600px) {
      body {
        background-color: lightblue;
      }
    }
    ```

- CSS Animations and Transitions:

  - Transitions:
    ```css
    .box {
      transition: background-color 0.5s;
    }
    .box:hover {
      background-color: red;
    }
    ```
  - Animations:
    ```css
    @keyframes example {
      from {
        background-color: red;
      }
      to {
        background-color: yellow;
      }
    }
    .animated-box {
      animation: example 5s infinite;
    }
    ```
