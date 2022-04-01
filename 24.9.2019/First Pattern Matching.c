#include<stdio.h>
main()
{
    char P[100],T[100],C=0;
    scanf("%s %s",&P,&T);
    int l1=strlen(P),l2=strlen(T);
    for(int i=0; i<l2-l1+1; i++)
    {
        for(int j=0,k=i; j<l1; j++,k++)
        {
            C++;
            if(P[j]!=T[k])
                break;
        }
    }
    printf("%d",C);
    //puts(P);
    //puts(T);
}
