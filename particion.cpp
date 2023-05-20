#include <iostream>

#define MAX 100
void leerMat(int cifras[], int mat[MAX][MAX], int m, int n) {
  for (int s=0;s<m;s++){
    mat[s][n]=0;
  }
  for (int j=n-1;j>=0;j--){
    mat[0][j]=1;
  }
	for (int j=n-1;j>=0;j--) {
		for (int s=1;s<m;s++) {
			if(cifras[j]>s){
        mat[s][j]=mat[s][j+1];
      }
      if(cifras[j]<=s){
        mat[s][j]=mat[s][j+1] | mat[s-cifras[j]][j+1];
      }
		}
	}
  for (int j=0;j<n;j++) {
		for (int s=0;s<m;s++) {
      printf("%2d",mat[j][s]);
		}
		printf("\n");
  }
}

int main(void) {
	int matriz[MAX][MAX];
	int m,n,respuesta;
  int cifras[]={1,20,3,9,2,11,4};
	leerMat(cifras,matriz,25,7);

}
