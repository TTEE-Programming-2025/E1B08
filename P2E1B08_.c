#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){	
	int i,password=2025,inputpassword,ch,b=0,num,j,k,l;/*�]���ܼ�*/ 
	char c ,ch1,h;
	for(i=1; i<=20; i++){/*for�j�魫�ƦL�X���Ÿ�����20������*/  
 		printf(" (�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)   ���� 2025����   (�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)");
 		printf("\n");
 		} 
		printf("��J�|�ӼƦr���K�X\n");
		printf("����:2025\n");
		do{
		scanf("%d",&inputpassword);
		fflush(stdin);
		if(inputpassword==password){
			break;
		}
		if(b>=2){
			return 1;
		}
			else b++; printf("ĵ�i! �Э��s��J�|�ӼƦr���K�X\n");
		}while(inputpassword!=password);
		system("PAUSE");/*�ù��e���Ȱ��A�õ��ݨϥΪ̮ץ��N��*/ 
		system("CLS");/*�M���ù�*/
		do{
			fflush(stdin);
			printf("��� ----------���----------���\n");
			printf("   | a. �e�X�����T���� |\n");
			printf("   �� b. ��ܭ��k��     ��\n");
			printf("   | c. ����           |\n");
			printf("��� ----------���----------���\n");
			printf("�п�Ja or b or c\n");
			scanf("%c",&c);
			fflush(stdin);
			if(c=='a'||c=='A'){//��J���O�_�Oa 
				system("CLS");
				printf("�п�Ja~n�r��:");
				do{
					scanf("%c",&ch1);
					fflush(stdin);
					if(ch1<'a'||ch1>'n'){
						printf("ĵ�i! �Э��s��Ja~n���r��:");
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
						printf("�^��D���\n");
						getch();
						system("CLS");
						break;
				
					}
				}while(ch1<'a'||ch1>'n');
				continue;
			}
			if(c=='b'||c=='B'){
				system("CLS");
				printf("��J�@�� 1 �� 9 ����� num\n");
				do{
					scanf("%d",&num);
					fflush(stdin);
					if(num<1||num>9){ 
						printf("ĵ�i! �Э��s��J�@�� 1 �� 9 ����� num\n");
					}
					else{ 
						int k,l;
						for( k=1 ; k<=num ; k++){
							for( l=1 ; l<=num ; l++){
								printf("%d * %d = %2d ",k,l,k*l);
							}
							printf("\n");
						}
						printf("�^��D���\n");
						getch();
						system("CLS");
						break;
					}
				}while(num<1||num>9);
				continue;
			}
			if(c=='c'||c=='C'){
				printf("Countinue? (y/n) :");
				do{
					scanf("%c",&h);
					if(h=='y'||c=='Y'){
						printf("�^��D���\n");
						system("CLS");
					}
					if(h=='n'||c=='N'){
						printf("�����{��\n");
						return 0;
					}
					else {
						printf("�T�����~�A�Э��s \n");
						getch();
						system("CLS");
					}
				}while(h=='y'||c=='Y');
				continue;
				}
				else {
					printf("�L�ļƦr ���~�T��\n");
					system("pause");
					system("CLS");
				}	 
			
 			}while(1);
 			system("pause");
 			return 0;
		}		
		


			
		


