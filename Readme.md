# C Programming Cheat Sheet

## Basic Syntax and Structure

### Hello World Program
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## Data Types

### Primitive Types
- `int`: Integer numbers
  ```c
  int age = 25;           // Standard integer
  unsigned int count = 50; // Non-negative integers only
  ```

- `float`: Floating-point numbers
  ```c
  float price = 19.99;
  ```

- `double`: Double-precision floating-point
  ```c
  double precision = 3.14159265359;
  ```

- `char`: Single character
  ```c
  char grade = 'A';
  ```

- `_Bool` or `bool` (with `<stdbool.h>`): Boolean values
  ```c
  #include <stdbool.h>
  bool isTrue = true;
  ```

### Type Modifiers
- `short`, `long`, `signed`, `unsigned`
  ```c
  short int smallNum = 32767;
  long int bigNum = 2147483647L;
  unsigned long long hugeNum = 18446744073709551615ULL;
  ```

## Variables and Constants

### Variable Declaration
```c
int x;              // Declaration
int y = 10;         // Initialization
const float PI = 3.14159; // Constant
```

## Operators

### Arithmetic Operators
```c
int a = 10, b = 5;
int sum = a + b;        // Addition
int diff = a - b;       // Subtraction
int prod = a * b;       // Multiplication
int div = a / b;        // Division
int mod = a % b;        // Modulus
```

### Comparison Operators
```c
a == b  // Equal to
a != b  // Not equal to
a > b   // Greater than
a < b   // Less than
a >= b  // Greater than or equal to
a <= b  // Less than or equal to
```

### Logical Operators
```c
&&  // Logical AND
||  // Logical OR
!   // Logical NOT
```

## Control Structures

### If-Else Statements
```c
if (condition) {
    // Code if true
} else if (another_condition) {
    // Alternative condition
} else {
    // Default code
}
```

### Switch Statement
```c
switch (variable) {
    case 1:
        // Code for case 1
        break;
    case 2:
        // Code for case 2
        break;
    default:
        // Code if no cases match
}
```

### Loops

#### For Loop
```c
for (initialization; condition; increment/decrement) {
    // Loop body
}

// Example
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

#### While Loop
```c
while (condition) {
    // Loop body
}
```

#### Do-While Loop
```c
do {
    // Loop body
} while (condition);
```

## Arrays

### Declaration and Initialization
```c
int numbers[5];                     // Uninitialized array
int scores[5] = {10, 20, 30, 40, 50}; // Initialized array
char name[] = "Hello";               // String (character array)
```

### Multidimensional Arrays
```c
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

## Pointers

### Basic Pointer Operations
```c
int x = 10;
int *ptr = &x;     // Pointer declaration
printf("%d", *ptr);// Dereference pointer
```

### Dynamic Memory Allocation
```c
#include <stdlib.h>

int *arr = (int*)malloc(5 * sizeof(int)); // Allocate memory
free(arr);                                // Free memory
```

## Functions

### Function Declaration
```c
// Function prototype
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Function Pointers
```c
int (*funcPtr)(int, int) = &add;
int result = funcPtr(5, 3);
```

## Structures

### Defining and Using Structures
```c
struct Person {
    char name[50];
    int age;
    float height;
};

struct Person p1 = {"John", 25, 1.75};
```

### Typedef for Structures
```c
typedef struct {
    int x;
    int y;
} Point;

Point p = {10, 20};
```

## File Handling

### Basic File Operations
```c
#include <stdio.h>

FILE *file = fopen("example.txt", "r");  // Open for reading
// File operations
fclose(file);                            // Close file
```

## Preprocessor Directives

### Common Preprocessor Macros
```c
#define PI 3.14159
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#include <stdio.h>
```

## Error Handling

### Basic Error Checking
```c
#include <errno.h>

if (some_function() == -1) {
    perror("Error message");
    fprintf(stderr, "Error number: %d\n", errno);
}
```

## Key C Programming Tips
- Always initialize variables
- Be careful with memory management
- Use `const` for values that shouldn't change
- Check array bounds
- Use meaningful variable names
- Comment your code
- Handle potential errors

## Compilation
```bash
# Compile a C program
gcc program.c -o program

# Compile with warnings
gcc -Wall program.c -o program
```

# C Programming: Definitions and File Handling

## Definitions in C

### Macro Definitions
```c
// Simple constant definition
#define PI 3.14159
#define MAX_SIZE 100

