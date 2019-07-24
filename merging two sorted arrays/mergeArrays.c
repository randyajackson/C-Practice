#include <stdio.h>


int main(void)
{
    int pSize;
    int qSize;

    printf("Enter the size of array 1:");
    scanf("%d", &pSize);

    printf("Enter the size of array 2:");
    scanf("%d", &qSize);

    int p[pSize];
    int q[qSize];

    for(int i = 0; i < pSize; i++)
    {
        printf("Enter element %d in Array 1: ", i);
        scanf("%d", &p[i]);
        printf("\n");
    }

    for(int i = 0; i < qSize; i++)
    {
        printf("Enter element %d in Array 2: ", i);
        scanf("%d", &q[i]);
        printf("\n");
    }

    int r[pSize + qSize];

    int count = 0;

    int pCursor = 0;
    int qCursor = 0;

    while( count < (pSize + qSize) )
    {
        if(qCursor > (qSize - 1))
        {
            for(int i = pCursor; i < pSize; i++)
            {
                r[count] = p[i];
                count++;
            }
        }
        else if(pCursor > (pSize - 1))
        {
            for(int i = qCursor; i < qSize; i++)
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

    for(int i = 0; i < (qSize + pSize); i++)
        printf("%d ", r[i]);

    scanf("%u");

   return 0;
}