 #include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[10],num;
    printf("Enter values in array:");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&a[i]) ;
  }
  printf("Enter sum target value:");
  scanf("%d",&num);
  for(i=0;i<5;i++)
  {
    for(int j=i+1;j<5;j++)
    {
      if((a[i]+a[j])==num)
      {
	printf("\nelements at %d and %d forms %d.",i,j,num);
      }
    }
  }
  getch();
}
