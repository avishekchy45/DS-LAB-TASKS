#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i]+arr[j]==10)
                printf("arr[%d] + arr[%d] = 10 \n",i,j);
        }
    }
}
