#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if(n<=1)
    printf("positive");
  else if(n==0)
    printf("zero");
  else
    printf("negative");
  }
