#include<stdio.h>
int main()
{
    int n,m,i,j,k,z,a,b,sum,y;
    char A[2];
    scanf("%d %d" ,&n,&m);
    int B[n];
    for(i=0;i<n;i++)
    {
        B[i]=0;
    }
    for(i=0;i<m;i++)
    {
        scanf("%s" ,A);
        if(A[0]=='U')
        {
            scanf("%d %d" ,&y,&z);
            B[y]=z;
        }
        else if(A[0]=='P')
        {
            scanf("%d %d" ,&a,&b);
            sum=B[a];
            for(j=a+1;j<=b;j++)
            {
                if(B[j]>sum)
                {
                    sum=B[j];
                }
            }
            printf("%d\n" ,sum);
        }
    }
    return 0;
        
}
