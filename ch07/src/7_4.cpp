//
//�z��̊e�v�f��}6_1�Ɏ���7�l�̃e�X�g�̓_���ŏ��������āC���_�̍������ɕ��ׂ�D
//����Ɏ��s��̂悤�ȕ��z�O���t���o�͂���D
//

#include <stdio.h>

int main(void)
{
	const int N = 7;
	const int M = 10;
	int score[N] = {41, 30, 91, 85, 28, 66, 47};
	int tmp;
	int rank[M] = {0};
	
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(score[i] < score[j]){
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
		printf("%3d", score[i]);
	}
	printf("\n\n");
	
	for(int i=0;i<N;i++){
		rank[score[i]/10]++;
	}
	
	printf("���z�O���t\n");
	for(int i=M-1;i>0;i--){
		if(i==M-1){
			printf("%3d�`%3d:", 10*i, 10*(i+1));
			for(int j=0;j<rank[i];j++){
			printf("*");
			}
			printf("\n");
		}
		else if(M-5<i&&i<M-1){
			printf("%3d�`%3d:", 10*i, 10*i+9);
			for(int j=0;j<rank[i];j++){
				printf("*");
			}
			printf("\n");
		}
		else{
			printf("%3d�`%3d:", 0, 10*i+9);
			for(int k=M-5;k>0;k--){
				for(int j=0;j<rank[k];j++){
					printf("*");
				}
			}
			printf("\n");
			break;
		}
	}
}