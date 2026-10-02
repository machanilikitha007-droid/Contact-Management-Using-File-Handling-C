# Contact Management Using File Handling in C

## Project Description

A simple C program that demonstrates file handling by storing contact information in a text file. The program accepts a contact name, phone number, and email address and saves the details in `contacts.txt`.

## Features

- Enter contact details
- Store name, phone number, and email
- Create a contact file automatically
- Append multiple contacts
- Use `fprintf()` to write data
- Close the file using `fclose()`

## Technologies Used

- C
- File Handling
- Structures
- `FILE`
- `fopen()`
- `fprintf()`
- `fclose()`

## How to Run

1. Create a file named `contact_management.c`.
2. Compile the program using a C compiler.
3. Run the compiled program.
4. The `contacts.txt` file will be created in the project folder.

Example using GCC:

```bash
gcc contact_management.c -o contact_management
./contact_management

===== Contact Management Using File Handling =====
Enter Contact Name: Likitha
Enter Phone Number: 9876543210
Enter Email: likitha@gmail.com

Contact saved successfully!
Data is stored in contacts.txt

Name: Likitha
Phone: ------------
Email: likitha@gmail.com
-------------------------

Author

M.Likitha
