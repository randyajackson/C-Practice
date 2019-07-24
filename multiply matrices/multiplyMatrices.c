#include <stdio.h>


int main(void)
{
    int m1[2][3];
    int m2[3][4];

    int result[2][4];

    m1[0][0] = 3; m1[0][1] = 9; m1[0][2] = 7;
    m1[1][0] = 1; m1[1][1] = 5; m1[1][2] = 4;
    
    m2[0][0] = 6; m2[0][1] = 2; m2[0][2] = 8; m2[0][3] = 1;
    m2[1][0] = 3; m2[1][1] = 9; m2[1][2] = 4; m2[1][3] = 0;
    m2[2][0] = 5; m2[2][1] = 3; m2[2][2] = 1; m2[2][3] = 3;

    int w,x,y,z;
    int temp = 0;

    //int m1[w][x];
    //int m2[y][z];

    for(w = 0; w < 2; w++)
    {
        for(z = 0; z < 4; z++)
        {    
            for(x = 0, y = 0; x < 3; x++, y++)
            {  
                temp += (m1[w][x] * m2[y][z]);
            }

            result[w][z] = temp;
            temp = 0;
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", result[i][j]);   
        }

        printf("\n");
    }   

   scanf("%u");

   return 0;
}