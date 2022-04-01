#include<stdio.h>
main()
{
    char T[1000],sub[1000];
    int i,l;
    printf("Enter a String: ");
    gets(T);
    printf("Enter initial value: ");
    scanf("%d",&i);
    printf("Enter length: ");
    scanf("%d",&l);
    for(int j=i-1,k=0; j<l+i-1; j++,k++)
        sub[k]=T[j];
    printf("Substring of T: %s",sub);
}
