#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
   int pri=0,sec=0;
   for(int i=0;i<n;i++){
    pri+=a[i][i];
    sec+=a[i][n-1-i];
   }
   int diff=abs(pri-sec);
   printf("%d",diff);
}
