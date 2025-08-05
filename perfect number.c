#include<stdio.h>
int main(){
int num;
printf("enter the number:");
scanf("%d",&num);
int sum=0;
for(int i=0;i<num;i++)
{
if(num%i==0)
{
sum=sum+i;
}
}
if(sum==num)
printf("perfect number");
else
printf("not a perfect number");
return 0;
}
