# TodoList

A small C++ command-line todo list application.

## Version

v0.3 — Non-Persistent Version

## Features

- View tasks
- Add tasks
- Remove tasks
- Quit the program
- Tasks are numbered automatically

## How It Works

TodoList stores tasks in a `std::vector<std::string>` while the program is running.

Tasks can be added, viewed, and removed using the menu.

## Important

This version is **non-persistent**.

Tasks are stored only while the program is running.  
When the program closes, all tasks are lost.

Persistent file storage will be added in a future version.

## Requirements

- C++ compiler
- GCC / g++

## Build

```bash
g++ todo.cpp -o todo
