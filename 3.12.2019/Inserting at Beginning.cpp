#include<iostream>
using namespace std;
main()
{
    int n,INFO[100],LINK[100],START,AVAIL,ITEM,NEW;
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
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<"\n";
    cout<<"Enter the starting node,available node and ITEM to insert\n";
    cin>>START>>AVAIL>>ITEM;
    if(AVAIL==-1)
        cout<<"OVERFLOW";
    else
    {
        NEW=AVAIL;
        AVAIL=LINK[AVAIL];
        INFO[NEW]=ITEM;
        LINK[NEW]=START;
        START=NEW;
    }
    cout<<"Updated list according to given information\n";
    cout<<"Node no  INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<"\n";
    cout<<"Updated available Node :"<<AVAIL;
}
