#include <stdio.h>

int main()
{
    int i,j;
    int a[i][j];	
    int sum = 0;
    
    printf("enter value for matrix a \n" );
    for(i=0;i<3;i++)   {
    	for(j=0;j<3;j++)	{
		
    	scanf("%d", &a[i][j]);
	}
}
    for(i=0; i<3; i++)
	{
		for(j=0;j<3;j++)		(
        sum += a[i][i];
    			}
}
    
    printf("The sum of the diagonals is: %d", sum);
    
    return 0;
}
