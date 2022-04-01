//#include<stdio.h>
#include<iostream>
main()
{
    int n,DATA[100],N,temp;
    //scanf("%d",&n);
    std::cin>>n;
    for(int i=0; i<n; i++)
        //scanf("%d",&DATA[i]);
        std::cin>>DATA[i];
    for(int K=1; K<n; K++)
        {
            int PTR=0;
            while(PTR<(n-K))
            {
                if(DATA[PTR]>DATA[PTR+1])
                    {
                        temp=DATA[PTR+1];
                        DATA[PTR+1]=DATA[PTR];
                        DATA[PTR]=temp;
                    }
                    PTR+=1;
            }
        }
    for(int i=0; i<n; i++)
        //printf("%d ",DATA[i]);
        std::cout<<DATA[i]<<" ";
}
