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
	printf("請輸入學生個數(5~10): ");
    while(1){
    	scanf("%d",&n);
    	if (n >= 5 && n<= 10) {
    		break; 
		}
		else printf("輸入錯誤人數，請輸入(5~10): ");
	}
	for(i=0;i<n;i++){
		printf("請輸入學生姓名: ");
		scanf("%s",Student[i].name);
		printf("輸入學號（6 位整數）: ");
		while(1){
			scanf("%d",&Student[i].id);
			if(Student[i].id<100000||Student[i].id>999999){//if(strlen(student[i].id) != 6)
				printf("輸入錯誤，請輸入學號（6 位整數）: ");
			}else break;
		}
		printf("輸入數學的成績（0~100 分）: ");
		while(1){
			scanf("%d",&Student[i].math);
			if(Student[i].math<0||Student[i].math>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
		printf("輸入物理的成績（0~100 分）: ");
		while(1){
			scanf("%d",&Student[i].phy);
			if(Student[i].phy<0||Student[i].phy>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
		printf("輸入英文的成績（0~100 分）: ");
		while(1){
			scanf("%d",&Student[i].eng);
			if(Student[i].eng<0||Student[i].eng>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
	}	
}

void display(){//b
	int i;
	system("CLS");
	printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
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
	printf("請輸入要搜尋的姓名: ");
	scanf("%s",string);
	for(i=0;i<n;i++){
		if(strcmp(Student[i].name,string)==0){
			printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
			printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
			found=1;
		}
	}
	if(found!=1){
		printf("資料不存在! ");
	}
	system("pause");
	system("cls");
}

int main(void){
	int i,password=2025,inputpassword,ch,b=0,j,k,l;/*設立變數*/ 
	char c ,ch1,h,num,num1;
	for(i=1; i<=20; i++){/*for迴圈重複印出表情符號直到20次結束*/  
 		printf("(∪ -ω- ∪)-⊙-(∪ -ω- ∪)    ⊙⊙⊙***2025***⊙⊙⊙   (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)");
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
	
	while(1){
		system("cls");
		printf("------------[Grade System]--------\n")	;
		printf("| a. Enter student grades      |\n"); 
		printf("| b. Display student grades    |\n");
		printf("| c. Search for student grades |\n"); 
		printf("| d. Grade ranking             |\n");
		printf("| e. Exit system               |\n");
		printf("----------------------------------\n");
		printf("請輸入選項: ");
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
