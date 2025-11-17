/*
 a program to handle Multidimensional arrays and do the following
(a) Declare Matrix A to be of size 3x3
(b) Declare Matrix B to be of size 3x3
(c) Initialize the matrices to the following values A =
(d) Print the contents of Matrix A and Matrix B.
(e) Declare a 3x3 matrix C to hold the sum of the two matrices A and B.
(f) Evaluate C = A + B.
Note: Mathematically if A and B are both m × n matrices, their sum C is given by:
Cij = Aij + Bij
for all i = 1, . . . , m and j = 1, . . . , n.
This means that for every row i and column j, you take the entry from A (which is Aij ) and
add it to the entry from B
(g) Print the contents of the Matrix C.
*/

#include <stdio.h>

int main()
{
    int MatrixA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int MatrixB[3][3] = {
        {3, 2, 1},
        {6, 5, 4},
        {9, 8, 7}};
    int MatrixC[3][3];

    int i, j;

    printf("Matrix A is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i, ", MatrixA[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i, ", MatrixB[i][j]);
        }
        printf("\n");
    }

   
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];
        }
    }
        printf("Matrix C is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i, ", MatrixC[i][j]);
        }
        printf("\n");
    }
}
