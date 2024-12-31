# ft_printf

## **Description**
The **ft_printf** project is part of the 42 School curriculum. It involves recreating the standard C `printf` function, which is widely used for formatted output. This project aims to deepen understanding of variadic functions, string manipulation, and overall low-level programming concepts.

Our version, `ft_printf`, mimics the behavior of the original `printf`, supporting specific format specifiers while adhering to strict project requirements such as Norminette compliance and no memory leaks.

---

## **What I Did**
1. **Recreated `printf` behavior**:
   - Implemented the following format specifiers:
     - `%c` - Print a single character.
     - `%s` - Print a string.
     - `%p` - Print a pointer address in hexadecimal.
     - `%d` / `%i` - Print a signed integer in decimal.
     - `%u` - Print an unsigned integer in decimal.
     - `%x` / `%X` - Print an unsigned integer in hexadecimal (lowercase/uppercase).
     - `%%` - Print a percent sign.

2. **Handled edge cases**:
   - Properly handled `NULL` for `%s` and `%p`.
   - Managed signed and unsigned integers, including edge values (e.g., `INT_MIN`, `UINT_MAX`).
   - Ensured correct output and return values for all cases.

3. **Memory Management**:
   - Ensured no memory leaks.
   - Followed the Norm rules strictly.

4. **Implemented Variadic Functions**:
   - Used `va_list`, `va_start`, `va_arg`, and `va_end` macros to process variable arguments dynamically.

5. **Created a Makefile**:
   - Includes the rules `all`, `clean`, `fclean`, `re`, and `bonus` for compilation and management.

---

## **What I Learned**

1. **Variadic Functions**:
   - Learned how to handle functions with a variable number of arguments using `va_list` macros.

2. **Formatted Output**:
   - Explored the internal workings of `printf`, including formatting and type conversions.

3. **String and Number Manipulation**:
   - Implemented functions for converting integers to strings (decimal and hexadecimal).
   - Managed edge cases like negative numbers and large unsigned values.

4. **Memory and Resource Management**:
   - Ensured no memory leaks or invalid accesses (e.g., dereferencing `NULL`).

5. **Norm Compliance**:
   - Wrote clean, modular, and well-documented code following the 42 Norm standards.

6. **Testing and Debugging**:
   - Developed thorough test cases to compare `ft_printf` with the original `printf`.
   - Debugged edge cases to ensure 100% functionality.

---

## **Testing**
- Developed test cases to compare `ft_printf` output and return values with `printf`.
- Verified edge cases such as:
  - `NULL` for strings and pointers.
  - Minimum and maximum integer values (`INT_MIN`, `INT_MAX`, `UINT_MAX`).
  - Special cases like zero and negative numbers.

---

## **Conclusion**
The `ft_printf` project was an excellent opportunity to understand the inner workings of the standard `printf` function. It deepened my knowledge of variadic functions, memory management, and formatted output. This experience has significantly improved my C programming skills and my ability to write efficient, modular, and reliable code.

