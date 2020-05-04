#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();
int i,j,k,c=0;
int* ptr;
ptr =(int*)malloc(20 * sizeof(int));
printf("enter 20 integer no between 10 to 100\n");
for(i=0;i<20;i++)
{
scanf("%d",&ptr[i]);
}
for(i=0;i<20;i++)
{
for(j=i+1;j<20;j++)
{
if(ptr[i]==ptr[j])
{
ptr[j]=NULL;
k=i;
}
}
ptr[k]=NULL;
}
 for(i=0;i<20;i++)
 {if(ptr[i]!=NULL)

 c++;
 }

printf("unique numbers are\n");
for(i=0;i<c;i++)
{
if(ptr[i]!=NULL)
{
printf("%d\n",ptr[i]);
}
}


getch();
}
