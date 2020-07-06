#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],n,item;
int loc=0;
printf("enter no if elements:");
scanf("%d",&n);
printf("\n enter elements");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n elements are:");
for(i=0;i<n;i++){
printf("%d\t",a[i]);
}
printf("enter element to be searched:");
scanf("%d",&item);
a[n+1]=item;
while(a[loc]!=item)
{
loc=loc+1;
}
if(loc==n+1){
loc=0;
printf("\nnot found");
}
else{
printf("\nelement found");
}
getch();
}


