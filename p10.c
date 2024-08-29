/*A
  A B
  A B C
  A B C D
  A B C D E*/

#include <stdio.h>

int main()
{
	int i,height,j;

	printf("Enter the height of the pattern: ");
	scanf("%d", &height);

	for(i = 0; i < height; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c ", 'A' + j);
		}
		printf("\n");
	}

	return 0;
}
