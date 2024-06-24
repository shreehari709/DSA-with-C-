#include<stdio.h>

int main()
{

    int j,i,arr[10][10];
       printf("Enter elements of matrix :\n"); 
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element -  : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        } 
           printf("Enter elements of matrix 2 :\n"); 
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element -  : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        } 
     
     
 	 int n=4;
 	 switch(n);
 	 case 1:
    printf("\n\nThe Multiplication of a matrix is : ");
      for(i=0;i<3;i++)
	  {
      printf("\n");
      for(j=0;j<3;j++)
	  {
	  	j*j;
	  	i*i;
           printf("%d\t",arr[j][i]);
           
      }	
     }
     break;
     case 2:
     	exit;
return 0;
}