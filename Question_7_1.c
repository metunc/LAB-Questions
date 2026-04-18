#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    
    int n,i,j,count=0;

    printf("Enter the length of the array: \n");
    scanf("%d",&n);

    int array[n];

    printf("Enter the elements of the array:\n");
    for (i=0;i<n;i++)
        scanf("%d",&array[i]);

    for (i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(array[j]==array[i])
            break;
        }
    if(i==j)
    count++;
    }
    printf("There are %d distinct elements in array.",count);

    return 0;
}