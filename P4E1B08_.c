#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int n;
 struct student {
    char name[10];
    int id;
    int math;
    int phy;
    int eng;
    float avg;
} Student[MAX];

void enter(){//a
	int i=0;
	system("CLS");
	printf("�п�J�ǥͭӼ�(5~10): ");
    while(1){
    	scanf("%d",&n);
    	if (n >= 5 && n<= 10) {
    		break; 
		}
		else printf("��J���~�H�ơA�п�J(5~10): ");
	}
	for(i=0;i<n;i++){
		printf("�п�J�ǥͩm�W: ");
		scanf("%s",Student[i].name);
		printf("��J�Ǹ��]6 ���ơ^: ");
		while(1){
			scanf("%d",&Student[i].id);
			if(Student[i].id<100000||Student[i].id>999999){//if(strlen(student[i].id) != 6)
				printf("��J���~�A�п�J�Ǹ��]6 ���ơ^: ");
			}else break;
		}
		printf("��J�ƾǪ����Z�]0~100 ���^: ");
		while(1){
			scanf("%d",&Student[i].math);
			if(Student[i].math<0||Student[i].math>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
		printf("��J���z�����Z�]0~100 ���^: ");
		while(1){
			scanf("%d",&Student[i].phy);
			if(Student[i].phy<0||Student[i].phy>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
		printf("��J�^�媺���Z�]0~100 ���^: ");
		while(1){
			scanf("%d",&Student[i].eng);
			if(Student[i].eng<0||Student[i].eng>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
	}	
}

void display(){//b
	int i;
	system("CLS");
	printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
	for(i=0;i<n;i++){
		Student[i].avg=((Student[i].math+Student[i].phy+Student[i].eng)/3);
		printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
	}
	system("pause");
	system("cls");
}

void search(){//c
	int i;
	system("CLS");
	char string[99];
	int found = 0;
	printf("�п�J�n�j�M���m�W: ");
	scanf("%s",string);
	for(i=0;i<n;i++){
		if(strcmp(Student[i].name,string)==0){
			printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
			printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
			found=1;
		}
	}
	if(found!=1){
		printf("��Ƥ��s�b! ");
	}
	system("pause");
	system("cls");
}

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
	
	while(1){
		system("cls");
		printf("------------[Grade System]--------\n")	;
		printf("| a. Enter student grades      |\n"); 
		printf("| b. Display student grades    |\n");
		printf("| c. Search for student grades |\n"); 
		printf("| d. Grade ranking             |\n");
		printf("| e. Exit system               |\n");
		printf("----------------------------------\n");
		printf("�п�J�ﶵ: ");
		scanf("%c",&num);
		if(num=='A'||num=='a'){
			enter();
			continue;
		}
		if(num=='B'||num=='b'){
				display();
				continue;
		}
		if(num=='C'||num=='c'){
				search();
				continue;
		}
	}
}
