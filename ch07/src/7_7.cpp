//
//3�̉p�P���ǂݍ���ŁC���ׂĂ̕�����啶���ɂ��ĕ\������D
//����ɑ啶���ɂ����p�P����������ɕ��ёւ���D
//

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];
	int number = 0;
	
	printf("�p�P��1����͂��Ă��������D");
	scanf("%s", str1);
	printf("�p�P��2����͂��Ă��������D");
	scanf("%s", str2);
	printf("�p�P��3����͂��Ă��������D");
	scanf("%s", str3);
	
	for(int i=0;i<strlen(str1);i++){
		if('a'<=str1[i] && str1[i]<='z'){
			str1[i] = str1[i] - 0x20;
		}
	}
	
	for(int j=0;j<strlen(str2);j++){
		if('a'<=str2[j] && str2[j]<='z'){
			str2[j] = str2[j] - 0x20;
		}
	}
	
	for(int k=0;k<strlen(str3);k++){
		if('a'<=str3[k] && str3[k]<='z'){
			str3[k] = str3[k] - 0x20;
		}
	}
	
	printf("�啶�� : %s %s %s\n", str1, str2, str3);
	
	while(number==0){
		if(strcmp(str1, str2)<0){
			if(strcmp(str1, str3)>0){
				number = 1;
			}
			else{
				if(strcmp(str2, str3)>0){
					number = 2;
				}
				else{
					number = 3;
				}
			}
		}
		else{
			if(strcmp(str2, str3)>0){
				number = 4;;
			}
			else{
				if(strcmp(str1, str3)>0){
					number = 5;
				}
				else{
					number = 6;
				}
			}
		}
	}
	
	switch(number){
		case 6 : printf("������ : %s %s %s\n", str2, str1, str3); break;
		case 5 : printf("������ : %s %s %s\n", str2, str3, str1); break;
		case 4 : printf("������ : %s %s %s\n", str3, str2, str1); break;
		case 3 : printf("������ : %s %s %s\n", str1, str2, str3); break;
		case 2 : printf("������ : %s %s %s\n", str1, str3, str2); break;
		case 1 : printf("������ : %s %s %s\n", str3, str1, str2); break;
	}
}