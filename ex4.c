#include <stdio.h>
#define MAX_SIZE 1000 
 
int main()
{
    int arr[MAX_SIZE]; 
    int i, N;
    scanf("%d", &N);
 
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
        printf("\n");
 
    return 0;
}
