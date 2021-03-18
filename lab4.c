#include<stdio.h>
int main()
{
    int num,max=0,min=0,i,vote1,vote2,m;
    scanf("%d" ,&num);
    int star[num];
    for(i=0;i<num;i++)
    {
        star[i]=0;
    }
    for(i=0;i<num;i++)
    {
        scanf("%d %d" ,&vote1,&vote2);
        star[vote1-1]=star[vote1-1]+1;
        star[vote2-1]=star[vote2-1]+1;
    }
     max=star[0];
    min=star[0];
    for(i=1;i<num;i++)
    {
        if(max<star[i])
        {
            max=star[i];
        }
        if(min>star[i])
        {
            min=star[i];
        }
    }
    for(i=0;i<num;i++)
    {
        if(max==star[i])
        {
            printf("%d " ,i+1);
        }
        if(min==star[i])
        {
            printf("%d " ,i+1);
        }
    }
    return 0;
}
