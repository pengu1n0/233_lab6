#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum1=0,sum2=0;
    scanf("%d" ,&n);
    char a[n],b[n];
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            sum1++;
        }
        else
        {
            sum2++;
        }
    }
    printf("%d %d" ,sum1,sum2);
    return 0;
}
