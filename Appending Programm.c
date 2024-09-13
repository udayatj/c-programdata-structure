#include<stdio.h>
int main(){
  FILE *fp;
  char c[100];
  fp=fopen("Uday.txt","w");
  fputc('U',fp);
  fputs("day",fp);
  return 0;
}
