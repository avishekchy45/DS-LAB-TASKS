#include<stdio.h>
main()
{
    char src1[100],src2[100],dest[200];
    int i,j,k;
    printf("Enter String1: ");
    gets(src1);
    printf("Enter String2: ");
    gets(src2);
    int l1=strlen(src1),l2=strlen(src2);
    //printf("%d %d",l1,l2);
    for(i=0,j=0; i<l1; i++,j++)
        dest[j]=src1[i];
    dest[j]=' ';
    for(i=0,k=j+1; i<l2; i++,k++)
        dest[k]=src2[i];
    puts(dest);
}

