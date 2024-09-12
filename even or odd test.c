#include<stdio.h>
void test(){
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  if(num%2==0)
  {
    printf("The number is even");
  }
  else{
    printf("The number is odd");
}
int main(){
  test();
 }
}