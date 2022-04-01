//#include<stdio.h>
#include<iostream>
main()
{
    int N;
    //scanf("%d",&N);
    std::cout<<"HOW MANY NUMBERS DO YOU HAVE : ";
    std::cin>>N ;
    int A[N+1];
    A[0]=-32764;
    std::cout<<"ENTER NUMBERS ...\n";
    for(int i=1; i<=N; i++)
        //scanf("%d",&A[i]);
        std::cin>>A[i];
    std::cout<<"Before Sorting...\n";
    for(int i=1; i<=N; i++)
        //printf("%d ",A[i]);
        std::cout<<A[i]<<" ";
    //printf("\n");
    std::cout<<"\n";
    for(int k=2; k<=N; k++)
    {
        int temp=A[k],ptr=k-1;
        while(temp<A[ptr])
            A[ptr+1]=A[ptr],ptr=ptr-1;
        A[ptr+1]=temp;
    }
    std::cout<<"After Sorting...\n";
    for(int i=1; i<=N; i++)
        //printf("%d ",A[i]);
        std::cout<<A[i]<<" ";
    //printf("\n");
    std::cout<<"\n";
}
