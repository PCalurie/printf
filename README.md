# 0x11. C - printf
![alt txt](https://www.google.com/imgres?imgurl=https%3A%2F%2Fcamo.githubusercontent.com%2F01b0d036be42ff2bdd45896d151802cc5369e04e2091c85e53a0cde1185b2b1b%2F68747470733a2f2f692e6962622e636f2f43366b483942642f53696e2d742d74756c6f2d312e706e67&tbnid=CZh1IQdOYnUYgM&vet=10CAgQxiAoA2oXChMIyJa2tYiCgAMVAAAAAB0AAAAAEAY..i&imgrefurl=https%3A%2F%2Fgithub.com%2Falejogonza%2Fprintf&docid=FFt8fhqx6JubDM&w=1164&h=1004&itg=1&q=printf%20images&ved=0CAgQxiAoA2oXChMIyJa2tYiCgAMVAAAAAB0AAAAAEAY)
## A GUIDE TO THE PROJECT TASKS
[knowledge of bit manipulation](https://medium.com/@wamae-ndiritu/understanding-bits-and-endianness-exploring-binary-manipulation-and-memory-storage-c21f284f892f), memory allocation, ROT13 algorithm and [general understanding of printf function](https://www.academia.edu/10297206/Secrets_of_printf_)
### ptinf
- It allows you to print text and values to the console or other output streams based on a specified format string.
- Format string: The format string is a character string that specifies how the output should be formatted. It consists of plain characters and format specifiers, which start with the '%' character.
	-   `%d` or `%i` for printing integers.
	-   `%f` for printing floating-point numbers.
	-   `%c` for printing single characters.
	-   `%s` for printing strings.
	-   `%p` for printing memory addresses.
	-   `%x` or %X for printing integers in hexadecimal format.
	-   `%o` for printing integers in octal format.
- The printf function returns the number of characters printed (excluding the null-terminating character) or a negative value if an error occurs.
### putchar function
- in the putchar function. write function: write is a system call that writes data to a file descriptor. In this case, the file descriptor 1 is used, which represents the standard output (stdout). The write function takes three arguments: the file descriptor, a pointer to the data to be written, and the number of bytes to write.
### print %X function
- is an implementation of a custom print function `printf_HEX` that is intended to handle the %X format specifier, which is used to print an unsigned integer as a hexadecimal number.
	- It repeatedly divides number to be converted by 16 representing the number of hexadecimal digits needed.
	- After determining the number of digits, the code dynamically allocates an integer array.
- Overall, this implementation calculates and prints the hexadecimal representation of an unsigned integer by using a dynamic array to store the digits and performing the necessary calculations.
### print %b
- is an implementation of a custom print function `printf_bin` that is intended to handle the %b format specifier, which is used to print an unsigned integer as a binary number.
	- The code enters a loop that iterates 32 times, representing the number of bits in an unsigned int.
- Overall, this implementation iterates over the bits of an unsigned int and prints them in binary representation using the putchar function. It ensures that a leading 0 is printed if no significant bits are encountered.
### print %s
- s an implementation of a custom print function `printf_exclusive_string` that is intended to handle the %S format specifier.
	- It checks if the current character `s[i]` has a value less than 32 `(control characters) or greater than or equal to 127.` This check identifies characters that are not printable or outside the ASCII range of visible characters.
	- If the character is not printable or outside the ASCII range, the code prints a backslash `('\\')` followed by the letter `'x'`. This indicates that a hexadecimal escape sequence will be used.
	- The counter variable len is incremented by 2 to account for the additional characters printed `('\\' and 'x').`
	- The character is typecast to an integer `(cast = s[i])` to ensure that it can be passed to the `printf_HEX_aux` function, which expects an int argument.
	- The code checks if the casted value `(cast)` is less than 16. If it is, it means that it is a single-digit value in hexadecimal and a leading zero `('0')` needs to be printed before the hexadecimal representation.
	- The length of the hexadecimal representation is calculated by calling the `printf_HEX_aux` function with cast as the argument. The return value of `printf_HEX_aux` is added to len.
	- If the character is printable and within the ASCII range, it is printed as is using the `_putchar` function, and len is incremented by 1.
- Overall, this implementation prints a string with special handling for characters that are not printable or outside the visible ASCII range. It prints these characters as hexadecimal escape sequences `(\xHH)`, where `HH` represents the hexadecimal value of the character. Printable characters within the visible ASCII range are printed as is. The function returns the length of the printed string.
### print %d and %i
- is an implementation of a custom print function `printf_int` that is intended to handle the %i format specifier, used to print a signed integer.
- Overall, this implementation handles both positive and negative signed integers. It performs digit extraction and printing while considering the sign of the number. The function returns the number of characters printed.
### print %p
- Overall, this implementation handles printing of pointer values. If the pointer is NULL, it prints the string `"(nil)"`. Otherwise, it prints the hexadecimal representation of the pointer value preceded by '0' and `'x'`. The function returns the length of the printed output.
### print %R
- is an implementation of a custom print function `printf_rot13` that is intended to handle the %R format specifier. This format specifier is used to print a string in the ROT13 encryption format.
- Overall, this implementation translates a string to its ROT13 equivalent by matching each character with the corresponding character in the `alpha` array and printing the corresponding character from the `beta` array. Characters that do not have a `ROT13` translation are printed as is. The function returns the number of characters printed.
