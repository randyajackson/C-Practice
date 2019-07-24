#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int rows;
    int columns;

    bool identity = true;

    printf("Enter how many rows in matrix: ");
    scanf("%d", &rows);

    printf("Enter how many columns in matrix: ");
    scanf("%d", &columns);

    int matrix[rows][columns];

    int zeroCounter = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++) 
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
            if(matrix[i][j] == 0)
                zeroCounter++;

            if(i == j && matrix[i][j] != 1)
                identity = false;

            if(i != j && matrix[i][j] != 0)
                identity = false;    
        }   
    }

    if(zeroCounter > ((rows * columns) / 2))
        printf("The matrix is sparse.\n");
    else
        printf("the matrix is not sparse.\n");

    if(identity)
        printf("The matrix is an identity.");
    else
        printf("The matrix is not an identity.");
    
    
    scanf("%u");

    return 0;
}