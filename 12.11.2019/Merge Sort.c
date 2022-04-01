#include<stdio.h>
void sort(int A[],int i,int j);
void merge(int A[],int i1,int j1,int i2,int j2);
int main()
{
    int A[100],n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);
    sort(A,0,n-1);
    for(i=0; i<n; i++)
        printf("%d ",A[i]);
    return 0;
}
void sort(int A[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        sort(A,i,mid);
        sort(A,mid+1,j);
        merge(A,i,mid,mid+1,j);
    }
}

void merge(int A[],int i1,int j1,int i2,int j2)
{
    int temp[50];
    int i,j,k;
    i=i1;
    j=i2;
    k=0;
    while(i<=j1 && j<=j2)
    {
        if(A[i]<A[j])
            temp[k++]=A[i++];
        else
            temp[k++]=A[j++];
    }
    while(i<=j1)
        temp[k++]=A[i++];
    while(j<=j2)
        temp[k++]=A[j++];
    for(i=i1,j=0; i<=j2; i++,j++)
        A[i]=temp[j];
}
