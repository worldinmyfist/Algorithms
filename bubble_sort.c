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
    
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
         
            if(arr[j]>arr[j+1])
            {  
             temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
            }
        }
    }
 
    for(i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);
    }
}
