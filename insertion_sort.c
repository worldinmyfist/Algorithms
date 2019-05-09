#include<stdio.h>

int main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {

            if(arr[j]>arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
