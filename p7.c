/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include <stdio.h>
int main()
{
    int i, j, row;
	printf("Enter rows: ");
    scanf("%d", &row);
	for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            // For every odd column print 1
            if(j % 2 == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
		printf("\n");
    }
	return 0;
}
