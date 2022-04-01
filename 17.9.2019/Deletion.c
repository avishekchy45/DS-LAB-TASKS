#include<stdio.h>
main()
{
    char txt[1000],dest[1000];
    int pos,len,i,j;
    printf("Enter the Text: ");
    gets(txt);
    printf("Enter the Position: ");
    scanf("%d",&pos);
    printf("Enter the Length: ");
    scanf("%d",&len);
    for(i=0,j=0; txt[j]!='\0'; i++,j++)
    {
        if(i==(pos-1))
        {
            for(; i<pos+len-1; i++)
            {
            }
        }
        dest[j]=txt[i];
    }
    printf("The string after deletion : ");
    puts(dest);
}
