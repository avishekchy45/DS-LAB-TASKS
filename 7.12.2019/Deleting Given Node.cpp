#include<bits/stdc++.h>
using namespace std;
main()
{
    int INFO[100],LINK[100],START,AVAIL,loc=-1,n,locp=-1;
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
    cout<<"Enter the starting node,available node,location and Preceeding Location\n";
    cin>>START>>AVAIL>>loc>>locp;
    /*
    scanf("%d",&loc);
    for(int i=0; i<n; i++)
    {
        if(LINK[i]==loc)
        {
            locp=INFO[loc];
            break;
        }
    }
    printf("%d",locp);
    */
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
