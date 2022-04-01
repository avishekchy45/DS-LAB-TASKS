#include<stdio.h>
main()
{
    char A[3][3],B[3][3],C[3][3];
    int n,c=0,f=0,m=0;
    A[3][3]= {Alice,Ariel,Aurora,Phil,Peter,Olaf,Pheobus,Ruler,Robin};
    B[3][3]= {Bumbi,Belle,Bolt,Mular,Mowgli,Mickey,Silver,Simba,Skitter};
    C[3][3]= {Dumbo,Gemic,Jimmi,Kuzko,Kider,Kenni,Turzan,Tiana,Winnr};
    /*scanf("%d",&n);
    char p[n];
    for(int i=0; i<n; i++)
        scanf("%s",&p[i]);
    for(int l=0; l<n; l++,m++)
    {
        for(int k=0; k<3; k++)
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    if(A[i,j]==p[m])
                        f++;
                }
                if(f==1)
                    m++,break;
            }
            c++;
            if()
            {
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        if(A[i,j]==p[m])
                            c++,f++,break;
                    }
                    if(f==1)
                        break;
                }
            }
            c++;
            if()
            {
                for(int i=0; i<3; i++)
                {
                    for(int j=0; j<3; j++)
                    {
                        if(A[i,j]==p[m])
                            c++,f++,break;
                    }
                    if(f==1)
                        break;
                }
            }
        }
    }*/
    puts(A[0,0]);
}
