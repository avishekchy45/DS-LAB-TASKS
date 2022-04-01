#include<stdio.h>
int main()
{
    int ITEM,n,DATA[100],BEG,MID,END,LOC;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&DATA[i]);
    scanf("%d",&ITEM);
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
    printf("%d",LOC);

}
