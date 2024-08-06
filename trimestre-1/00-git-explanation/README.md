# Git explanation

## Objective

The objective for the today's session is:

- Understand what's Git
  - Version control system
  - Repositories
  - Commits
  - Branches and merging
  - Remote repositories (github, gitlab, bitbucket)

## Origin and Story

Git was created by Linus Torvalds in 2005 to manage the Linux kernel development. It was developed as a response to the need for a distributed version control system that was fast, efficient, and scalable.

Originally used for managing the development of the Linux kernel, Git has since become the most popular version control system in the world. It is widely used by bode open-source and commercial projects.

## What is it and how to use it

### What is it

`Git` is a distributed version control system used to track changes in source code during software development. It enables multiple developers to work on a project simultaneously without overwriting each other's changes.

### How to use it

- **installation**: Install `Git` on your system, using CLI or [git-scm.com/](https://git-scm.com/)
- **Basic Commands**:
  - `git init`: Initialize a new Git repository.
  - `git clone <repository>`: Clone a remote repository to your local machine.
  - `git status`: Check the status of changes in the working directory.
  - `git add <file(s)>`: Stage changes for the next commit.
  - `git commit -m "message"`: Commit staged changes with a descriptive message.
  - `git push`: Push local commits to a remote repository.
  - `git pull`: Fetch and merge changes from a remote repository.
- **Advanced Commands**:
  - `git branch`: List the local branches.
  - `git branch -a`: List the local and remote branches.
  - `git branch <branch>`: Create a new branch but stays in the original branch.
  - `git checkout <branch>`: Move to an existence local branch.
  - `git checkout -b`: Create a new branch if not exists and move to the new created branch.
  - `git merge <source branch>`: Merges the difference between the source branch to the current branch. The branch that is changed is the current branch.

### Practical Exercise

1. Git Repository Setup:

- Create a new directory for your project.

```bash
mkdir my_project
cd my_project
```

- Initialize a new Git repository.

```bash
git init
```

- create a new file called `README.md` and add some content to it.

```bash
echo "# My Project" >> README.md
```

- Stage and commit the changes.

```bash
git add README.md
git commit -m "Add README.md"
```

- On GitHub (or any other remote repository service) create the new repository
- Copy the authentication that fits on you, http if you have token or shh if you have ssh key.
- Set the remote origin

```bash
git remote add origin #paste your mathod
```

- Push your changes and set the default branch to main

```bash
git push -u origin main
```
