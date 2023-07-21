#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int num;
    while(n!=0)
    {
        int sum=0;
        if(n%2==0)
        {
           sum=n/2;
           count++;
           n=sum;
        }
        else
        {
           num=n-1;
           count++;
           n=num;
        }
    }
    printf("%d",count);

    return 0;
}
