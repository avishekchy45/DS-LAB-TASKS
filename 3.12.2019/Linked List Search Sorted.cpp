//#include<bits/stdc++.h>
//#inclue<math.h>
#include<iostream>
using namespace std;
main()
{
    int info[100],link[100],start,item,loc=-1,n;
    cout<<"Enter Number of Nodes : ";
    cin>>n;
    cout<<"Enter the information of INFO list : \n";
    for(int i=0; i<n; i++)
        cin>>info[i];
    cout<<"Enter the information of LINK list : \n";
    for(int i=0; i<n; i++)
        cin>>link[i];
    cout<<"Diagram according to given information\n";
    cout<<"Node no  INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<info[i] <<"\t "<<link[i] <<"\n";
    cout<<"Enter the starting node and item to search\n";
    cin>>start>>item;
    int ptr=start;
    while(ptr!=-1)
    {
        if(item>info[ptr])
        {
            ptr=link[ptr];
        }
        else if(item==info[ptr])
        {
            loc=ptr;
            break;
        }
        else
        {
            loc=-1;
            break;
        }
    }
    if(loc==-1)
        cout<<"NOT FOUND...\n";
    else
        cout<<"FOUND AT "<<loc<<endl;
    return 0;
}
