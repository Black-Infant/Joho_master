//
//���͂��ꂽ�p�P��ɂ����āC�A���t�@�x�b�g�̏o���񐔂��J�E���g���ĕ\������D
//

#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char str[100];
	int count[100] = {0};
	
	printf("�p�P�����͂��Ă��������D");
	scanf("%s", str);
		
	for(int i=0;i<strlen(str);i++){
		if(('A'<=str[i] && str[i]<='Z') || ('a'<=str[i] && str[i]<='z')){
			count[str[i] - 'A']++;
		}
	}
	
	for(int i=0;i<100;i++){
		if(count[i]!=0){
			printf("%c : %d\n", 'A'+i, count[i]);
		}
	}
}