#include <stdio.h>
int main(void)
{
  int a, b;
  char oper;
  printf("enter the number 1: ");
  scanf("%d",&a);
  printf("enter the number 2: ");
  scanf("%d",&b);
  printf("enter the operator( +, -, *, /): ");
    scanf(" %c",&oper);
  switch(oper){
   case '+':
    printf("the sum is %d\n",a+b);
    break;
  case '-':
    printf("the subtraction is %d\n",a-b);
    break;
  case '*':
    printf("the multiplication is %d\n",a*b);
    break;
  case '/':
    if (b!=0){
    printf("the division is %d\n",a/b);
    break;}
  }
}