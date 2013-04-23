#include<stdio.h>
int fact();
void main()
{
int n;
printf("Enter the number n whoose factorial you want to find ");
scanf("%d",&n);
b=fact(n);
printf("Factorial:%d",b);
}
int fact(int a)
{
if(a==0)
  {
  return 1;
  }
else if(a==1)
  {
  return 1;
  }
else if(a>1)
  {
  return a*fact(a-1)
  }
else
  {
  return 0;
  }
}
