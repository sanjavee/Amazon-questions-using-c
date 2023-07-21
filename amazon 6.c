#include<stdio.h>
subs(int a[],int size,int ind,int sol[])
{
    if(ind==size)
    {
        printf("\n");
        for(int i=0;i<size;i++)
        {
            if(sol[i]==1)
            {
                printf(" %d ",a[i]);
            }
        }
    }
    else
    {
        sol[ind]=1;
        subs(a,size,ind+1,sol);
        sol[ind]=0;
        subs(a,size,ind+1,sol);
    }
}

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
int soln[n];
subs(arr,n,0,soln);

}
