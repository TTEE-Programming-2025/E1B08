#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
char seats[9][9];

void seatE() {
	int a,b;
        for ( a = 0; a < 9; a++) {   
        	for ( b = 0; b < 9; b++) {
                if (seats[a][b] == '#'){ 
				seats[a][b] = '-';
            	}
			}
    	}
}

void SeatA() {  
int i,j;
    printf("\\123456789\n");
    for ( i = 8; i >= 0; i--) {   
        printf("%d", i + 1);
        for ( j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);
        }
        printf("\n");  
    }
} 

void SeatB() {   
    int i,j;
	for ( i = 0; i < 9; i++)  
        for ( j = 0; j < 9; j++)
            seats[i][j] = '-';
    int mark = 0;
    while (mark < 10) {  
        int r = rand() % 9;  
        int c = rand() % 9;  
        if (seats[r][c] == '-') {   
            seats[r][c] = '*';
            mark++;
        }
    }
}

void SeatC() {  
    int num;
    printf("How many seats do you need (1~4)? ");
    while(1){  
    	fflush(stdin);
    	scanf("%d", &num);
    	if (num >= 1 && num <= 4){
			break;
		}
		else printf("Please enter the number of seats for 1 to 4 people: ");continue;
}

int i,j,k,a,b;
for (i = 0; i < 9; i++) {  
    for ( j = 0; j <= 9 - num; j++) {
        int ok = 1;
        for ( k = 0; k < num; k++) {  
            if (seats[i][j + k] != '-') {
                ok = 0;
                break;
            }
        }

        if (ok==1) {  
            for ( k = 0; k < num; k++) seats[i][j + k] = '@'; 
            SeatA();
            char ans;
            printf("Are you satisfied? (y/n): ");
            while(1){
            	scanf(" %c", &ans);
            	if (ans == 'y' || ans == 'Y') {  
                for ( k = 0; k < num; k++){
				seats[i][j + k] = '*';
          		}
            	seatE();
                return;
                } 
				if (ans == 'n' || ans == 'N') {  
                    for ( k = 0; k < num; k++) seats[i][j + k] = '#';
                    printf("Automatically assign seats to # instead! If you do not select option b in the next step, the seats will be re-assigned!\n ");
                    printf("自動劃位將以#作為替代! 若下一步驟不是選擇b選項，將會重新規劃空位!\n ");
                    printf("自動劃位將以#作為替代! 若下一步驟不是選擇b選項，將會重新規劃空位!\n ");
                    printf("Automatically assign seats to # instead! If you do not select option b in the next step, the seats will be re-assigned!\n ");
                    return;
                }
                while(1){  
					printf("The answer is incorrect, please enter (y/n):  ");
                	break;
            }
        }
            }
        }
    }

    printf("No desired location\n");
}

void SeatD() {  //Seat of your choice
    int n,i,j;
    printf("How many seats do you need (1~4)? ");
    while(1){  //Requires input of seats to be reserved (1~4 people) 
    	fflush(stdin);
    	scanf("%d", &n);
    	if (n >= 1 && n <= 4){
			break;
		}
		else printf("Please enter the number of seats for 1 to 4 people: ");continue;
}
    	for ( i = 0; i < n; i++) {
        	int row, col;
        	printf("Please enter your seat selections one by one, row first then col (remember to press enter after entering)\n ");
        	while (1) {  //When the selected position is '-', change it to '@' 
            	scanf("%d %d", &row,&col);
            	row--; col--;
            	if (row >= 0 && row < 9 && col >= 0 && col < 9 && seats[row][col] == '-') {
                	seats[row][col] = '@';
                	break;
            	} 
				else printf("The arrangement is wrong or the position is repeated. Please enter it again\n");
        	}
    	}

    SeatA(); //convert '@' to '*' 
    for ( i = 0; i < 9; i++){
        for ( j = 0; j < 9; j++){
            if (seats[i][j] == '@') seats[i][j] = '*';
		}
	}
}

int main() {  
	int i,inputpassword,ch,b=0;
    srand(time(NULL));
    printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@@@@@@@@@@@@@@@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ @@@@@@@@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@@@@@@@⊙ ⊙ ⊙ ⊙ @@⊙ \n");
	printf("⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙\n");
	printf("⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙\n");
	printf("⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ @@@@⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ @@@@⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ \n");
	printf("⊙ @@⊙ ⊙ ⊙ @@⊙ @@@@@@@@@@⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ @@@@@@@@@@⊙ @@⊙ ⊙ ⊙ @@⊙\n");
	printf("⊙ @@⊙ ⊙ @@⊙ @@@@@@@@@@@@@@⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ @@@@@@@@@@@@@@⊙ @@⊙ ⊙ @@⊙\n");
	printf("⊙ @@⊙ ⊙ @@⊙ @@@@@@    @@@@⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ @@@@    @@@@@@⊙ @@⊙ ⊙ @@⊙\n");
	printf("⊙ @@⊙ ⊙ @@⊙ @@@@@@    @@@@⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ @@@@    @@@@@@⊙ @@⊙ ⊙ @@⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ @@⊙ @@@@@@@@@@⊙ @@⊙ ⊙ @@@@⊙ ⊙ @@⊙ @@@@@@@@@@⊙ @@⊙ ⊙ @@⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ @@@@@@⊙ @@⊙ ⊙ @@@@⊙ ⊙ @@⊙ @@@@@@⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ @@@@@@@@⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ @@@@@@@@⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ @@⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙\n");
	printf("⊙ ⊙ @@⊙ ⊙ ⊙ @@@@@@⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ @@@@@@⊙ ⊙ ⊙ @@⊙ ⊙\n"); 
    printf("⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ @@⊙ @@@@@@@@@@@@@@@@@@@@⊙ @@⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ @@⊙ ⊙ ⊙ @@⊙ ⊙ @@⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ @@⊙ ⊙ ⊙ @@⊙ ⊙ @@⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@⊙ ⊙ ⊙ @@⊙ ⊙ @@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@@@@@@@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@⊙ ⊙ ⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ @@@@@@@@@@@@@@@@@@@@@@@@⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
    printf("⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙ ⊙\n");
	printf("Please enter a four-digit password\n");
	printf("hint:2025\n");
	do{
		scanf("%d",&inputpassword);
		fflush(stdin);
		if(inputpassword==2025){
			printf("welcome!");
			break;
		}
		if(b>=2){
			return 0;
		}
		else b++; 
		printf("Please enter a four-digit password\n");
	}while(inputpassword!=2025);
	system("pause");
 	system("cls");
    SeatB();
    char num;
    while (1) {
        system("cls");
        printf("----------[Booking System]----------\n");
        printf("| a. Available seats              |\n");
        printf("| b. Arrange for you              |\n");
        printf("| c. Choose by yourself           |\n");
        printf("| d. Exit                         |\n");
        printf("------------------------------------\n");
        printf("Please enter the options on the directory  : ");
        scanf(" %c", &num);
        if(num=='a'||num=='A'){  //If the input is a or A
            seatE();SeatA();getch();continue;
        }
        else if(num=='b'||num=='B'){  //If the input is b or B
            SeatC();getch();continue;
        }
        else if(num=='c'||num=='C'){  //If the input is c or C
            seatE();SeatD();getch();continue;
        }
	}
}
