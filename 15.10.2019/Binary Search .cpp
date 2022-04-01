#include<iostream>
//#include<cstring>
//#include<cstdio>

int main()
{
    int ITEM,n,DATA[1000],BEG,MID,END,LOC;
    std::cout<<"HOW MANY NUMBERS DO YOU HAVE : ";
    //scanf("%d",&n);
    std::cin>>n;
    std::cout<<"ENTER NUMBERS SORTED IN INCREASING ORDER...\n";
    for(int i=0; i<n; i++)
        //scanf("%d",&DATA[i]);
        std::cin>>DATA[i];
    std::cout<<"ENTER THE NUMBER YOU WANT TO SEARCH : ";
    //scanf("%d",&ITEM);
    std::cin>>ITEM;
    BEG=0,END=n-1,MID=(BEG+END)/2;
    while(BEG<=END&&DATA[MID]!=ITEM)
    {
        if(ITEM<DATA[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=(BEG+END)/2;
    }
    if(DATA[MID]==ITEM)
        LOC=MID;
    else
        LOC=NULL;
    //printf("%d",LOC);
    if(LOC==NULL)
        std::cout<<ITEM<<" DOES NOT BELONG TO DATA.";
    else
        std::cout<<ITEM<<" IS FOUND IN LOCATION LOC = "<<LOC+1;
}
