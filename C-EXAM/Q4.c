    // 10101
    //  1010
    //   101
    //    10 
    //     1



#include <stdio.h>

int main()
{
    int i, j, k;

    for(i=5; i>=1; i--)
    {
        // space print
        for(k=1; k<=5-i; k++)
        {
            printf(" ");
        }

        // 10101 pattern
        for(j=1; j<=i; j++)
        {
            if(j%2==1)
                printf("1");
            else
                printf("0");
        }

        printf("\n");
    }

    return 0;
}