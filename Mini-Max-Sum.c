#include <stdio.h>
int main() 
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++) 
    {
        scanf("%d",&a[i]);
        sum=sum+a[i]; 
    }
    int min=a[0];
    int max=a[0];
    for(i=1;i<5;i++) 
    {
        if(a[i]<min) 
        {
            min=a[i];
        }
        if(a[i]>max)
         {
            max=a[i];
        }
    }
    int min_sum=sum-max;
    int max_sum=sum-min;
    printf("%d %d", min_sum, max_sum);
    return 0;
}
