#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i,password=2025,inputpassword,ch,b=0,j,k,l;/*�]���ܼ�*/ 
	char c ,ch1,h,num,num1;
	for(i=1; i<=20; i++){/*for�j�魫�ƦL�X���Ÿ�����20������*/  
 		printf("(�� -�s- ��)-��-(�� -�s- ��)    ����***2025***����   (�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)");
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
}
