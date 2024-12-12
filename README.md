# 📣 ft_printf

💥 **ft_printf** is a recreation of the standard `printf` function in C.  
No more guessing what’s printed—this project ensures precise and flexible formatted output. 🚀

---

## 📖 About the Project

`ft_printf` mimics the behavior of the `printf` function from the C standard library (`<stdio.h>`).  
It supports formatted output with various conversion specifiers and flags.

### Features:
- Handles the following conversion specifiers:
  - `%c` : Single character
  - `%s` : String
  - `%d` or `%i` : Signed integer
  - `%u` : Unsigned integer
  - `%x` or `%X` : Hexadecimal numbers (lowercase or uppercase)
  - `%p` : Pointer address
  - `%%` : Percent symbol
- Supports flags, width, and precision for formatting.

---

## 🚀 How to Use

### Clone the Repository:
1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/ft_printf.git
   cd ft_printf
2. Run the Makefile to compile the library:
    ```bash
    make
    This will create a libftprintf.a file that you can link to your projects.
3. To use the library in your project, compile your program with the following command:
    ```bash
    gcc -Wall -Werror -Wextra main.c -L. -lftprintf -o ft_printf_example

---
## 📚 Testing the Function


  ### Example 1: Basic Test
  
    ft_printf("Welcome to %s!\n", "ft_printf");
    Output:
    Welcome to ft_printf!
  
  ### Example 2: Test with Integers
  
    ft_printf("The number is: %d\n", 42);
    Output:
    The number is: 42
  
  ### Example 3: Test Hexadecimal and Pointers
     
    int num = 255;
    ft_printf("Memory address: %p, Hex value: %x\n", &num, num);
    Output:
    Memory address: 0x7ffee36a7a4, Hex value: ff

## 🛠️ Supported Format Specifiers
      
      | Specifier | Description                          |
      |-----------|--------------------------------------|
      | `%c`      | Prints a single character            |
      | `%s`      | Prints a string                      |
      | `%d/%i`   | Prints a signed integer              |
      | `%u`      | Prints an unsigned integer           |
      | `%x/%X`   | Prints a number in hexadecimal       |
      | `%p`      | Prints a pointer address             |
      | `%%`      | Prints a percent symbol              |

## 🌟 Showcase
    Here’s what ft_printf looks like in action:
    ft_printf("🚀 ft_printf can handle %s, %d, and even %p!\n", "strings", 123, &main);
    Output:
    🚀 ft_printf can handle strings, 123, and even 0x7ffee36a7a4!
    
---

### 🛠️ Development Notes
  ### Files:

        ft_printf.c: Main function logic and format parsing.
        ft_utils.c: Utility functions for output (e.g., number-to-string conversions).
        ft_flags.c: Handles formatting like width and precision.
---
### 👨‍💻 Author
Zoubair Kharbach
💻 C Programming Enthusiast | 🌟 Working hard to perfect the art of ft_printf!

