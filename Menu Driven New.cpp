#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int s();
int insert(int a[],int n);
int display(int a[],int n);
int bubbleshort(int a[],int n);
int insertation_short();
int merge_short();
int quick_short();
int selection_short();
int a[]={12,10,19,20},n=4;
int main()
{
 	s();
return 0;
}
int insert(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
	scanf("%d",&a[i]);
    }
    return 0;
}

int display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n%d",a[i]);    
	}
	return 0;            
}

int bubbleshort(int a[], int n)
{
    int i, j,temp;
        	
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
return 0;		
}	

int insertation_short()
{
	
return 0;	
}
int merge_short()
{
	
return 0;	
}
int quick_short()
{
	
return 0;	
}
int selection_short()
{
	
return 0;	
}

int s()
{
	int ch;
 /*printf("Enter the Number of Data Elements\n");
 scanf("%d",&n);*/
 do{
 	printf("\nEnter Your Choice\n");
 	printf("1. Enter the Data Elements\n");
 	printf("2. For Short the Array Element\n");
 	printf("3. Display The Elemnets\n");
 	printf("4. For Exit\n");
 	scanf("%d",&ch);
 	
 	switch(ch)
	 {
 		case 1:
 			{
 			printf("Enter the Array Element\n");
 			insert(a,n);	
			 break;		
		    }
		case 2:
		    {
		    	int x;
 		        printf("Choose the type of Shorting\n");
 		       	printf("1. Bubble short\n");
			   	printf("2. Insertation short\n");
			   	printf("3. Merge Short \n");
			   	printf("4. Quick Short\n");
			   	printf("5. Selection Short\n");
			   	printf("6. Return to main menu\n");
			   	scanf("%d",&x);
			   	
			   switch(x)
			   { 	
			   	case 1:
			   		{
			   			bubbleshort(a,n);
			   			break;
					   }
					   case 2:
					   	{
					   	insertation_short();
					   	break;
						   }
						   case 3:
						   	{
						  	merge_short();
						   	break;
						   }
						   case 4:
						   	{
						   	quick_short();
						   	break;
							   }
							case 5:
							{
								selection_short();
								break;
							   }   
							 case 6:
							 {
								s();
							 	break;
							   }  
				}	
			break;
			}    
 		case 3:
 			{
		 	printf("Displaing the Elements of Array\n");
		 	display(a,n);
		 	break;
		    }
		case 4:
			{
		 	exit(1);
		 	break;
		    }
		default: 
			{
		 	printf("\nInvalid Input\n");
		 	printf("\nPlease Enter the Correct Choice\n");
		 	break;
		    }
	 }
 	}while(ch!=0);
 	return 0;
}