# Matrix Determinant Calculator

This is a simple C program that calculates the determinant of a square matrix using Gaussian elimination with partial pivoting. It takes user input for the size of the matrix and its elements and then performs the necessary operations to find the determinant.

## Usage

1. **Clone the Repository:**

    ```bash
    git clone git@github.com:Dhru08/Determinant-Finder-of-Matrix.git
    ```

2. **Compile the program:**

    ```bash
    gcc main.c -o determinant
    ```

3. **Run the program:**

    ```bash
    determinant.c
    ```

4. **Follow the on-screen prompts to enter the size of the matrix and its elements.**

5. **The program will calculate and display the determinant of the input matrix.**

## Features

- Allows the user to input the size of the square matrix.
- Accepts user input for each element of the matrix.
- Handles cases where the diagonal element becomes zero by swapping rows.
- Implements Gaussian elimination with partial pivoting to find the determinant.
- Displays the determinant of the matrix.

## Example

```plaintext
Enter the number of the n: 3
Enter the 1 element of 1 row: 2
Enter the 2 element of 1 row: 0
Enter the 3 element of 1 row: 1
Enter the 1 element of 2 row: 0
Enter the 2 element of 2 row: 3
Enter the 3 element of 2 row: 0
Enter the 1 element of 3 row: 1
Enter the 2 element of 3 row: 0
Enter the 3 element of 3 row: 4

Matrix:
2.000000  0.000000  1.000000
0.000000  3.000000  0.000000
1.000000  0.000000  4.000000

Determinant = 24.000000
```

## Acknowledgments

- This code is based on the principles of linear algebra and Gaussian elimination.

Feel free to contribute to this project or use it as a reference for learning and working with matrices in C.
