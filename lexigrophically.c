#include<stdio.h>
#include<string.h>
int main() {
  char str[100],str1[100];
  printf("Enter the name1");
  scanf("%s",str);
  printf("Enter the name2");
  scanf("%s",str1);
  int result = strcmo(str, str1);

  if (result == 0) {
    printf("the strings are equal.\n");
  }else if (result < 0) {
    printf("%s comes before %s lexiographically.\n", str, str1);
  
  }
  else{
    printf("%s comes after %s lexiographically.\n", str, str1);
    
  }
  return 0;
}