#include <stdio.h>

int x,i,y;
int n[] = {0,1};

void op(opt) {

      if (opt==0) {
		      n[0] =  n[0]+y ; //soma
    }

 else if (opt==1) {

	     n[1] =  n[1]*y ; //Produto
    }}

int main (){


  printf(" defina o tamanho do vetor: ");
  scanf("%i",&x);
  int v[x];


  for ( i = 0; i < x; i++) {
    printf("digite os valores \n");
    scanf("%d", &y);
    op(0,y,n);
    op(1,y,n);
    v[i] = y;
  }

  for ( i = 0; i < x; i++) {
      printf("[%d]", v[i] );
  }

  printf("\n soma %d \n", n[0] );
  printf(" produto %d \n", n[1] );

}
