#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALE 101
#define MAX 5

main(){
  int c, l, l1, c1, m[MAX][MAX], cont, x = 1, mod;
  srand(time(NULL));
  for(l = 0; l < MAX; l++){
    cont = x;
    for(c = cont; c < MAX; c++){
      do{
        m[l][c] = rand() % ALE;
      }while(m[l][c] % 2 != 0);
    }
    x++;
  }
  x = 0;
  for(l = 1; l < MAX; l++){
    for(c = 0; c <= x; c++){
      do{
        m[l][c] = rand() % ALE;
      }while(m[l][c] % 2 == 0);
    }
    x++;
  }
  for(l = 0; l < MAX; l++){
    do{
      mod = 0;
      m[l][l] = rand() % ALE;
      for(cont = 1; cont <= m[l][l]; cont++){
        x = m[l][l] % cont;
        if(x == 0){
          mod++;
        }
      }
    }while(mod != 2);
  }
  printf("\nMatriz: \n");
  for (l = 0; l < MAX; l++) {
    for (c = 0; c < MAX; c++) {
     if (c < MAX - 1) {
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}