#include<stdio.h>

void bubblesort(int arr[],int n);      // funtion declaration
void main()
{
    int i,n;
    printf("enter the size of the array:\n");
    scanf("%d",&n);

    int arr[n];
    pritnf("enter the element of the arraay:\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",& arr[i]);
    }
    printf("original array:\n");
    for(int i=0;i,n;i++)
    {
        printf("%d",arr[i]);
    }

    bubble(arr,n );   // funtion call

    printf("\n sorted array: \n");          //array printed after sorting
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}