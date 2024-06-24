#include<stdio.h>

int main()
{
 int a[3][3],i,j;
 printf("Enter the value in matrix \n");
 for(i=0;i<3;i++)
 { 
    for(j=0;j<3;j++)
    {
 	printf("Enter the Elements ");
 	scanf("%d",&a[i][j]) ;
    }
} 
  printf("Matrix\n");
 for(i=0;i<3;i++)
 { 
     printf("\n");
    for(j=0;j<3;j++)
    {
 	printf(" %d ",a[i][j]) ;
    }
} 

 printf("\n Transpose of Matrix\n");
 for(i=0;i<3;i++)
 { 
     printf("\n");
    for(j=0;j<3;j++)
    {
 	printf(" %d ",a[j][i]) ;
    }
} 
return 0;
}
