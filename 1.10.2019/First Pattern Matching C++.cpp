#include<iostream>
#include<cstring>
#include<cstdio>
int main()
{
    int MAX,k=0,S,R,L,INDEX=-1;
    char P[1000],T[1000];
    std::cout<<"Enter a Text: ";
    gets(T);
    S=strlen(T);
    std::cout<<"Enter a Pattern: ";
    gets(P);
    R=strlen(P);
    MAX=S-R+1;
    while(k<MAX)
    {
        for(L=0; L<R; L++)
        {
            if(P[L]!=T[k+L])
                break;
        }
        if(L==R)
        {
            INDEX=k;
            break;
        }
        k=k+1;
    }
    if(INDEX==-1)
        std::cout<<"Pattern is not found in the given text.";
    else
        std::cout<<"Pattern is found at: "<<INDEX;
}
