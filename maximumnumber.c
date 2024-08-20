#include <stdio.h>
 
int largest(int arr[], int size)
{
    int i;
 
    int max = arr[0];
 
		 for (i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
int main()
{
    int i,arr[20],size;// = { 10, 324, 45, 90, 9808 };
    printf("Enter number of elements you wish to enter: ");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printf("Largest in given array is %d", largest(arr,size));
    return 0;
}
