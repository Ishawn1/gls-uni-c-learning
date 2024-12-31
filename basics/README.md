# Fundamentals of C Programming

This directory contains code examples and exercises covering the fundamental concepts of C programming. These examples are based on the material covered in my introductory C programming course at GLS University.

**Overview:**

This section focuses on the building blocks of C, including how to declare and use variables, understand different data types, perform operations using various operators, and control the flow of execution within a program.

**Files:**

* **`variables_datatypes.c`:** This file demonstrates the declaration and usage of different fundamental data types in C, such as:
    * `int` (integers)
    * `float` (floating-point numbers)
    * `double` (double-precision floating-point numbers)
    * `char` (characters)
    * Demonstrates how to declare variables and assign values to them.
    * May include examples of type casting.

* **`operators.c`:** This file showcases various operators in C, including:
    * **Arithmetic Operators:** `+`, `-`, `*`, `/`, `%` (addition, subtraction, multiplication, division, modulo).
    * **Relational Operators:** `==`, `!=`, `>`, `<`, `>=`, `<=` (equality, inequality, greater than, less than, greater than or equal to, less than or equal to).

* **`control_flow/`:** This subdirectory contains examples of control flow statements used to make decisions and repeat blocks of code.
    * **`control_flow/if_else.c`:** Demonstrates the use of `if`, `else if`, and `else` statements for conditional execution of code blocks.
    * **`control_flow/loops.c`:**  Showcases different types of loops in C:
        * `for` loop: Used for iterating a specific number of times.
        * `while` loop: Used for repeating a block of code as long as a condition is true.
        * `do-while` loop: Similar to `while`, but the code block is executed at least once.

**Key Concepts Covered:**

* **Data Types:** Understanding the different types of data that C can handle and how to choose the appropriate type for your variables.
* **Variables:** Declaring and initializing variables to store data.
* **Operators:** Using operators to perform calculations, comparisons, and logical operations.
* **Control Flow:**  Controlling the order in which statements are executed using conditional statements and loops.
* **Basic Input/Output (Potentially):** While not explicitly a separate file here, these examples might include basic input and output using functions like `printf()` for output.

**How to Run the Code:**

To compile and run the C code in this directory:

1. **Save the `.c` files** to your local machine.
2. **Open a terminal or command prompt.**
3. **Navigate to the directory** where you saved the files using the `cd` command.
4. **Compile a file using a C compiler (like GCC):**
   ```bash
   gcc [filename].c -o [executable_name]
5. **5. Run the executable:**
  ```bash
  ./[executable_name]
