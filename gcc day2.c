#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    
   //matrix A 
    printf("enter the elements for a matrix: \n");
    for(i=0;i<3;i++)    {
        for(j=0;j<3;j++)
       
        {
            scanf ("%d", &a[i][j]);
        }
    }
    //matrix B
    printf("enter the element for the b matrix: \n ");
    for(i=0;i<3;i++);{
        for(j=0;j<3;j++) {
            scanf("%d", &b[i][j]);
        }
        }
    //addition of matrix
    printf("addition of the matrix:\n");
    for(i=0;i<3;i++)    {
        for(j=0;j<3;j++)    {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //the print out
    printf("ans is: \n");
    for(i=0;i<3;i++)    {
        for(j=0;j<3;j++)    {
            printf ("%d \n",c[i][j]);
        }
    }
    
    
        
    return 0;    
}
