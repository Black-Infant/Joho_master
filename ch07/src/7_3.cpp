//
//2*2行列の各要素を入力して，その逆行列を求める．
//また，内積を計算して単位行列になることを確かめる．
//

#include <stdio.h>

int main(void)
{
	const int N = 2;
	float mat_A[N][N];
	float mat_B[N][N];
	float mat_C[N][N];
	float det;
	float tmp;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("mat_A(%d, %d) = ", i, j);
			scanf("%f", &mat_A[i][j]);
		}
	}
	printf("\n");
	
	printf("mat_A =\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%6.3f ", mat_A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	det = mat_A[0][0] * mat_A[1][1] - mat_A[0][1] * mat_A[1][0];
	
	if(det==0){
		printf("正則ではありません\n");
	}
	else{
		mat_B[0][0] = mat_A[1][1];
		mat_B[0][1] = -mat_A[0][1];
		mat_B[1][0] = -mat_A[1][0];
		mat_B[1][1] = mat_A[0][0];
		
		printf("mat_A^-1 =\n");
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				mat_B[i][j] /= det;
				printf("%6.3f ", mat_B[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("mat_A * mat_A^-1 =\n");
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				for(int k=0;k<N;k++){
					mat_C[i][j] += mat_A[i][k] * mat_B[k][j];
				}
				printf("%6.3f ", mat_C[i][j]);
			}
			printf("\n");
		}
	}
}