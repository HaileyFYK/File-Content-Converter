# File Content Converter

### Introduction
This program allows computers to convert capitalize characters into lowercase words, and convert all space to underscore in the file, and store it as a new file.

### Instruction
Users can save any characters, symbols, or numbers in the input file, the program will read the content and convert the content and save to an output file, and the user can see the content that has been converted in the output file. 

### Example
When user put in "ABCD 1234##" in the input file, it comes out as "abcd_1234##" in the output file. Capitalized characters are converted to lowercase, spaces are converted to underscore, while no changes with digits and other symbols. 

### Explanation
* Main file (main.c) allows the program to read the input file and write the output file using pointers.
* Header file (header.h) contains the information about library inclusion, define, struct, type definition, and global variables. 
* Library file (library.c) organizes the code as functions that can easily be reused in the future.
* Input file (input.txt) allows users to store characters to be converted.
* Output file (output.txt) records the converted characters.

### Additional Information
The library file contains more functions other than those used in the main file. 
