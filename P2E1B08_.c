#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){	
	int i,password=2025,inputpassword,ch,b=0,num,j,k,l;/*設立變數*/ 
	char c ,ch1,h;
 	for(i=1; i<=20; i++){/*for迴圈重複印出表情符號直到20次結束*/  
 		printf(" (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)   ⊙⊙⊙ 2025⊙⊙⊙   (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)");
 		printf("\n");
 		} 
	printf("請輸入四個數字的密碼\n");
	printf("提示:2025\n");
	while(1){
	scanf("%d",&inputpassword);
	if(inputpassword==password){
		break;
	}
	if(b>=2){
		return 1;
	}
	else b++; printf("請輸入四個數字的密碼\n");
}
system("PAUSE");/*螢幕畫面暫停，並等待使用者案任意鍵*/ 
	system("CLS");/*清除螢幕*/
	fflush(stdin);
	printf("==========================\n");
	printf("|| a. 畫出直角三角形 ||\n");
	printf("|| b. 顯示乘法表     ||\n");
	printf("|| c. 結束           ||\n");
	printf("==========================\n");
}
