#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char *name;
  name=calloc(1,1);
  name=realloc(name,20);
  strcpy(name,"Uday");
  printf("%s\n",name);
  free(name);
}