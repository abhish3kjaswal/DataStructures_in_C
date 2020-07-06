#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],beg,end,n,mid,item,loc;
printf("enter the no of elements:");
scanf("%d",&n);
beg=0;
end=n;
mid=(beg+end)/2;
printf("\n enter the array elements:");
for(int i=0;i<n;i++){
scanf("%d",&a[i]); }
printf("\n the array is:");
for(i=0;i<n;i++){
printf("%d \t",a[i]);
}

printf("\n enter the item to be searched");
scanf("%d",&item);
while((beg<=end) &&  (a[mid]!=item)) {
if(item>a[mid])
{
beg=mid+1;
}
else{
end=mid-1;
}
mid=(beg+mid)/2;
}
if(a[mid]==item)
{
printf("item found at:%d",mid);
}
else{
printf("item not found");
}
getch();
}