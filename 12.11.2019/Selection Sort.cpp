//#include<stdio.h>
#include<iostream>
main()
{
    int N;
    //scanf("%d",&N);
    std::cout<<"HOW MANY NUMBERS DO YOU HAVE : ";
    std::cin>>N;
    int A[N];
    std::cout<<"ENTER NUMBERS ...\n";
    for(int i=1; i<=N; i++)
        //scanf("%d",&A[i]);
        std::cin>>A[i];
    std::cout<<"Before Sort...\n";
    for(int i=1; i<=N; i++)
        //printf("%d ",A[i]);
        std::cout<<A[i]<<" ";
    //printf("\n");
    std::cout<<"\n";
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
    std::cout<<"Sorted DATA...\n";
    for(int i=1; i<=N; i++)
        //printf("%d ",A[i]);
        std::cout<<A[i]<<" ";
    //printf("\n");
    std::cout<<"\n";
}
