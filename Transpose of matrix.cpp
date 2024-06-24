#include<stdio.h>

int main()
{

    int j,i,arr[10][10];
       printf("Enter elements of matrix :\n"); 
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - A[%d],B[%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        } 
     
 	 printf("\nThe matrix is :\n");
  		for(i=0;i<3;i++)
    		{
      		printf("\n");
      		for(j=0;j<3;j++)
      		{
			  
          	printf("%d\t",arr[i][j]);
    		}   
    }
    printf("\n\nThe transpose of a matrix is : ");
      for(i=0;i<3;i++)
	  {
      printf("\n");
      for(j=0;j<3;j++)
	  {
           printf("%d\t",arr[j][i]);
      }	
     }
return 0;
}