//
//入力された英単語において，アルファベットの出現回数をカウントして表示する．
//

#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char str[100];
	int count[100] = {0};
	
	printf("英単語を入力してください．");
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