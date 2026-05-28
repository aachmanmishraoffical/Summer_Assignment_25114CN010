#include<stdio.h>
int main()
{ int n,i,s=0;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { s=s+i; }
  printf("the sum of first %d natural numbers is %d",n,s);
  return 0;
}