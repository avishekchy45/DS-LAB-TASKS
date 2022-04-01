#include<stdio.h>
int sum=0;
fact();
reverse();
main()
{
    int num;
    scanf("%d",&num);
    reverse(num);
    if(sum==num)
        printf("%d is a Strong Number.\n",num);
    else
        printf("%d is not a Strong Number.\n",num);
}
int fact(int num)
{
    int f=1;
    for(int i=num; i>1; i--)
        f*=i;
    sum+=f;
    return sum;
}
int reverse(int num)
{
    int div,rem;
    for(int i=0; div!=0; i++)
    {
        div=num/10;
        rem=num%10;
        num=div;
        fact(rem);
    }
}
