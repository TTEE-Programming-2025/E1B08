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
	printf("�п�J�|�ӼƦr���K�X\n");
	printf("����:2025\n");
	while(1){
	scanf("%d",&inputpassword);
	if(inputpassword==password){
		break;
	}
	if(b>=2){
		return 1;
	}
	else b++; printf("�п�J�|�ӼƦr���K�X\n");
}
system("PAUSE");/*�ù��e���Ȱ��A�õ��ݨϥΪ̮ץ��N��*/ 
	system("CLS");/*�M���ù�*/
	fflush(stdin);
	printf("==========================\n");
	printf("|| a. �e�X�����T���� ||\n");
	printf("|| b. ��ܭ��k��     ||\n");
	printf("|| c. ����           ||\n");
	printf("==========================\n");
}
