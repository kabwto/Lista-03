#include <stdio.h>
#define N 1000
int main () {
	int v[N];
	int n, i, k, cont;
	
	while (n < 1 || n > 1000) {
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	scanf("%d", &k);
	cont = 0;
	for (i = 0; i < n; i++) {
		if (v[i] >= k) cont++;
	}
	printf("%d\n", cont);
	return 0;
}
