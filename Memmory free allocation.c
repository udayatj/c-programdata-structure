#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char *name;
  name=malloc(5);
  name=realloc(name,20);
  strcpy(name,"Hello Uday");
  printf("%s\n",name);
  free(name);
}