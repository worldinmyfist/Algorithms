#include<stdio.h>

int count;

void merge(int arr[],int l,int m,int r)
{
    int i,j,k,a;
    int x = m-l+1;
    int y = r-m;
    int left[x],right[y];

    for(i=0;i<x;i++)
    {
        left[i] = arr[l+i];
    }

    for(i=0;i<y;i++)
    {
        right[i] = arr[m+1+i];
    }

    i=0;
    j=0;
    k=l;

    while(i<x && j<y)
    {
        if(left[i]<=right[j])
        {
            arr[k] = left[i];
            i++;

        }

        else{
            arr[k] = right[j];
            j++;

        }

        k++;
    }

    while(i<x)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<y)
    {
        arr[k] = right[j];
        j++;
        k++;
    }

}

void sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main()
{
    int a,n,k;
    scanf("%d",&n);
    int arr[n];

    for(a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);
    }

    sort(arr,0,n-1);

    for(a=0;a<n;a++)
    {
        printf("%d ",arr[a]);
    }

    printf("\n");
}
