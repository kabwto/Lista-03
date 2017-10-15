#include<stdio.h>

int main()
{
    int i, j, n;
    float temp, median;

    scanf("%d", &n);

    float x[n];
    for(i = 1; i <= n; ++i){
        scanf("%f", &x[i]);
    }

    for(i = 1; i <= n; ++i){
        for(j = i + 1; j <= n; ++j){
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    if(n % 2 == 0){
        median = (x[n / 2] + x[n / 2 + 1]) / 2;
    }
    else{
        median = x[n / 2 + 1];
    }

    printf("%2.2f\n", median);

    return 0;
}
