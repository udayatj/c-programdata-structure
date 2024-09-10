#include<stdio.h>
int main()
{
  int i=1,n,factorial=1;
  printf("enter the number:");
  scanf("%d",&n);
  do{
    factorial=factorial*i;
    i++;
  }while(i<=n);
  printf("factorial of %d is %d",n,factorial);
}