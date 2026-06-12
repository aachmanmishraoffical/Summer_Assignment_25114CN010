#include<stdio.h>
int main()
{ 
    int n,s=0,d;
    printf("enter  number");
    scanf("%d",&n);
    int p=n;
    while(n>0)
    {d=n%10;
     s=(s*10)+d;
     n=n/10;
    }
    if(s==p)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}