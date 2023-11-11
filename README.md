# Simple Shell Project

This is a simple UNIX command-line interpreter developed as part of a project. The project evolves through different versions, with each version adding new features and functionality to the shell.

## Table of Contents

1. [Introduction](#introduction)
2. [Requirements](#requirements)
3. [Versions](#versions)
   - [Simple Shell 0.1](#simple-shell-01)
   - [Simple Shell 0.2](#simple-shell-02)
   - [Simple Shell 0.3](#simple-shell-03)
   - [Simple Shell 0.4](#simple-shell-04)
   - [Simple Shell 1.0](#simple-shell-10)
   - [Simple Shell 0.1.1](#simple-shell-011)
   - [Simple Shell 0.2.1](#simple-shell-021)
   - [Simple Shell 0.4.1](#simple-shell-041)
   - [setenv, unsetenv](#setenv-unsetenv)
   - [cd](#cd)
   - [;](#semicolon)
   - [&& and ||](#logical-operators)
   - [alias](#alias)
   - [Variables](#variables)
   - [Comments](#comments)
   - [File as Input](#file-as-input)

## Introduction

This project involves the creation of a simple UNIX command-line interpreter, commonly known as a shell. The development is iterative, with each version building upon the previous one. The shell is designed to handle various commands, built-in functionalities, and advanced features.

## Requirements

To run the shell, you need a UNIX-like operating system. The code is developed in C, and you will need a C compiler, such as GCC, for compilation.

## Versions

### Simple Shell 0.1

- Basic shell functionality
- Display prompt and wait for user input
- Execute commands entered by the user
- No arguments or advanced features

### Simple Shell 0.2

- Enhanced to handle command lines with arguments

### Simple Shell 0.3

- Implemented PATH handling
- Prevented unnecessary fork calls for non-existent commands

### Simple Shell 0.4

- Added the exit built-in command
- Implemented the exit command without arguments

### Simple Shell 1.0

- Introduced the env built-in command to display the current environment

### Simple Shell 0.1.1

- Developed a custom `getline` function to read user input efficiently
- Avoided the use of `strtok`

### Simple Shell 0.2.1

- Continued without using `strtok`

### Simple Shell 0.4.1

- Enhanced exit built-in to handle exit with status

### setenv, unsetenv

- Added setenv and unsetenv built-in commands to manage environment variables

### cd

- Implemented the cd built-in command for changing the current directory

### ;

- Added support for commands separator ;

### && and ||

- Implemented logical operators && and ||

### alias

- Added the alias built-in command for managing aliases

### Variables

- Handled variables replacement, including $? and $$

### Comments

- Implemented support for comments (#)

### File as Input

- Added the ability to take a file as a command line argument
- Executed commands from the file before exiting

### Author @pwntheweb
