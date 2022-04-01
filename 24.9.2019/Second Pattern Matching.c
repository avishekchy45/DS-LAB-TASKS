#include<stdio.h>
main()
{
    char P[100],T[100];
    int i,j,k;
    scanf("%s %s",&P,&T);
    int l1=strlen(P),l2=strlen(T);
    for(i=0; i<l2-l1+1; i++)
    {
        for(j=0,k=i; j<l1; j++,k++)
        {
            if(P[j]!=T[k])
                break;
        }
        if(j==l1)
        {
            printf("%d\n",i+1);
        }
    }
    //puts(P);
    //puts(T);
}
