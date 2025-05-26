#include<stdio.h>
#include<stdlib.h>
#define MAX 10    //�w�qMAX�� 

int n;
 struct student { // ���c�w�q 
    char name[10];//�W�l 
    int id;       //����  
    int math;     //���Z 
    int phy;
    int eng;
    float avg;    //���� 
} Student[MAX];

void enter(){  //���a
	int i=0;   //�]���ܼ� 
	system("CLS");   /*�M���ù�*/
	printf("�п�J�ǥͭӼ�(5~10): ");
    while(1){
    	scanf("%d",&n);
    	if (n >= 5 && n<= 10) { //��J�Ƥ���5~10�� �A�����j�� 
    		break; 
		}
		else printf("��J���~�H�ơA�п�J(5~10): ");
	}
	for(i=0;i<n;i++){  //for�j���J�ǥ͸�� 
		printf("�п�J�ǥͩm�W: ");
		scanf("%s",Student[i].name);
		printf("��J�Ǹ��]6 ���ơ^: ");
		while(1){
			scanf("%d",&Student[i].id); //�j��A�p�G��Jid������� �A�����j�� 
			if(Student[i].id<100000||Student[i].id>999999){//if(strlen(student[i].id) != 6)
				printf("��J���~�A�п�J�Ǹ��]6 ���ơ^: ");
			}else break;
		}
		printf("��J�ƾǪ����Z�]0~100 ���^: ");
		while(1){  //�j���J���Z�A�p����0~100���A�����j�� 
			scanf("%d",&Student[i].math);
			if(Student[i].math<0||Student[i].math>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
		printf("��J���z�����Z�]0~100 ���^: ");
		while(1){  //�j���J���Z�A�p����0~100���A�����j�� 
			scanf("%d",&Student[i].phy);
			if(Student[i].phy<0||Student[i].phy>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
		printf("��J�^�媺���Z�]0~100 ���^: ");
		while(1){  //�j���J���Z�A�p����0~100���A�����j�� 
			scanf("%d",&Student[i].eng);
			if(Student[i].eng<0||Student[i].eng>100){
				printf("��J���~�A�п�J(0~100): ");
			}else break;
		}
	}	
}

void display(){  //���b
	int i;
	system("CLS");  /*�M���ù�*/ 
	printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
	for(i=0;i<n;i++){  //avg=���Z�[�` �A�L�X���c��� 
		Student[i].avg=((Student[i].math+Student[i].phy+Student[i].eng)/3);
		printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
	}
	system("pause");    /*�ù��e���Ȱ��A�õ��ݨϥΪ̮ץ��N��*/  
	system("cls");  /*�M���ù�*/ 
}

void search(){  //�禡c
	int i;  //�]���ܼ� 
	system("CLS");  /*�M���ù�*/ 
	char string[99];//�]�ߦr���ܼ� 
	int found = 0;
	printf("�п�J�n�j�M���m�W: ");
	scanf("%s",string);  //��J�r�� 
	for(i=0;i<n;i++){
		if(strcmp(Student[i].name,string)==0){  //�ˬd��J���r��O�_�P��Ƹ̦W�٦����ơA�p�G���N�L�X�ӥͪ���� 
			printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
			printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
			found=1;  //found=1 
		}
	}
	if(found!=1){  //�p�G�S����� 
		printf("��Ƥ��s�b! ");
	}
	system("pause");/*�ù��e���Ȱ��A�õ��ݨϥΪ̮ץ��N��*/ 
	system("cls");  /*�M���ù�*/ 
}

void scorelv(){  //�禡d
	system("CLS");  /*�M���ù�*/ 
	int i,j;  //�]���ܼ� 
    for ( i = 0; i < n - 1; i++) {  //����C 
        for ( j = i + 1; j < n; j++) { //����� 
            if ((Student + j)->avg > (Student + i)->avg) {  //����Ȥj���ӭ� �A�N���ȳ]���̤j�� 
                struct student temp = *(Student + i);
                *(Student + i) = *(Student + j);
                *(Student + j) = temp;
            }
        }
    }
    printf("�������Z�ƦW�]�� -> �C�^�G\n");
    printf("�m�W\t�Ǹ�\t����\n");
    for ( i = 0; i < n; i++) {   //�L�X�Ƨǫ᪺�Ҧ��ǥ͸��(����C) 
        printf("%s\t%d\t%.1f\n", Student[i].name, Student[i].id, Student[i].avg);
    }
	system("pause");/*�ù��e���Ȱ��A�õ��ݨϥΪ̮ץ��N��*/ 
	system("cls"); /*�M���ù�*/ 
}

int main(void){  //�D�{�� 
	int i,password=2025,inputpassword,ch,b=0,j,k,l;/*�]���ܼ�*/ 
	char c ,ch1,h,num,num1;
	for(i=1; i<=20; i++){/*for�j�魫�ƦL�X���Ÿ�����20������*/  
 		printf("(�� -�s- ��)-��-(�� -�s- ��)    ����***2025***����   (�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)-��-(�� -�s- ��)");
 		printf("\n");
 	}
	printf("�п�J�|�ӼƦr���K�X\n");
	printf("����:2025\n");
	while(1){  //for �j�骽���J2025(����J�T��) 
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
		system("cls");/*�M���ù�*/
		printf("------------[Grade System]--------\n")	;//�ϥΪ̿�� 
		printf("| a. Enter student grades      |\n"); 
		printf("| b. Display student grades    |\n");
		printf("| c. Search for student grades |\n"); 
		printf("| d. Grade ranking             |\n");
		printf("| e. Exit system               |\n");
		printf("----------------------------------\n");
		printf("�п�J�ﶵ: ");
		scanf("%c",&num);
		if(num=='A'||num=='a'){  //���J'A' OR 'a' 
			enter(); //����禡a 
			continue;//�^�ܥ~�h�j�餤 
		}
		if(num=='B'||num=='b'){  //���J'B' OR 'b' 
			display();//����禡b
			continue;//�^�ܥ~�h�j�餤
		}
		if(num=='C'||num=='c'){  //���J'C' OR 'c' 
			search();//����禡c
			continue;//�^�ܥ~�h�j�餤
		}
		if(num=='D'||num=='d'){  //���J'D' OR 'd' 
			scorelv();//����禡d
			continue;//�^�ܥ~�h�j�餤
		}
		if(num=='E'||num=='e'){  //���J'E' OR 'e' 
			printf("�T�w���}�H (y/n): ");
			while(1){
            	scanf(" %c", &num1);
            	if (num1 == 'n'||num1 == 'N') {//���J'N' OR 'n'
                	printf("�^�D���A�Ы����N��\n");
                	break;
            	}
            	if (num1 == 'y'||num1 == 'Y') {//���J'Y' OR 'y'
                	printf("�{������\n");
                	return 0;
            	}
                else printf("�Э��s��J (y/n): "); continue;//��JNnYy�H�~�� 
            }
		}

	}
}
/*�����{���]�p�[�J�F���c�}�C�A�Pı�O��[��K��J��Ʈɩ�}�C�ǥ�.id or .name .......�h��ܨ䤤�����
�f�t�Wfor�j��A���M�����F�@�ǡA���O�����[�K���a�h�I�s�P�L�X��ơA��������]�ĦX�F�@�~123�������A
�Pı�����h�z�Ѥ@�Ӹ������O�p��B�@���A�]ı�o�ۤv�����h��F�X�ۤv�Q�n����ڦ��G�A�β{�b�Ǩ쪺�U�ؤ覡
�h��{�C*/ 
