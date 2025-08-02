#include <stdio.h>

int main()
{
    int t, n, x, y, i;
    scanf("%d", &t); // number of test cases

    for (int c = 0; c < t; c++) //c measn cases
    {
        int count = 0;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];
        
        for (i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++)
        {
            if (a[i] >= x && a[i] <= y) 
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
