#include<stdio.h>

int main()
{
    int i,j,n,temp,alpha;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        temp = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[temp]>arr[j])
            {
                temp = j;
            }
        }

        alpha = arr[temp];
        arr[temp] = arr[i];
        arr[i] = alpha;

    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

