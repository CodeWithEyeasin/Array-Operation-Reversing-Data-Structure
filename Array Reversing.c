#include<stdio.h>
int main()
{
    int array[100],i,size;
    printf("Enter An Array Size:\n");
    scanf("%d",&size);
    printf("Enter Elements In Array:\n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Array In Reverse Order:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("Array [%d] = %d\n",i,array[i]);
    }


    return 0;
}
