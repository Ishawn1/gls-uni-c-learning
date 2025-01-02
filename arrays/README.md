# Arrays in C Programming

This directory explores the concept of arrays in C programming, a fundamental data structure for storing collections of elements of the same data type. The examples here demonstrate how to declare, initialize, access, and manipulate arrays in C.

**Overview:**

Arrays provide a way to store multiple values of the same type under a single variable name. This section covers the syntax for declaring and initializing arrays, accessing individual elements using their index, and iterating through arrays to process their contents.

**Files:**

* **`array_declaration.c`:** This file demonstrates different ways to declare and initialize arrays in C:
    * Declaring an array without initializing it.
    * Initializing an array with specific values during declaration.
    * Partially initializing an array.
    * Implicitly sizing an array based on the initializer list.

* **`array_access.c`:** This file focuses on accessing individual elements within an array using their index (position). It showcases:
    * Accessing elements at specific indices.
    * Understanding that array indices start from 0.
    * Potential issues with accessing elements outside the valid index range (array bounds).

* **`array_iteration.c`:** This file demonstrates how to iterate through the elements of an array using loops (primarily the `for` loop). It includes examples of:
    * Iterating through an array to access and print each element.
    * Using the array's size to control the loop.

* **`array_functions.c`:** This file demonstrates how to pass arrays to functions in C. It showcases:
    * Passing an array as an argument to a function.
    * How functions can access and modify array elements passed to them.
    * The importance of passing the array size to the function (as arrays decay to pointers).

**Key Concepts Covered:**

* **Array Declaration:** Understanding the syntax for declaring an array, including specifying the data type and size.
* **Array Initialization:** Learning different ways to initialize array elements.
* **Array Indexing:**  Understanding how to access individual elements using their zero-based index.
* **Array Bounds:** Recognizing the importance of staying within the valid index range of an array to avoid errors.
* **Iterating Through Arrays:** Using loops to process all elements of an array efficiently.
* **Passing Arrays to Functions:**  Understanding how arrays are passed to functions as pointers.
* **Array Size:** Determining the number of elements in an array.

**How to Run the Code:**

To compile and run the C code in this directory:

1. **Save the `.c` files** to your local machine within the `arrays/` directory.
2. **Open a terminal or command prompt.**
3. **Navigate to the `arrays/` directory** within your repository.
4. **Compile a file using a C compiler (like GCC):**
   ```bash
   gcc [filename].c -o [executable_name]
5. **Run the executable:**
   ```bash
   ./[executable_name]
