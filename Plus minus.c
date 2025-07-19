#include <stdio.h>
int main() 
{
    int n;
    int pos=0,neg=0,zero=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
     {
        if(a[i]>0) 
         {
            pos++;
         } 
        else if(a[i]<0)
         {
            neg++;
         } 
        else 
         {
            zero++;
         }
    }
    printf("%f\n", (float)pos / n);
    printf("%f\n", (float)neg / n);
    printf("%f\n", (float)zero / n);
    return 0;
}
