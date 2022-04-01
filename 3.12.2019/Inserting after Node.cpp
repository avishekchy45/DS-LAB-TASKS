#include<iostream>
using namespace std;
main()
{
    int INFO[100],LINK[100],START,AVAIL,ITEM,NEW,loc,n;
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
    cout<<"Enter the starting node,available node,location and ITEM to insert\n";
    cin>>START>>AVAIL>>loc>>ITEM;
    if(AVAIL==-1)
        cout<<"OVERFLOW";
    else
    {
        NEW=AVAIL;
        AVAIL=LINK[AVAIL];
        INFO[NEW]=ITEM;
        if(loc==-1)
            LINK[NEW]=START,START=NEW;
        else
            LINK[NEW]=LINK[loc],LINK[loc]=NEW;
    }
    cout<<"Updated list according to given information\n";
    cout<<"Node no  INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<endl;
    cout<<"Updated available Node :"<<AVAIL;
}
