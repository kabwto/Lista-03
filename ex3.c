#include <stdio.h>
#define LIM 5000
 
int main(){
  int n,i,j;
  int vet[LIM], tmp[LIM];
 
  /*Leitura dos dados do vetor:*/
  scanf("%d", &n);
 
  for(i = 0; i < n; i++)
    scanf("%d", &vet[i]);
 
  j = 0;
  for(i = n-1; i >= 0; i--){
    tmp[j] = vet[i];
    j++;
  }
  for(i = 0; i < n; i++)
    vet[i] = tmp[i];
 
  for(i = 0; i < n; i++)
    printf("%d ",vet[i]);
  printf("\n");
  return 0;
}
