#include<stdio.h>
int fact(int x)
{
  if((x==0)||(x==1))
    return 1;
  else
    return x*fact(x-1);
}
int main()
{
int n;
printf("Enter a no : ");
scanf("%d",&n);
printf("The factorial of %d is %d \n",n,fact(n));

return 0;
}
