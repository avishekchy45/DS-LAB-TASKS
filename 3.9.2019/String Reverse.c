#include<stdio.h>>
#include<string.h>>
main()
{
    char a[100],a2[100];
    gets(a);
    int l=strlen(a);
    //printf("1%c3\n",a[7]);
    for(int i=0; i<l; i++)
        if(a[i]>=65&&a[i]<=90)
            a[i]+=32;
    for(int i=0; i<l; i++)
        a2[i]=' ';
    int s=0;
    for(int i=0; i<=l; i++)
    {
        if(a[i]==' '||a[i]=='\0')
        {
            for(int j=i-1,k=s; j>=s; j--,k++)
                a2[k]=a[j];
            s=i+1;
        }
    }
    puts(a2);
}
