#include <stdio.h>

int main() 
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j, k;

    // Input for matrix a
    printf("Enter nine values for matrix a:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value at a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for matrix b
    printf("Enter nine values for matrix b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value at b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Display matrix a
    printf("Matrix a:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Display matrix b
    printf("Matrix b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Addition of matrices a and b
    printf("Addition of matrices a and b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    // Subtraction of matrices a and b
    printf("Subtraction of matrices a and b:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j] - b[i][j]);
        }
        printf("\n");
    }

    // Transpose of matrix a
    printf("Transpose of matrix a:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    //Multiplication of matrix
    printf("\nMultiplication of matrix a and matrix b\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nResult:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");

//Reverse Diagonal
 printf("Reverse of matrix a:\n");
    for (i = 0; i<3; i++) 
    {
            printf("%d\n", a[i][2-i]);
        }
        printf("\n");
}
}