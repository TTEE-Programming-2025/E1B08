#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){	
	int i,password=2025,inputpassword,ch,b=0,num,j,k,l; //設立變數 
	char c ,ch1,h; //設定字元變數 
	printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ @@☉ \n");
	printf("☉ @@☉ ☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@    @@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@    @@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@    @@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@    @@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ ☉ @@☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ @@@@☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ @@@@@@@@@@@@@@☉ ☉ @@@@☉ ☉ @@@@@@@@@@@@@@☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ @@@@@@@@☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ @@@@@@@@☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ @@@@@@☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ @@@@@@☉ ☉ ☉ @@☉ ☉\n"); 
    printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@☉ @@☉ @@@@@@@@@@@@@@@@@@@@☉ @@☉ @@☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
    printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ @@☉ ☉ ☉ @@☉ ☉ @@☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
    printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ @@☉ ☉ ☉ @@☉ ☉ @@☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ @@☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
		printf("輸入四個數字密碼\n");
		printf("提示:2025\n");
		do{
		scanf("%d",&inputpassword);/*鍵盤輸入密碼*/
		fflush(stdin);
		if(inputpassword==password){/*當輸入的密碼等於預設密碼(2025)*/
			break;// 跳離迴圈 
		}
		if(b>=2){//b是否>=2 
			return 1;//結束 
		}
			else b++; printf("警告!，請重新輸入密碼\n");//b++ ， 警告!
		}while(inputpassword!=password);
		system("PAUSE"); /*螢幕畫面暫停，並等待使用者案任意鍵*/
		system("CLS");/*清除螢幕*/
		do{
			fflush(stdin);
			printf("☉☉ ----------☉☉----------☉☉\n");
			printf("   |  a. 劃出直角三角形 |\n");
			printf("   ☉ b. 顯示乘法表     ☉\n");
			printf("   |  c. 結束           |\n");
			printf("☉☉ ----------☉☉----------☉☉\n");
			printf("請輸入a or b or c \n");
			scanf("%c",&c);//輸入字元 
			fflush(stdin);
			if(c=='a'||c=='A'){ //如果輸入的字元是 'a' or 'A' 
				system("CLS");/*清除螢幕*/
				printf("請輸入a~n字元:");
				do{
					scanf("%c",&ch1);//輸入字元
					fflush(stdin);
					if(ch1<'a'||ch1>'n'){//輸入字元若 <'a' or > 'n' 
						printf("警告! 請輸入a~n字元");
					}
					else{
						system("CLS");/*清除螢幕*/
						int q,p,j;//設立變數 
						for(q=ch1;q>='a';q--){//q=輸入的字元，一路減少至q>='a',印直角三角形 
							for( p=q;p>'a';p--){// p=q，一路減少至p>'a' 印空白 
								printf(" ");
							}
						for( j=q;j<=ch1;j++){
							printf("%c",j);
						}
						printf("\n");
						}
						printf("回選單\n");
						getch();
						system("CLS");/*清除螢幕*/
						break;// 跳離迴圈 
				
					}
				}while(ch1<'a'||ch1>'n');
				continue;
			}
			if(c=='b'||c=='B'){//如果輸入的字元是 'b' or 'B' 
				system("CLS");/*清除螢幕*/
				printf("輸入 1 至 9 的整數 num\n");
				do{
					scanf("%d",&num);//輸入數值 
					fflush(stdin);
					if(num<1||num>9){ //如果輸入數值<1 OR >9 
						printf("警告! 請重新輸入 1 至 9 的整數 num\n");
					}
					else{ 
						int k,l;//設立變數 
						for( k=1 ; k<=num ; k++){//印出99乘法表 
							for( l=1 ; l<=num ; l++){
								printf("%d * %d = %2d ",k,l,k*l);
							}
							printf("\n");
						}
						printf("回選單\n");
						getch();
						system("CLS");/*清除螢幕*/
						break;// 跳離迴圈 
					}
				}while(num<1||num>9);
				continue;
			}
			if(c=='c'||c=='C'){//如果輸入的字元是 'C' or 'c' 
				printf("Continue? (y/n) :");
				do{
					scanf("%c",&h);//輸入字元 
					if(h=='y'||c=='Y'){//如果輸入的字元是 'y' or 'Y' 
						printf("回選單\n"); 
						system("CLS");/*清除螢幕*/
					}
					if(h=='n'||c=='N'){//如果輸入的字元是 'N' or 'n' 
						printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ @@☉ \n");
	printf("☉ @@☉ ☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@    @@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@    @@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ @@☉ ☉ @@@@@@@@@@    @@@@@@@@☉ ☉ ☉ ☉ @@@@@@@@    @@@@@@@@@@☉ ☉ @@☉\n");
	printf("☉ ☉ @@☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ @@@@☉ ☉ @@@@@@@@@@@@@@@@@@☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ @@@@@@@@@@@@@@☉ ☉ @@@@☉ ☉ @@@@@@@@@@@@@@☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ @@@@@@@@☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ @@@@@@@@☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
	printf("☉ ☉ @@☉ ☉ ☉ @@@@@@☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ @@@@@@☉ ☉ ☉ @@☉ ☉\n"); 
    printf("☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@☉ @@☉ @@@@@@@@@@@@@@@@@@@@☉ @@☉ @@☉ ☉ ☉ ☉ ☉ @@☉ ☉\n");
    printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ @@☉ ☉ ☉ @@☉ ☉ @@☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
    printf("☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ @@☉ ☉ ☉ @@☉ ☉ @@☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ @@☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ @@☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ @@@@@@@@@@@@@@@@@@@@@@@@☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
    printf("☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉ ☉\n");
						printf("結束程式\n");
						return 0;
					}
					else {
						printf("訊息錯誤，請重新 \n");
						system("CLS");
					}
				}while(h=='y'||c=='Y');
				continue;
				}
				else {
					printf("無效數字，錯誤訊息\n");
					system("pause");//暫停 
					system("CLS");/*清除螢幕*/
				}	 
			
 			}while(1);
 			system("pause");
 			return 0;
		}		/*本次的程式設計實驗更加人性化，能在完成各個選項內容後自動返回主選單，大幅提升了使用體驗。
                  然而，隨之而來的是程式結構也變得更加複雜。
                  目前我已經非常熟悉迴圈的用法，在本次的程式設計中大量運用了各種迴圈結構。
                  對於字元處理的掌握也越來越熟練，並且學到了當需要使用 getch(); 函數時，必須在程式中加入 #include <conio.h>，才能順利使用相關功能。 */ 
		


			
		


