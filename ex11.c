#include <stdio.h>
#define LIM 500
 
int main(){
  int n,i,j, maior = 0, menor;
  int vet[LIM], tmp[LIM];
 
  /*Leitura dos dados do vetor:*/
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%d", &vet[i]);
  for(i = 0; i < n; i++) 
      printf("%d ", vet[i]);
      printf("\n");
      maior = menor = vet[0];
 
  /*Invertendo os dados no vetor:*/
  j = 0;
  for(i = n-1; i >= 0; i--){
    tmp[j] = vet[i];
    j++;
  }
  for(i = 0; i < n; i++)
    vet[i] = tmp[i];
 
  /*Imprimindo o vetor invertido:*/
  for(i = 0; i < n; i++)
    printf("%d ",vet[i]);
  printf("\n");
  for (i = 0; i < n; i++) {
      if(vet[i] > maior) maior = vet[i];
    else if (vet[i] < menor) menor = vet[i];
  }
  printf("%d\n%d\n", maior, menor);
  return 0;
}
