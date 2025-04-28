#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){	
	int i,password=2025,inputpassword,ch,b=0,num,j,k,l; 
	char c ,ch1,h;
	for(i=1; i<=20; i++){  
 		printf(" (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)   ⊙⊙⊙ 2025⊙⊙⊙   (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)");
 		printf("\n");
 		} 
		printf("輸入四個數字密碼\n");
		printf("提示:2025\n");
		do{
		scanf("%d",&inputpassword);
		fflush(stdin);
		if(inputpassword==password){
			break;
		}
		if(b>=2){
			return 1;
		}
			else b++; printf("警告!，請重新輸入密碼\n");
		}while(inputpassword!=password);
		system("PAUSE"); 
		system("CLS");
		do{
			fflush(stdin);
			printf("⊙⊙ ----------⊙⊙----------⊙⊙\n");
			printf("   |  a. 劃出直角三角形 |\n");
			printf("   ⊙ b. 顯示乘法表     ⊙\n");
			printf("   |  c. 結束           |\n");
			printf("⊙⊙ ----------⊙⊙----------⊙⊙\n");
			printf("請輸入a or b or c \n");
			scanf("%c",&c);
			fflush(stdin);
			if(c=='a'||c=='A'){ 
				system("CLS");
				printf("請輸入a~n字元:");
				do{
					scanf("%c",&ch1);
					fflush(stdin);
					if(ch1<'a'||ch1>'n'){
						printf("警告! 請輸入a~n字元");
					}
					else{
						system("CLS");
						int q,p,j;
						for(q=ch1;q>='a';q--){
							for( p=q;p>'a';p--){
								printf(" ");
							}
						for( j=q;j<=ch1;j++){
							printf("%c",j);
						}
						printf("\n");
						}
						printf("回選單\n");
						getch();
						system("CLS");
						break;
				
					}
				}while(ch1<'a'||ch1>'n');
				continue;
			}
			if(c=='b'||c=='B'){
				system("CLS");
				printf("輸入 1 至 9 的整數 num\n");
				do{
					scanf("%d",&num);
					fflush(stdin);
					if(num<1||num>9){ 
						printf("警告! 請重新輸入 1 至 9 的整數 num\n");
					}
					else{ 
						int k,l;
						for( k=1 ; k<=num ; k++){
							for( l=1 ; l<=num ; l++){
								printf("%d * %d = %2d ",k,l,k*l);
							}
							printf("\n");
						}
						printf("回選單\n");
						getch();
						system("CLS");
						break;
					}
				}while(num<1||num>9);
				continue;
			}
			if(c=='c'||c=='C'){
				printf("Continue? (y/n) :");
				do{
					scanf("%c",&h);
					if(h=='y'||c=='Y'){
						printf("回選單\n");
						system("CLS");
					}
					if(h=='n'||c=='N'){
						printf("結束程式\n");
						return 0;
					}
					else {
						printf("訊息錯誤，請重新 \n");
						getch();
						system("CLS");
					}
				}while(h=='y'||c=='Y');
				continue;
				}
				else {
					printf("無效數字，錯誤訊息\n");
					system("pause");
					system("CLS");
				}	 
			
 			}while(1);
 			system("pause");
 			return 0;
		}		
		


			
		


