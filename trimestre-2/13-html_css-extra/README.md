# HTML and CSS Extra

## Topics to review

- CSS display property
  - Grid layout
    - What is Grid Layout
    - When to Use Grid Layout
    - Grid Container and Grid Items
    - Grid Templates
    - Placing Items in the Grid
  - Flexbox layout
    - What is Flex Layout
    - When to Use Flex Layout
    - Flex container and Flex Items
    - Main Axis and Cross Axis
    - Aligning and Justifying Items
    - Flex Grow, Shrink and Basis
  - Other Display Options
    - `inline-block`
    - `none`
    - `contents`
    - `table`
- Advanced CSS Selectors
  - `:has()` selector
  - `:is()` and `:where()` selector
  - `:not()` selector
- New Pseudo-Classes and Pseudo-Elements
  - `:focus`
  - `::marker`
- CSS Functions
  - `calc()`
  - `min()`, `max()`, and `clamp()`

## What is it and how to use it?

### What is it?

#### Grid

Is a layout system that allows for the creation of two-dimensional layouts.

Ideal for complex, grid-based layouts such as photo galleries, dashboards, and forms where precise placement of elements is required.

#### Flex

Is a layout model designed for arranging elements in one dimension, either as a row or a column.

Used for one-dimensional layouts, such as navigation bars, toolbars, and vertical or horizontal arrangements of elements.

#### Other Display Options

- `display: inline-block`: Allows elements to be displayed side-by-side while still behaving like block elements. Useful for items that need to flow inline but also maintain block-like properties.
- `display: none`: Completely removes an element from the document flow, making it invisible and non-interactive. Useful for toggling the visibility of elements without affecting layout.
- `display: contents`: Makes the container disappear but retains its children in the document flow. Useful for manipulating the flow of child elements without an enclosing box.
- `display: table`: Emulates table behavior for non-table elements, useful for creating table-like layouts with CSS.

#### Advanced CSS Selectors

- `:has()` Selector: Selects elements that contain a specific child element. Useful for styling parent elements based on the presence of child elements.
- `:is()` and `:where()` Selectors: Simplify complex selectors by allowing multiple selectors to be grouped together.
  - `:is()` affects specificity
  - `:where()` has no specificity impact.
- `:not()` Selector: Excludes elements from a selection. Useful for applying styles to all elements except those matching a certain selector.

#### New Pseudo-Classes and Pseudo-Elements

- `:focus()`: Differentiates between focus caused by keyboard navigation and mouse interaction. Enhances accessibility by providing clear visual indicators for keyboard users.
- `::marker`: Styles the markers of list items (like bullets or numbers). Useful for customizing the appearance of list markers to match the design.

### How to use it

#### Grid

- **Grid Container and Grid Items**:

  - Grid container is the parent element that defines the grid.
  - Grid items are the direct children of the container, placed within the grid.

  ```html
  <style>
    .grid-container {
      display: grid;
      grid-template-columns: 1fr 1fr 1fr;
      grid-gap: 10px;
    }
    .grid-item {
      background-color: #ddd;
      padding: 20px;
      text-align: center;
    }
  </style>
  <div class="grid-container">
    <div class="grid-item">1</div>
    <div class="grid-item">2</div>
    <div class="grid-item">3</div>
    <div class="grid-item">4</div>
    <div class="grid-item">5</div>
    <div class="grid-item">6</div>
  </div>
  ```

- **Grid Template**: Define the structure of rows and columns using properties like `grid-template-rows` and `grid-template-columns`. Use `grid-template-areas` to name specific areas of the grid for easy reference.

  ```html
  <style>
    .grid-container {
      display: grid;
      grid-template-areas:
        "header header header"
        "sidebar main main"
        "footer footer footer";
      grid-gap: 10px;
    }
    .header {
      grid-area: header;
    }
    .sidebar {
      grid-area: sidebar;
    }
    .main {
      grid-area: main;
    }
    .footer {
      grid-area: footer;
    }
  </style>
  <div class="grid-container">
    <div class="header">Header</div>
    <div class="sidebar">Sidebar</div>
    <div class="main">Main Content</div>
    <div class="footer">Footer</div>
  </div>
  ```

