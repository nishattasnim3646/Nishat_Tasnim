#include<stdio.h>

int main()
{
    int n, n1, n2,s=0;
    scanf("%d", &n);
    n1=n;
    while(n2!=0)
    {
        n2=n1%10;
        n1/=10;
        s=s+n2*n2*n2;
    }
    if(s==n)
        printf("%d is Armstrong.\n",n);
    else
        printf("%d is not Armstrong.\n",n);
    return 0;
}
