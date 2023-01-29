#inlcude<stdio.h>

void main()
{
    int mat[4][4];
    int i,j,sum=0,sumd1=0,sumd2=0;

    printf("enter the elements of a 4x4 matrix: \n");   //user input elements of a 4x4 matrix
    for(i=0;i<4;i++)
    {
            for(j=0;j<4;j++)
            {
                scanf("%d",&mat[i][j]);
            }
    }
    for(i=0 ; i<4; i++)  // loop for sum of all elements
    {
        for(j=0;j<4;j++)
        {
            sum+=mat[i][j];
        }
    }
    
    for(i=0;i<4;i++)   //loop for the sum of diagomals
    {
        sumd1+= mat[i][i];  //sum of main diagonal
        sumd2+=mat[i][3-i]; //sum of second diagonal       
    }

    printf("the given matrix:\n");     
    for(i=0;i,4;j++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    printf("the sum of elements of the matrix=%d\n the sum of the elements of frist diagonal=%d\n the sum of elements of the second diagonal=%d",
    sum,sumd1sumd2);

}