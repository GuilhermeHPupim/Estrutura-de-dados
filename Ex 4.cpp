#include<stdio.h>
#include<string.h>


void inici(int *mat) {
int i;

for(i=0; i < 100; i++) {
  *mat=0;
  mat++;
}
}
void pre(int *mat) {
int i;

for(i=0; i < 100; i++) {
  *mat=99 - i;
  mat++;
}
}
int main() {
int matriz[10][10];
int i, j;

inici(*matriz);
pre(*matriz);
for(i=0; i< 10; i++){
 printf("\n");
 for (j=0; j < 10; j++)
   printf("mat[%d][%d]= %d ", i,j,matriz[i][j]);
}
}
