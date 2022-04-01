#include<stdio.h>
main()
{
    int N;
    scanf("%d",&N);
    int A[N+1];
    A[0]=-32764;
    for(int i=1; i<=N; i++)
        scanf("%d",&A[i]);
    for(int i=1; i<=N; i++)
        printf("%d ",A[i]);
    printf("\n");
    for(int k=2; k<=N; k++)
    {
        int temp=A[k],ptr=k-1;
        while(temp<A[ptr])
        {
            A[ptr+1]=A[ptr],ptr=ptr-1;
        }
        A[ptr+1]=temp;
    }
    for(int i=1; i<=N; i++)
        printf("%d ",A[i]);
    printf("\n");
}
