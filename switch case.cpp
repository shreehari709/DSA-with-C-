#include<stdio.h>
#include<stdlib.h>
int add(int p,int q)
{
	return(p+q);
}
int sub(int p,int q)
{
	return(p-q);
}
int multi(int p,int q)
{
	return(p+q);
}
int div(int p,int q)
{
	return(p+q);
}
int main()
{
int ch,a,b;
 while(1)
 {
 	
 	printf("1.Addtion\n");
 	printf("2.Subraction\n");
 	printf("3.Multipilcaton\n");
 	printf("4.Division");
 	printf("5.Exit\n");
 	printf("Enter your choose ");
 	printf("%d",&ch);
 	switch(ch)
 	{ 
 	 case 1:
 	 	{
		printf("Enter any two number\n");
 	scanf("%d %d",&a,&b);
   	 		int q=add(a,b);
 	 		printf("Added value=%d",q);
 	 		break;
		  }
	 case 2:
	    {
	    		printf("Enter any two number\n");
 	scanf("%d %d",&a,&b);
   	 		int q=sub(a,b);
 	 		printf("addtracted value=%d",q);
 	 		break;
		   }
		   case 3:
		   {
		   	printf("Enter any two number\n");
		   		scanf("%d %d",&a,&b);
   	 		int q=multi(a,b);
 	 		printf("Multipled value=%d",q);
 	 		break;  
				 }	
				
		case 4:
		{
				printf("Enter any two number\n");
					scanf("%d %d",&a,&b);
			int q=div(a,b);
			
 	 		printf("Divided value=%d",q);
 	 		break;
				   }	
		case 5:
		{
			exit(0);
 	 		break;
					}
		default:
		{
			printf("Wrong choice");
					 }					   	   
	 }
 }
return 0;
}
