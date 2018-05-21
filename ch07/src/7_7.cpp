//
//3つの英単語を読み込んで，すべての文字を大文字にして表示する．
//さらに大文字にした英単語を辞書順に並び替える．
//

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];
	int number = 0;
	
	printf("英単語1を入力してください．");
	scanf("%s", str1);
	printf("英単語2を入力してください．");
	scanf("%s", str2);
	printf("英単語3を入力してください．");
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
	
	printf("大文字 : %s %s %s\n", str1, str2, str3);
	
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
		case 6 : printf("辞書順 : %s %s %s\n", str2, str1, str3); break;
		case 5 : printf("辞書順 : %s %s %s\n", str2, str3, str1); break;
		case 4 : printf("辞書順 : %s %s %s\n", str3, str2, str1); break;
		case 3 : printf("辞書順 : %s %s %s\n", str1, str2, str3); break;
		case 2 : printf("辞書順 : %s %s %s\n", str1, str3, str2); break;
		case 1 : printf("辞書順 : %s %s %s\n", str3, str1, str2); break;
	}
}