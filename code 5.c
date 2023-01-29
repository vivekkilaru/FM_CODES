#include<stdio.h>
#include<conio.h>
void main()
{
    int k,n,i,j,temp,minindex;
    char op;

    printf("enter b for bubble sort and s for sort:");  //user input for type of sorting
    scsanf("%c",&op);

    printf("enter the size of the array:\n");   //user input array size
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements of the array:\n")  //user input for elements of the array
    for(k=0;k<n;k++)
    {
        scanf("%d,"&arr[k]);        
    }
    printf("oringnal array:"\n);   //input array printed
    for (int k=0;k<n;k++)
    {
        printf("%d",arr[k]);
    }
    if(op=='b')
    {
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }

        printf("\nsorted array(bubble sort):\n");
        for(intk=0;k<n;k++)
        {
            printf("%d",arr[k]);
        }
    }
    if(op=='s')
    {
        for(i=0;i<n-1;i++)
        {
            minindex=i;
            for(j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
            }
            temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
        }
        printf("\nsorted array(selection sort):\n");
        for(int k=0;k<n;k++)
        {
            printf("%d",arr[k]);
        }
    }
    else                                         //for command other than s or b
    {
        printf("\n invalid command")
    }

}
