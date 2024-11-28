# Python - Server Side Rendering (SSR)

## Concepts to Cover

- Introduction to Server-Side Rendering (SSR)

  - What is SSR?
  - Benefits of SSR
  - Comparison with Client-Side Rendering (CSR)

- Introduction to Flask

  - What is Flask?
  - Setting up a Flask environment
  - Basic Flask application structure

- Flask Templating with Jinja2

  - What is Jinja2?
  - Templating basics
  - Rendering templates in Flask

- Creating a Flask Application

  - Routing and views
  - Handling form data
  - Using templates for SSR

- Serving Static Files

  - CSS, JavaScript, and image files
  - Organizing static files in Flask

- Flask and Database Integration

  - Introduction to SQLAlchemy
  - Setting up a database
  - Performing CRUD operations

- Deploying Flask Applications

  - Deployment options (Heroku, AWS, etc.)
  - Preparing your app for production

## Origin and Story

### Server-Side Rendering (SSR):

SSR has been used since the early days of the web. Initially, all web pages were rendered on the server and sent to the client as - complete HTML documents.

SSR provides faster initial page loads, better SEO, and improved performance on low-power devices.

### Flask:

Flask is a micro web framework for Python, created by Armin Ronacher in 2010 as an April Fool's joke, but it quickly gained popularity due to its simplicity and flexibility.

Flask allows developers to create web applications quickly with minimal setup. It's lightweight and easy to use, making it a popular choice for both small and large projects.

## What is it, and How to Use it?

### Introduction to SSR

- **What is SSR?**

  SSR stands for Server-Side Rendering. It refers to the process of rendering web pages on the server and sending the fully rendered HTML to the client.

- Benefits of SSR:

  - Improved SEO: Search engines can crawl fully rendered pages.

  - Faster Initial Load: Users see the content faster as the browser doesn't need to wait for JavaScript to load.
  - Better Performance: Less work is done on the client side, which can be beneficial for users on slower devices.

- Comparison with CSR:

  - CSR (Client-Side Rendering): The server sends a minimal HTML shell, and JavaScript on the client side renders the content.
  - SSR: The server renders the content and sends the complete HTML to the client.

### Introduction to Flask

- What is Flask?

  Flask is a micro web framework for Python based on the Werkzeug toolkit and Jinja2 templating engine.

- Setting up a Flask Environment:

  Install Flask using pip:

  ```bash
  pip install flask
  ```

- Basic Flask Application Structure:

  ```python
  from flask import Flask, render_template

  app = Flask(__name__)

  @app.route('/')
  def home():
    return render_template('index.html')

  if __name__ == '__main__':
    app.run(debug=True)
  ```

### Flask Templating with Jinja2

- What is Jinja2?

  Jinja2 is a templating engine for Python that allows you to write HTML templates with dynamic content.

- Templating Basics:

  Create a template file (`index.html`):

  ```html
  <!doctype html>
  <html lang="en">
    <head>
      <meta charset="UTF-8" />
      <meta name="viewport" content="width=device-width, initial-scale=1.0" />
      <title>Home</title>
    </head>
    <body>
      <h1>{{ title }}</h1>
      <p>{{ content }}</p>
    </body>
  </html>
  ```

- Rendering Templates in Flask:

  Modify the Flask route to pass data to the template:

  ```python
  @app.route('/')
  def home():
    return render_template('index.html', title='Home Page', content='Welcome to the Home Page')
  ```

### Creating a Flask Application

- Routing and Views:

  Define multiple routes and views:

  ```python
  @app.route('/')
  def home():
    return render_template('index.html', title='Home Page')

  @app.route('/about')
  def about():
    return render_template('about.html', title='About Us')
  ```

### Handling Form Data:

- Create a form in a template:

  ```html
  <form action="/submit" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name" />
    <input type="submit" value="Submit" />
  </form>
  ```

- Handle form submission in Flask:

  ```python
  from flask import request

  @app.route('/submit', methods=['POST'])
  def submit():
    name = request.form['name']
    return f'Hello, {name}!'
  ```

### Using Templates for SSR:

- Create dynamic content with templates:
  ```python
  @app.route('/user/<username>')
  def user_profile(username):
    return render_template('profile.html', username=username)
  ```

### Serving Static Files

- CSS, JavaScript, and Image Files:

  - Organize static files in a `static` folder:

    ```bash
    /static
      /css
      /js
      /images
    ```

  - Link static files in templates:

    ```html
    <link
      rel="stylesheet"
      href="{{ url_for('static', filename='css/style.css') }}"
    />
    ```

### Flask and Database Integration

#### Introduction to SQLAlchemy:

- Install SQLAlchemy:

  ```bash
  pip install sqlalchemy
  ```

- Set up SQLAlchemy in Flask:

  ```python
  from flask_sqlalchemy import SQLAlchemy

  app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///site.db'
  db = SQLAlchemy(app)
  ```

#### Defining Models:

- Define a model for a database table:
  ```python
  class User(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    username = db.Column(db.String(150), unique=True, nullable=False)
    email = db.Column(db.String(120), unique=True, nullable=False)
  ```

#### Performing CRUD Operations:

- Create and query records:

  ```python
  new_user = User(username='john_doe', email='john@example.com')
  db.session.add(new_user)
  db.session.commit()

  users = User.query.all()
  ```

#### Deploying Flask Applications

- Deployment Options:

  Deploy on Heroku, AWS, or other platforms.

- Preparing Your App for Production:

  Use a WSGI server like Gunicorn.
  Set environment variables for configuration.
