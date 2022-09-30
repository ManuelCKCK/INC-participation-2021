#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int o1[n+1] = {0};
    int o2[n+1] = {0};
    for(int i=0;i<n;i++)
    {
        int global = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i] > global)
            {
                global = arr[j][i];
                ++o1[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int global = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] > global)
            {
                global = arr[i][j];
                ++o2[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",o1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",o2[i]);
    }
}