- **Place Items in the grid**: Use the properties `grid-row` and `grid-column` to place items withing the grid.
  ```html
  <style>
    .grid-container {
      display: grid;
      grid-template-columns: 1fr 2fr;
      grid-gap: 10px;
    }
    .grid-item {
      background-color: #ddd;
      padding: 20px;
      text-align: center;
    }
    .grid-item:nth-child(1) {
      grid-column: 1 / span 2;
    }
    .grid-item:nth-child(2) {
      grid-row: 2 / span 2;
    }
  </style>
  <div class="grid-container">
    <div class="grid-item">1</div>
    <div class="grid-item">2</div>
    <div class="grid-item">3</div>
    <div class="grid-item">4</div>
  </div>
  ```

#### Flex

- Flex Container and Flex Items

  - Define a flex container using `display: flex`.
  - Flex items are direct children of the flex container.

- Main Axis and Cross Axis

  - The main axis is defined by the `flex-direction` property (`row` or `column`).
  - The cross axis is perpendicular to the main axis.

- Aligning and Justifying Items

  - Use `justify-content` to align items along the main axis.

  - Use `align-items` to align items along the cross axis.

  ```html
  <style>
    .flex-container {
      display: flex;
      justify-content: space-between;
      align-items: center;
    }
    .flex-item {
      background-color: #ddd;
      padding: 20px;
      text-align: center;
      margin: 5px;
    }
  </style>
  <div class="flex-container">
    <div class="flex-item">1</div>
    <div class="flex-item">2</div>
    <div class="flex-item">3</div>
  </div>
  ```

  - Flex Grow, Shrink, and Basis

    - `flex-grow`: defines how much a flex item should grow relative to others.

    - `flex-shrink`: defines how much a flex item should shrink relative to others.

    - `flex-basis`: sets the initial size of a flex item before growing or shrinking.

  ```html
  <style>
    .flex-container {
      display: flex;
    }
    .flex-item {
      flex: 1;
      margin: 5px;
      background-color: #ddd;
      text-align: center;
      padding: 20px;
    }
    .flex-item:nth-child(1) {
      flex-grow: 2;
    }
    .flex-item:nth-child(2) {
      flex-shrink: 1;
    }
    .flex-item:nth-child(3) {
      flex-basis: 50%;
    }
  </style>
  <div class="flex-container">
    <div class="flex-item">1</div>
    <div class="flex-item">2</div>
    <div class="flex-item">3</div>
  </div>
  ```

#### Other Display Options

- `display: inline`

  ```html
  <style>
    .inline-block {
      display: inline-block;
      padding: 10px;
      background-color: lightblue;
    }
  </style>
  <div class="inline-block">Item 1</div>
  <div class="inline-block">Item 2</div>
  <div class="inline-block">Item 3</div>
  ```

- `display: none`

  ```html
  <style>
    .hidden {
      display: none;
    }
  </style>
  <div class="hidden">This will not be visible</div>

  - `display: contents`
  <style>
    .contents {
      display: contents;
    }
  </style>
  <div class="contents">
    <div>Item 1</div>
    <div>Item 2</div>
    <div>Item 3</div>
  </div>
  ```

- `display: table`
  ```html
  <style>
    .table {
      display: table;
      width: 100%;
    }
    .table-row {
      display: table-row;
    }
    .table-cell {
      display: table-cell;
      padding: 10px;
      border: 1px solid #ddd;
    }
  </style>
  <div class="table">
    <div class="table-row">
      <div class="table-cell">Cell 1</div>
      <div class="table-cell">Cell 2</div>
      <div class="table-cell">Cell 3</div>
    </div>
    <div class="table-row">
      <div class="table-cell">Cell 4</div>
      <div class="table-cell">Cell 5</div>
      <div class="table-cell">Cell 6</div>
    </div>
  </div>
  ```

