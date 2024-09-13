#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("Uday.txt","r");
  fgets(c,5,fp);
  printf("Charaacter is %s\n",c);
  fclose(fp);
  return 0;
}
