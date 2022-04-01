#include<stdio.h>
main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=1; i<=N; i++)
        scanf("%d",&A[i]);
    for(int i=1; i<=N; i++)
        printf("%d ",A[i]);
    printf("\n");
    for(int k=1; k<N; k++)
    {
        int min=A[k],loc=k;
        for(int j=k+1; j<=N; j++)
        {
            if(min>A[j])
                min=A[j],loc=j;
        }
        int temp=A[k];
        A[k]=A[loc];
        A[loc]=temp;
    }
    for(int i=1; i<=N; i++)
        printf("%d ",A[i]);
    printf("\n");
}

