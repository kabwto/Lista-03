#include <stdio.h>
#define N 100000
#define M 1000
int main () {
	int v[N], t[M];
	int n, i, j, enc, aux = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}
	scanf("%d", &enc);
	for (j = 0; j < enc; j++) {
		scanf("%d", &t[j]);
	}
	for (i = 0; i < enc; i++) {
		aux = 0;
		for (j = 0; j < n; j++) {
			if (t[i] == v[j]) {
				aux++;
			} else {
				aux = aux;
			}
		}
		if (aux == 0) printf("NAO ACHEI\n");
		else printf("ACHEI\n");
	}
	return 0;
}
