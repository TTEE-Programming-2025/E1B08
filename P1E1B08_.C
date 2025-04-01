#include<stdio.h>
#include<stdlib.h>
int main(void){	
	int i,password=2025,inputpassword,ch;/*設立變數*/ 
 	for(i=1; i<=20; i++){/*for迴圈重複印出表情符號直到20次結束*/  
 		printf("$$$o(∩_∩)o$$$  <（‵□′）>───Cε(┬_┬)3    ⊙⊙⊙ Welcome⊙⊙⊙   (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)");
 		printf("\n");
 		}
	system("PAUSE");/*螢幕畫面暫停，並等待使用者案任意鍵*/ 
	system("CLS");/*清除螢幕*/ 
	printf("請輸入四個數字的密碼\n");
	scanf("%d",&inputpassword);/*鍵盤輸入密碼*/ 
	if(inputpassword!=password){/*當輸入的密碼不是預設密碼(2025)*/ 
		printf("\a");/*發出警告*/ 
		printf("密碼輸入有誤\n");/*顯示輸入有誤*/ 
		return 0;/*結束程式*/ 
	}
	else printf("歡迎您\n");
	system("pause");/*螢幕畫面暫停，並等待使用者案任意鍵*/ 
	system("CLS");/*清除螢幕*/  
	printf("-⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙-\n");
	printf("⊙ 'A'...'Z' : Uppercase ⊙\n");
	printf("⊙ 'a'...'z' : Lowercase ⊙\n");
	printf("⊙ '0'...'9' : Digit     ⊙\n");
	printf("⊙ Otherwise : Your name ⊙\n");
	printf("-⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙⊙-\n");
	printf("請輸入 1 個字元\n");
	scanf("%c",&ch);/*輸入字元*/ 
	ch=getchar();
	if((ch>='A')&&(ch<='Z')){/*如果輸入的字元在範圍(A~Z)間*/ 
		printf("Uppercase\n");
		}
		else if((ch>='a')&&(ch<='z')){/*如果輸入的字元在範圍(a~z)間*/  
			printf("Lowercase\n");
			}
			else if((ch>='0')&&(ch<='9')){/*如果輸入的字元在範圍(0~9)間*/ 
				printf("Digit\n");
				}
				else{ 
					printf("E1B08 邱睿嘉\n");/*如果輸入範圍不在以上的範圍間*/ 
					}		 
	system("pause");/*螢幕畫面暫停，並等待使用者按任意鍵*/ 
	return 0;/*結束程式*/ 
 }
 /*心得:本次的程式介面設計是利用之前教過的程式去撰寫，
 但是初次利用github去繳交作業，我對於github的下載與應用上花費了龐大的時間，但目前是學會了基礎。
 此次的內容好像是由玩遊戲時的使用者介面，讓我了解到不管是遊戲內還是網頁中的使用者介面，
 都可以利用本次的程式去撰寫。*/ 
