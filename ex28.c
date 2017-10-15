#include <stdio.h>
int main() {
    int q1, q2, i, v1[1005], v2[1005],v3[2010],k;
    int h,j,m,g, a, b;
    i=0;q1=0;q2=0;
    
    scanf("%d%d", &a, &b);
    while(q1!=1001){
      scanf("%i", &q1);
      if(q1!=1001){v1[i]=q1;i++;}
      if (i == a) break;
    }
    for(j=0;j<i;j++){
        v3[j]=v1[j];
    }
    i=0;
    while(q2!=1001){
      scanf("%i", &q2);
      if(q2!=1001){v2[i]=q2;i++;}
      if (i == b) break;
    }
    for(m=0;m<i;m++){
        v3[j]=v2[m]; 
        j++;
    }
    g=0;
    for(m=0;m<j;m++){
        if(v3[m]==0){g=1;}
    }
    for(i=0;i<j;i++){
        for(m=0;m<j;m++){
            if(i != m){             
                if(v3[i] == v3[m]){ 
                    v3[m]=0;        
                }
            }
        }
    }
    for(i=0;i<j-1;i++){   
        for(m=i+1;m<j;m++){
            if( v3[i]>v3[m]){
                h=v3[i];
                v3[i]=v3[m];
                v3[m]=h;
            }
        }
    }
    if(g==1){  
        printf("0 "); 
    }
    for(i=0;i<j;i++){
        if(v3[i] != 0){
            printf("%d\n",v3[i]);
        }
 
    }
    return 0;
}
