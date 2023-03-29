#include<stdio.h>
int main()
{
    int a[11]={0,1,2,3,4,5,6,7,8,9,10};
   
   for (int i=0; i<=10; i++)    {
       printf("%d", a[i]);
   }
   for (int i=10;i>=0; i--)
   { printf("\n");
       printf("%d", a[i]);
   }
   return 0;
}
