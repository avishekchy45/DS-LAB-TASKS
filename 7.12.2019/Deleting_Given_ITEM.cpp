#include<bits/stdc++.h>
int INFO[100],LINK[100],START,ITEM,AVAIL=-1,loc=-1,locp=-1;
int findb();
using namespace std;
main()
{
    int n;
    cout<<"Enter Number of Nodes : ";
    cin>>n;
    cout<<"Enter the information of INFO list : \n";
    for(int i=0; i<n; i++)
        cin>>INFO[i];
    cout<<"Enter the information of LINK list : \n";
    for(int i=0; i<n; i++)
        cin>>LINK[i];
    cout<<"List according to given information\n";
    cout<<"Node no  INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<endl;
    cout<<"Enter the starting node,available node and ITEM to delete\n";
    cin>>START>>AVAIL>>ITEM;
    findb();
    if(loc==-1)
    {
        cout<<"NOT FOUND ITEM";
        return 0;
    }
    if(locp==-1)
        START=LINK[START];
    else
        LINK[locp]=LINK[loc];
    LINK[loc]=AVAIL;
    AVAIL=loc;
    INFO[loc]=-4;
    cout<<"Updated list according to given information\n";
    cout<<"Node no  INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<endl;
    cout<<"Updated available Node :"<<AVAIL;
}

findb()
{
    int save,ptr;
    if(START==-1)
        return loc=-1,locp=-1;
    if(INFO[START]==ITEM)
        return loc=START,locp=-1;
    save=START,ptr=LINK[START];
    while(ptr!=-1)
    {
        if(INFO[ptr]==ITEM)
        {
            loc=ptr,locp=save;
            return loc,locp;
        }
        save=ptr,ptr=LINK[ptr];
    }
}
