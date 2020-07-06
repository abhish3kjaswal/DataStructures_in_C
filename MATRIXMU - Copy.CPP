#include<stdio.h>
#include<conio.h>
void main()
{	
clrscr();
	int a[10][10],b[10][10],res[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter the no of columns and rows of matrix 1:");
	scanf("%d %d",&r1,&c1);
	printf("enter the no of rows and columns of matrix 2:");
	scanf("%d %d",&r2,&c2);
while(c1!=r2)
	{
	printf("error enter rows and columns again multiplication cannot be done \n");
	printf("enter the no of columns and rows of matrix 1:");
	scanf("%d %d",&r1,&c1);
	printf("enter the no of rows and columns of matrix 2:");
	scanf("%d %d",&r2,&c2);
	}

for(i=0;i<r1;i++)
{	for(j=0;j<c1;j++)
	{	
		printf("enter elements :%d%d",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r2;i++)
{	for(j=0;j<c2;j++)
	{	
		printf("enter elements :%d%d",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r1;i++)
{	for(j=0;j<c2;j++)
	{
		res[i][j]=0;
	}
}

for(i=0;i<r1;i++)
{	for(j=0;j<c2;j++)
	{	for(k=0;k<c1;k++)
		{ 
			res[i][j]=res[i][j]+ a[i][k]*b[k][j];
			
		}
	}
}
for(i=0;i<r1;i++)
{	for(j=0;j<c2;j++)
	{
		printf("%d  ",res[i][j]);
		if(j==c2-1)
			{
				printf("\n\n");	
			}
	}
}
getch();
}