#### Advanced CSS Selectors

- `:has()` selector:
  ```html
  <style>
    div:has(> p) {
      border: 2px solid blue;
    }
  </style>
  <div>
    <p>This div has a paragraph.</p>
  </div>
  <div>This div does not have a paragraph.</div>
  ```
- `:is()` and `:where()`

  - `:is()`

  ```html
  <style>
    ol {
      list-style-type: upper-alpha;
      color: darkblue;
    }

    /* stylelint-disable-next-line selector-pseudo-class-no-unknown */
    :is(ol, ul, menu:unsupported) :is(ol, ul) {
      color: green;
    }

    :is(ol, ul) :is(ol, ul) ol {
      list-style-type: lower-greek;
      color: chocolate;
    }
  </style>
  <ol>
    <li>Saturn</li>
    <li>
      <ul>
        <li>Mimas</li>
        <li>Enceladus</li>
        <li>
          <ol>
            <li>Voyager</li>
            <li>Cassini</li>
          </ol>
        </li>
        <li>Tethys</li>
      </ul>
    </li>
    <li>Uranus</li>
    <li>
      <ol>
        <li>Titania</li>
        <li>Oberon</li>
      </ol>
    </li>
  </ol>
  ```

  - `:where()`

  ```html
  <style>
    ol {
      list-style-type: upper-alpha;
      color: darkblue;
    }

    /* Not applied to ol, because of lower specificity */
    /* stylelint-disable-next-line selector-pseudo-class-no-unknown */
    :where(ol, ul, menu:unsupported) :where(ol, ul) {
      color: green;
    }

    :where(ol, ul) :where(ol, ul) ol {
      list-style-type: lower-greek;
      color: chocolate;
    }
  </style>
  <ol>
    <li>Saturn</li>
    <li>
      <ul>
        <li>Mimas</li>
        <li>Enceladus</li>
        <li>
          <ol>
            <li>Voyager</li>
            <li>Cassini</li>
          </ol>
        </li>
        <li>Tethys</li>
      </ul>
    </li>
    <li>Uranus</li>
    <li>
      <ol>
        <li>Titania</li>
        <li>Oberon</li>
      </ol>
    </li>
  </ol>
  ```

- `:not()` Selector

  ```html
  <style>
    p:not(.intro) {
      color: gray;
    }
  </style>
  <p class="intro">Introduction paragraph.</p>
  <p>Another paragraph.</p>
  ```

  ```

  ```

#### New Pseudo-Classes and Pseudo-Elements

- `:focus`
  ```html
  <style>
    button:focus {
      outline: none;
    }
    button:focus-visible {
      outline: 2px solid blue;
    }
  </style>
  <button>Click me</button>
  ```
- `::marker`
  ```html
  <style>
    li::marker {
      color: red;
      font-size: 1.5em;
    }
  </style>
  <ul>
    <li>Item 1</li>
    <li>Item 2</li>
    <li>Item 3</li>
  </ul>
  ```

#### CSS Functions

- `calc()`
  ```html
  <style>
    .box {
      width: calc(100% - 50px);
      height: calc(100vh - 100px);
      background-color: lightblue;
    }
  </style>
  <div class="box">This box uses calc() for its dimensions.</div>
  ```
- `min()`

  ```html
  <style>
    .box {
      width: min(50vw, 200px);
      box-shadow: 0 0 0 2px black;
    }
  </style>
  <div class="box">Responsive text size using min().</div>
  ```

- `max()`

  ```html
  <style>
    .box {
      width: max(20vw, 400px);
      box-shadow: 0 0 0 2px black;
    }
  </style>
  <div class="box">Responsive text size using min().</div>
  ```

- `clamp()`

  ```html
  <style>
    .box {
      font-size: clamp(1rem, 2.5vw, 2rem);
    }
  </style>
  <div class="box">Responsive text size using clamp().</div>
  ```
