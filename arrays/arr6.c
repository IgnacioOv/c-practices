/* 6) Dados 2 vectores a y b de longitudes n y m, el primero ordenado ascendente
y  el  segundo  ordenado  descendente,  crear  un  nuevo  vector  c  de  n  +  m
elementos intercalando los elementos de a y b de modo que c quede ordenado
ascendente. */
#include <stdio.h>

#define  M 6
#define  N 5

typedef int vector_t[M];
typedef int vec_t[N];

void ordenar_acendiente(vec_t vec_a, int mf){
  int i, k, aux;
  for (i=1; i<mf;i++){
    aux=vec_a[i];
    k=i-1;
    while  ((k>=0) && (aux < vec_a[k])) {                                                     // y aux este fuera de lugar
      vec_a[k+1] = vec_a[k];
      k--;
    }
    vec_a[k+1]=aux;
  }
}

void ordenar_descendient(vector_t vec_b, int mf){
  int i, k, aux;
  for(i=mf-1; i>=0;i--){
    aux=vec_b[i];
    k=i+1;
    while((k<mf)&& aux<vec_b[k]){
      vec_b[k-1]=vec_b[k];
      k++;
    }
    vec_b[k-1]=aux;
  }
}

void unir_vectores(vec_t vec_a, int n, vector_t vec_b, int m, int vector_unido[N+M]){
  int i, j, h;
  j=m-1;
  h=0;
  i=0;
  while(h<(n+m)){
    if (vec_a[i]<vec_b[j] || j==-1){
      vector_unido[h]=vec_a[i];
      i++;}
    else {
      vector_unido[h]=vec_b[j];
      j--;}
    h++;
  }
}

void mostrar_vector(int vector_unido[N+M], int n, int m){
  for (int i=0; i<n+m; i++)
   printf("El %d numero del vector es %d.\n", i+1, vector_unido[i]);
}

int main(void){
  int vector_unido[N+M];
  vec_t vec_a={1, 5, 11 ,7, 64};
  vector_t vec_b={2, 3, 9, 8, 5, 10};
  ordenar_acendiente( vec_a, N);
  ordenar_descendient( vec_b, M);
  unir_vectores( vec_a, N,  vec_b, M,  vector_unido);
  mostrar_vector( vector_unido, N, M);
  return 0;
}
