#include <stdio.h>


int main(void)
{
    int p[4] = {4,18,56,99};
    int q[5] = {1,9,80,200,220};

    int r[9];

    int count = 0;

    int pCursor = 0;
    int qCursor = 0;

    while( count < 9 )
    {
        if(qCursor > 4)
        {
            for(int i = pCursor; i < 4; i++)
            {
                r[count] = p[i];
                count++;
            }
        }
        else if(pCursor > 3)
        {
            for(int i = qCursor; i < 5; i++)
            {
                r[count] = q[i];
                count++;
            }    
        }
        else
        {
            if(p[pCursor] < q[qCursor])
            {
                r[count] = p[pCursor];
                count++;
                pCursor++;
            }
            else
            {
                r[count] = q[qCursor];
                count++;
                qCursor++;
            }        
        }
        
         
    }

    for(int i = 0; i < 9; i++)
        printf("%d ", r[i]);

    scanf("%u");

   return 0;
}