#include<stdio.h>
#include<stdlib.h>
#define MAX 10    //定義MAX值 

int n;
 struct student { // 結構定義 
    char name[10];//名子 
    int id;       //身分  
    int math;     //成績 
    int phy;
    int eng;
    float avg;    //平均 
} Student[MAX];

void enter(){  //函數a
	int i=0;   //設立變數 
	system("CLS");   /*清除螢幕*/
	printf("請輸入學生個數(5~10): ");
    while(1){
    	scanf("%d",&n);
    	if (n >= 5 && n<= 10) { //輸入數介於5~10間 ，跳離迴圈 
    		break; 
		}
		else printf("輸入錯誤人數，請輸入(5~10): ");
	}
	for(i=0;i<n;i++){  //for迴圈輸入學生資料 
		printf("請輸入學生姓名: ");
		scanf("%s",Student[i].name);
		printf("輸入學號（6 位整數）: ");
		while(1){
			scanf("%d",&Student[i].id); //迴圈，如果輸入id為六位數 ，跳離迴圈 
			if(Student[i].id<100000||Student[i].id>999999){//if(strlen(student[i].id) != 6)
				printf("輸入錯誤，請輸入學號（6 位整數）: ");
			}else break;
		}
		printf("輸入數學的成績（0~100 分）: ");
		while(1){  //迴圈輸入成績，如介於0~100間，跳離迴圈 
			scanf("%d",&Student[i].math);
			if(Student[i].math<0||Student[i].math>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
		printf("輸入物理的成績（0~100 分）: ");
		while(1){  //迴圈輸入成績，如介於0~100間，跳離迴圈 
			scanf("%d",&Student[i].phy);
			if(Student[i].phy<0||Student[i].phy>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
		printf("輸入英文的成績（0~100 分）: ");
		while(1){  //迴圈輸入成績，如介於0~100間，跳離迴圈 
			scanf("%d",&Student[i].eng);
			if(Student[i].eng<0||Student[i].eng>100){
				printf("輸入錯誤，請輸入(0~100): ");
			}else break;
		}
	}	
}

void display(){  //函數b
	int i;
	system("CLS");  /*清除螢幕*/ 
	printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
	for(i=0;i<n;i++){  //avg=成績加總 ，印出結構資料 
		Student[i].avg=((Student[i].math+Student[i].phy+Student[i].eng)/3);
		printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
	}
	system("pause");    /*螢幕畫面暫停，並等待使用者案任意鍵*/  
	system("cls");  /*清除螢幕*/ 
}

void search(){  //函式c
	int i;  //設立變數 
	system("CLS");  /*清除螢幕*/ 
	char string[99];//設立字串變數 
	int found = 0;
	printf("請輸入要搜尋的姓名: ");
	scanf("%s",string);  //輸入字串 
	for(i=0;i<n;i++){
		if(strcmp(Student[i].name,string)==0){  //檢查輸入的字串是否與資料裡名稱有重複，如果有就印出該生的資料 
			printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
			printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",Student[i].name,Student[i].id,Student[i].math,Student[i].phy,Student[i].eng,Student[i].avg);
			found=1;  //found=1 
		}
	}
	if(found!=1){  //如果沒有找到 
		printf("資料不存在! ");
	}
	system("pause");/*螢幕畫面暫停，並等待使用者案任意鍵*/ 
	system("cls");  /*清除螢幕*/ 
}

void scorelv(){  //函式d
	system("CLS");  /*清除螢幕*/ 
	int i,j;  //設立變數 
    for ( i = 0; i < n - 1; i++) {  //控制列 
        for ( j = i + 1; j < n; j++) { //控制行 
            if ((Student + j)->avg > (Student + i)->avg) {  //當找到值大於原來值 ，將找到值設為最大值 
                struct student temp = *(Student + i);
                *(Student + i) = *(Student + j);
                *(Student + j) = temp;
            }
        }
    }
    printf("平均成績排名（高 -> 低）：\n");
    printf("姓名\t學號\t平均\n");
    for ( i = 0; i < n; i++) {   //印出排序後的所有學生資料(高到低) 
        printf("%s\t%d\t%.1f\n", Student[i].name, Student[i].id, Student[i].avg);
    }
	system("pause");/*螢幕畫面暫停，並等待使用者案任意鍵*/ 
	system("cls"); /*清除螢幕*/ 
}

int main(void){  //主程式 
	int i,password=2025,inputpassword,ch,b=0,j,k,l;/*設立變數*/ 
	char c ,ch1,h,num,num1;
	for(i=1; i<=20; i++){/*for迴圈重複印出表情符號直到20次結束*/  
 		printf("(∪ -ω- ∪)-⊙-(∪ -ω- ∪)    ⊙⊙⊙***2025***⊙⊙⊙   (∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)-⊙-(∪ -ω- ∪)");
 		printf("\n");
 	}
	printf("請輸入四個數字的密碼\n");
	printf("提示:2025\n");
	while(1){  //for 迴圈直到輸入2025(限輸入三次) 
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
		system("cls");/*清除螢幕*/
		printf("------------[Grade System]--------\n")	;//使用者選單 
		printf("| a. Enter student grades      |\n"); 
		printf("| b. Display student grades    |\n");
		printf("| c. Search for student grades |\n"); 
		printf("| d. Grade ranking             |\n");
		printf("| e. Exit system               |\n");
		printf("----------------------------------\n");
		printf("請輸入選項: ");
		scanf("%c",&num);
		if(num=='A'||num=='a'){  //當輸入'A' OR 'a' 
			enter(); //執行函式a 
			continue;//回至外層迴圈中 
		}
		if(num=='B'||num=='b'){  //當輸入'B' OR 'b' 
			display();//執行函式b
			continue;//回至外層迴圈中
		}
		if(num=='C'||num=='c'){  //當輸入'C' OR 'c' 
			search();//執行函式c
			continue;//回至外層迴圈中
		}
		if(num=='D'||num=='d'){  //當輸入'D' OR 'd' 
			scorelv();//執行函式d
			continue;//回至外層迴圈中
		}
		if(num=='E'||num=='e'){  //當輸入'E' OR 'e' 
			printf("確定離開？ (y/n): ");
			while(1){
            	scanf(" %c", &num1);
            	if (num1 == 'n'||num1 == 'N') {//當輸入'N' OR 'n'
                	printf("回主選單，請按任意鍵\n");
                	break;
            	}
            	if (num1 == 'y'||num1 == 'Y') {//當輸入'Y' OR 'y'
                	printf("程式結束\n");
                	return 0;
            	}
                else printf("請重新輸入 (y/n): "); continue;//輸入NnYy以外的 
            }
		}

	}
}
/*本次程式設計加入了結構陣列，感覺是更加方便輸入資料時於陣列旁用.id or .name .......去表示其中的資料
搭配上for迴圈，雖然複雜了一些，但是能夠更加便捷地去呼叫與印出資料，此次實驗也融合了作業123的概念，
感覺更能夠去理解一個葉面後方是如何運作的，也覺得自己更能夠去表達出自己想要的實際成果，用現在學到的各種方式
去實現。*/ 
