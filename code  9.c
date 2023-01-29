#inlcude<stdio.h>

void main()
{
    int size;
    int array[size];
    printf("enter the size of the array:");
    scanf("%d",&size);
    printf("enter the element of the array :\n");
    for(int i =0; i< size;i++)
    {
        scanf("%d",array[i]);
    }
    printf("the size of the array is : %d\n",sizeof(array));
}