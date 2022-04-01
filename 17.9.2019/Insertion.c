#include<stdio.h>
main()
{
    char txt[1000],str[1000],dest[2000];
    int pos,i,j,k;
    printf("Enter the Text: ");
    gets(txt);
    printf("Enter the Position: ");
    scanf("%d",&pos);
    fflush(stdin);
    printf("Enter the String: ");
    gets(str);
    int l1=strlen(txt),l2=strlen(str);
    for(i=0,j=0; i<l1+l2; i++,j++)
    {
        if(i==(pos-1))
        {
            for(k=0,j=pos-1; k<l2; k++,j++)
            {
                dest[j]=str[k];
            }
        }
        dest[j]=txt[i];
    }
    printf("The string after insertion : ");
    puts(dest);
}