// Functional macro definition
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Example usage
int area = SQUARE(5);      // Expands to ((5) * (5))
int largest = MAX(10, 20); // Expands to 20
```

### Typedef Definitions
```c
// Basic type aliasing
typedef int Integer;
typedef unsigned long ULong;

// Struct type definition
typedef struct {
    char name[50];
    int age;
} Person;

// Function pointer type definition
typedef int (*MathOperation)(int, int);

// Example usage
Person student = {"John", 25};
MathOperation add = &addFunction;
```

### Enum Definitions
```c
// Simple enum
enum Days {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Enum with explicit values
enum Months {
    JAN = 1,
    FEB = 2,
    MAR = 3,
    APR = 4,
    MAY = 5
};

// Using enums
enum Days today = WEDNESDAY;
enum Months birthMonth = MAR;
```

## File Handling in C

### File Handling Basics
```c
#include <stdio.h>

// File Pointer Declaration
FILE *filePtr;

// Opening Files
// Modes:
// "r" - read
// "w" - write (creates or truncates)
// "a" - append
// "r+" - read and write
// "w+" - read and write (creates or truncates)
// "a+" - read and append

// Opening a file for reading
FILE *readFile = fopen("input.txt", "r");
if (readFile == NULL) {
    perror("Error opening file");
    return 1;
}

// Opening a file for writing
FILE *writeFile = fopen("output.txt", "w");
if (writeFile == NULL) {
    perror("Error creating file");
    return 1;
}
```

### Reading from Files

#### Reading Characters
```c
// Read a single character
char ch;
ch = fgetc(readFile);

// Read until end of file
while ((ch = fgetc(readFile)) != EOF) {
    printf("%c", ch);
}

// Reset file pointer to beginning
rewind(readFile);
```

#### Reading Strings
```c
// Read a line of text
char buffer[100];
while (fgets(buffer, sizeof(buffer), readFile) != NULL) {
    printf("%s", buffer);
}

// Reset file pointer
rewind(readFile);
```

#### Reading Formatted Input
```c
// Read formatted data
int age;
char name[50];
fscanf(readFile, "%d %s", &age, name);
```

### Writing to Files

#### Writing Characters
```c
// Write a single character
fputc('A', writeFile);

// Write a string
fputs("Hello, File!", writeFile);
```

#### Writing Formatted Output
```c
// Write formatted data
int age = 25;
char name[] = "John";
fprintf(writeFile, "Name: %s, Age: %d\n", name, age);
```

### File Position Functions
```c
// Get current file position
long position = ftell(readFile);

// Move file pointer
// SEEK_SET: Beginning of file
// SEEK_CUR: Current position
// SEEK_END: End of file
fseek(readFile, 0, SEEK_SET);  // Move to beginning
fseek(readFile, 10, SEEK_CUR); // Move 10 bytes from current position
```

### Closing Files
```c
// Always close files after use
fclose(readFile);
fclose(writeFile);
```

### Error Handling in File Operations
```c
#include <errno.h>

FILE *file = fopen("nonexistent.txt", "r");
if (file == NULL) {
    // Print system error message
    perror("Error opening file");

    // Print error number
    printf("Error number: %d\n", errno);

    // Possible error handling
    switch(errno) {
        case ENOENT:
            printf("File does not exist\n");
            break;
        case EACCES:
            printf("Permission denied\n");
            break;
        default:
            printf("Unknown error\n");
    }
}
```

### Binary File Handling
```c
// Writing binary data
struct Student {
    int id;
    char name[50];
    float gpa;
};

struct Student student = {1, "John", 3.5};

// Open binary file for writing
FILE *binaryFile = fopen("students.bin", "wb");
fwrite(&student, sizeof(struct Student), 1, binaryFile);
fclose(binaryFile);

// Reading binary data
struct Student readStudent;
FILE *readBinaryFile = fopen("students.bin", "rb");
fread(&readStudent, sizeof(struct Student), 1, readBinaryFile);
fclose(readBinaryFile);
```

## Best Practices
1. Always check if file operations are successful
2. Close files immediately after use
3. Use appropriate file modes
4. Handle potential errors
5. Be cautious with buffer sizes
6. Use `fgets()` instead of `gets()` for safer input
7. Verify file contents after writing

## Common File Handling Errors
- File not found
- Permission denied
- Disk full
- Unexpected end of file
- Buffer overflow
