#include<stdio.h>
int main()
{
    int num,max_num=0,min_num=0,i,vote1,vote2,m;
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
}
