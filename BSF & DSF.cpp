#include<stdio.h>
int q[20],top1=-1,front1=-1,rear1=-1,arr[20][20],vis[20],stack1[20];
int deleted();
void add(int item);
void bfs(int s,int n);
void dfs(int s,int n);
void push1(int item);
int pop2();
int main()
{
	int n,i,s,ch,j;
	char c,dummy;
	printf("ENTER THE NUMBER VERTICES ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=n;j++)
		{
			printf("ENTER 1 IF %d HAS A NODE WITH %d ELSE 0 ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("THE ADJACENCY MATRIX IS\n");
	for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
	printf(" %d",arr[i][j]);
}
	printf("\n");
}
do
{
	for(i=1;i<=n;i++)
		vis[i]=0;
		printf("\nMENU");
		printf("\n1.B.F.S");
		printf("\n2.D.F.S");
		printf("\nENTER YOUR CHOICE");
		scanf("%d",&ch);
		printf("ENTER THE SOURCE VERTEX :");
		scanf("%d",&s);
	switch(ch)
{
case 1:bfs(s,n);
break;
case 2:
dfs(s,n);
break;
}
printf("DO U WANT TO CONTINUE(Y/N) ? ");
scanf("%c",&dummy);
scanf("%c",&c);
}while((c=='y')||(c=='Y'));
return 0;
}
//**************BFS(breadth-first search) code**************//
	void bfs(int s,int n)
	{
		int p,i;
		add(s);
		vis[s]=1;
		p=deleted();
		if(p!=0)
		printf(" %d",p);
		while(p!=0)
		{
		for(i=1;i<=n;i++)
		if((arr[p][i]!=0)&&(vis[i]==0))
		{
		add(i);
		vis[i]=1;
		}
		p=deleted();
		if(p!=0)
		printf(" %d ",p);
		}
		for(i=1;i<=n;i++)
		if(vis[i]==0)
		bfs(i,n);
	}
void add(int item)
{
			if(rear1==19)
			printf("QUEUE FULL");
			else
			{
			if(rear1==-1)
			{
			q[++rear1]=item;
			front1++;
			}
			else
			q[++rear1]=item;
			}
			}
			
			int deleted()
			{
			    int k;
			 
			    if ((front1>rear1)||(front1==-1))
			        return (0);
			    else
			        {
			          k=q[front1++];
			            return(k);
			        }
}
//***************DFS(depth-first search) code******************//
	void dfs(int s,int n)
{
		int i,k;
		push1(s);
		vis[s]=1;
		k=pop2();
		if(k!=0)
		printf(" %d ",k);
		while(k!=0)
		{
			for(i=1;i<=n;i++)
			if((arr[k][i]!=0)&&(vis[i]==0))
		{
			push1(i);
			vis[i]=1;
		}
			k=pop2();
			if(k!=0)
			printf(" %d ",k);
		}
			for(i=1;i<=n;i++)
			if(vis[i]==0)
			dfs(i,n);
		}
	void push1(int item)
		{
			if(top1==19)
			printf("stack1 overflow ");
			else
			stack1[++top1]=item;
			}
				int pop2()
				{
					int k;
					if(top1==-1)
					return(0);
					else
				{
				k=stack1[top1--];
				return(k);
		}
}