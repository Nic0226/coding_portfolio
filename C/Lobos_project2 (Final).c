#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>

//Compiler:-std=c99
//Linker:-static-libgcc
void q0(){

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMEMORY GAME");
		printf("\n\n\n\n\t\t\t\t\tPress any key to continue");
getch();
system("cls");
	
}

void color(int color){

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void gotoxy(int x,int y){
	
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void menu(void);
double gameeasy(int,int*);
double gamemedium(int,int*);
double gamehard(int,int*);
int q1();
void q2();
void q3();
void q4();



int main(){
	system("COLOR 7D");
	int g, sure, pts1, pts2, pts3, pts4, pts5,pts6,pts7,pts8,pts9,pts10,totalpoints, sc1=0,sc2=0,sc3=0,sc4=0,sc5=0;
	int pts11, pts12, pts13, pts14, pts15, totalpoints2,totalpoints3,sc6=0,sc7=0,sc8=0,sc9=0,sc10=0,sc11=0,sc12=0,sc13=0,sc14=0,sc15=0;
	double averagetime,averagetime2,averagetime3;
	double t1, t2, t3, t4, t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15;
	int n;
	int Set[] = {7,7,7,7};
	int counter = 1;
	int ex = 1;
	char key;
	

	q0();
	system("COLOR 0D");
	for(int i = 0 ;;){

		
		
		
		gotoxy(10,5);
		color(Set[0]);
		printf("\t\t\t\t\tPlay Now");
		
		
		gotoxy(10,5);
		color(Set[1]);
		printf("\n\n\n\t\t\t\t\t\tInstructions");
		
		
		gotoxy(10,5);
		color(Set[2]);
		printf("\n\n\n\n\n\n\t\t\t\t\t\tAbout Game");
		
		gotoxy(10,5);
		color(Set[3]);
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tExit");
		

		key = getch();
			
		if(key == 72 && (counter>=2 && counter <=4)){
			counter --;
		}
		
		if(key == 80 && (counter>=1 && counter <=3)){
			counter ++;
		}
		
		if(key == '\r'){
		system("cls");
	
			if(counter == 1)
			{
			g=q1();
			if(g==4){
				main();
			}
			if(g==1){
			t1=gameeasy(sc1,&pts1);
			t2=gameeasy(sc2,&pts2);
			t3=gameeasy(sc3,&pts3);
			t4=gameeasy(sc4,&pts4);
			t5=gameeasy(sc5,&pts5);
			
			printf("\n\n\t\t\t\t\tScores:");		 
			printf("\n\n\t\t\t\t\t%.2f seconds\n\n",t1);
			printf("\t\t\t\t\t%.2f seconds\n\n",t2);
			printf("\t\t\t\t\t%.2f seconds\n\n",t3);
			printf("\t\t\t\t\t%.2f seconds\n\n",t4);
			printf("\t\t\t\t\t%.2f seconds\n\n",t5);
			
			averagetime=t1+t2+t3+t4+t5;
			printf("\t\t\t\t\t%.2f seconds",averagetime);
			
			printf("\n\n\t\t\t\t\tPoints:");		 
			printf("\n\n\t\t\t\t\t%d points\n\n",pts1);
			printf("\t\t\t\t\t%d points\n\n",pts2);
			printf("\t\t\t\t\t%d points\n\n",pts3);
			printf("\t\t\t\t\t%d points\n\n",pts4);
			printf("\t\t\t\t\t%d points\n\n",pts5);
			
			
			totalpoints=pts1+pts2+pts3+pts4+pts5;
			
			
				printf("\n\n\t\t\t\t\tTotal points:%d points",totalpoints);
							getch();
							system("cls");
			}
			if(g==2){
				t6=gamemedium(sc1,&pts6);
			t7=gamemedium(sc2,&pts7);
			t8=gamemedium(sc3,&pts8);
			t9=gamemedium(sc4,&pts9);
			t10=gamemedium(sc5,&pts10);	
			
			printf("\n\n\t\t\t\t\tScores:");
			printf("\n\n\t\t\t\t\t%.2f seconds\n\n",t6);
			printf("\t\t\t\t\t%.2f seconds\n\n",t7);
			printf("\t\t\t\t\t%.2f seconds\n\n",t8);
			printf("\t\t\t\t\t%.2f seconds\n\n",t9);
			printf("\t\t\t\t\t%.2f seconds\n\n",t10);
			
			averagetime2=t6+t7+t8+t9+t10;
			
			printf("\t\t\t\t\tTotal Score: %.2f seconds",averagetime2);
			
			printf("\n\n\t\t\t\t\tPoints:");		 
			printf("\n\n\t\t\t\t\t%d points\n\n",pts6);
			printf("\t\t\t\t\t%d points\n\n",pts7);
			printf("\t\t\t\t\t%d points\n\n",pts8);
			printf("\t\t\t\t\t%d points\n\n",pts9);
			printf("\t\t\t\t\t%d points\n\n",pts10);
			
			
			totalpoints2=pts6+pts7+pts8+pts9+pts10;
			
			
				printf("\n\n\t\t\t\t\t%d points",totalpoints2);
			
							getch();
							system("cls");
				 
			}
			if(g==3){
				t11=gamehard(sc11,&pts11);
			t12=gamehard(sc12,&pts12);
			t13=gamehard(sc13,&pts13);
			t14=gamehard(sc14,&pts14);
			t15=gamehard(sc15,&pts15);
			
			printf("\n\n\t\t\t\t\tScores:");		 
			printf("\n\n\t\t\t\t\t%.2f seconds\n\n",t11);
			printf("\t\t\t\t\t%.2f seconds\n\n",t12);
			printf("\t\t\t\t\t%.2f seconds\n\n",t13);
			printf("\t\t\t\t\t%.2f seconds\n\n",t14);
			printf("\t\t\t\t\t%.2f seconds\n\n",t15);
			
			averagetime3=t11+t12+t13+t14+t15;
			
			printf("\t\t\t\t\t%.2f seconds",averagetime3);
			
			printf("\n\n\t\t\t\t\tPoints:");		 
			printf("\n\n\t\t\t\t\t%d points\n\n",pts11);
			printf("\t\t\t\t\t%d points\n\n",pts12);
			printf("\t\t\t\t\t%d points\n\n",pts13);
			printf("\t\t\t\t\t%d points\n\n",pts14);
			printf("\t\t\t\t\t%d points\n\n",pts15);
			
			
			totalpoints3=pts11+pts12+pts13+pts14+pts15;
			
			
				printf("\n\n\t\t\t\t\t%d points",totalpoints3);
							getch();
							system("cls");
				
			}
			 system("COLOR 0D");
			}
			if(counter == 2)
			{
			q2();
			}
			if(counter == 3)
			{
			q3();
			}
			if(counter == 4)
			{
			q4();
	}
		}
			
		
		Set[0] = 7;
		Set[1] = 7;
		Set[2] = 7;
		Set[3] = 7;

		if(counter == 1)
			{
		Set[0] = 12;
			}
		if(counter == 2)
			{
		Set[1] = 12;
			}
		if(counter == 3)
			{
		Set[2] = 12;
			}
		if(counter == 4)
			{
		Set[3] = 12;
			}
			
}
return 0;
}


int q1(){
	system("COLOR 7D");	
int x;
   printf("Back - 0\n\n\t\t\t\t\t\tDifficulty Level");
   printf("\n\n\t\t\t\t\t\t1.) Easy");
   printf("\n\n\t\t\t\t\t\t2.) Medium");
   printf("\n\n\t\t\t\t\t\t3.) Hard");
   printf("\n\n\t\t\t\t\tChoose a number of your difficulty: ");
   scanf("%d",&x);
   system("cls");
    	return x;
	



getch();
system("cls");
}

double gameeasy(int p,int *points){
		system("COLOR 7D");
		printf("\n\n\t\t\t\t\tMemorize these numbers:\n\n\t\t\t\t\t");
		printf("1st\t2nd\t3rd\t4th\t5th\n\n");
		printf("\t\t\t\t\t");
     	int x[10],i,w,r,r1,r2,r3,r4,t;
	srand(time(NULL));
	for(i=5;i<10;i++){
		w=rand()%90+10;
		if(w>=10){
			x[i]=rand()%90+10;
		}else{
			x[i];
		}
	}
	for(i=5;i<10;i++){
		printf("%d",x[i]);
		printf("\t");
	}

	
	printf("\n\n\n\n\n\n\t\t\t\t15 ");
	Sleep(1000);
	printf("14  ");
	Sleep(1000);
	printf("13  ");
	Sleep(1000);
	printf("12  ");
	Sleep(1000);
	printf("11  ");
	Sleep(1000);
	printf("10  ");
	Sleep(1000);
	printf("9  ");
	Sleep(1000);
	printf("8  ");
	Sleep(1000);
	printf("7  ");
	Sleep(1000);
	printf("6  ");
	Sleep(1000);
	printf("5  ");
	Sleep(1000);
	printf("4  ");
	Sleep(1000);
	printf("3  ");
	Sleep(1000);
	printf("2  ");
	Sleep(1000);
	printf("1  ");
	Sleep(1000);
	system("cls");
	clock_t;
    t = clock();
printf("\n\n\t\t\t\t\t\t");
	printf("What is the number? \n\n\t\t\t\t\t\t1st: ");
		scanf("%d",&r);
		printf("\n\n\t\t\t\t\t\t2nd: ");
		scanf("%d",&r1);
		printf("\n\n\t\t\t\t\t\t3rd: ");
		scanf("%d",&r2);
		printf("\n\n\t\t\t\t\t\t4th: ");
		scanf("%d",&r3);
		printf("\n\n\t\t\t\t\t\t5th: ");
		scanf("%d",&r4);
		if(r==x[5] && r1==x[6] && r2==x[7] && r3==x[8] && r4==x[9]){
				printf("\n\n\t\t\t\t\t\tCorrect");
				p+=1;
		}
		
		else{
		
		printf("\n\n\t\t\t\t\t\tIncorrect\n\n\t\t\t\t\t\t");
		p+=0;
}

 *points=p;
 printf("\n\n\t\t\t\t\t\t Points: %d",p);
	t = clock() - t; 
    double time_taken; // in seconds 
   time_taken = ((double)t)/CLOCKS_PER_SEC;	
   getch();
   system("cls");
  return time_taken;


}


double gamemedium(int p,int*points){
		system("COLOR 7D");
	printf("\n\n\t\t\t\t\tMemorize these numbers:\n\n\t\t\t\t\t");
	printf("1st\t2nd\t3rd\t4th\t5th\n\n");
		printf("\t\t\t\t\t");
     	int x[10],i,w,r,r1,r2,r3,r4,t;
	srand(time(NULL));
	for(i=5;i<10;i++){
		w=rand()%90+10;
		if(w>=10){
			x[i]=rand()%90+10;
		}else{
			x[i];
		}
	}
	for(i=5;i<10;i++){
		printf("%d",x[i]);
		printf("\t");
	}


	printf("\n\n\n\n\t\t\t\t\t10 ");
	Sleep(1000);
	printf("9 ");
	Sleep(1000);
	printf("8 ");
	Sleep(1000);
	printf("7 ");
	Sleep(1000);
	printf("6 ");
	Sleep(1000);
	printf("5 ");
	Sleep(1000);
	printf("4 ");
	Sleep(1000);
	printf("3 ");
	Sleep(1000);
	printf("2 ");
	Sleep(1000);
	printf("1 ");
	Sleep(1000);
	
	system("cls");
	clock_t;
    t = clock();
printf("\n\n\t\t\t\t\t\t");
	printf("What is the number? \n\n\t\t\t\t\t\t1st: ");
		scanf("%d",&r);
		printf("\n\n\t\t\t\t\t\t2nd: ");
		scanf("%d",&r1);
		printf("\n\n\t\t\t\t\t\t3rd: ");
		scanf("%d",&r2);
		printf("\n\n\t\t\t\t\t\t4th: ");
		scanf("%d",&r3);
		printf("\n\n\t\t\t\t\t\t5th: ");
		scanf("%d",&r4);
		if(r==x[5] && r1==x[6] && r2==x[7] && r3==x[8] && r4==x[9]){
				printf("\n\n\t\t\t\t\t\tCorrect");
				p+=1;
		}
		
		else{
		
		printf("\n\n\t\t\t\t\t\tIncorrect\n\n\t\t\t\t\t\t");
		p+=0;
}
 *points=p;
 printf("\n\n\t\t\t\t\t\t Points: %d",p);
	t = clock() - t; 
    double time_taken; // in seconds 
   time_taken = ((double)t)/CLOCKS_PER_SEC;	
   getch();
   system("cls");
  return time_taken;


}

double gamehard(int p, int*points){
		system("COLOR 7D");
				printf("\n\n\t\t\t\t\tMemorize these numbers:\n\n\t\t\t\t\t");
				printf("1st\t2nd\t3rd\t4th\t5th\n\n");
		printf("\t\t\t\t\t");
     	int x[10],i,w,r,r1,r2,r3,r4,t;
	srand(time(NULL));
	for(i=5;i<10;i++){
		w=rand()%90+10;
		if(w>=10){
			x[i]=rand()%90+10;
		}else{
			x[i];
		}
	}
	for(i=5;i<10;i++){
		printf("%d",x[i]);
		printf("\t");
	}


	printf("\n\n\n\n\t\t\t\t\t\tTIME: 5 ");
	Sleep(1000);
	printf("4 ");
	Sleep(1000);
	printf("3 ");
	Sleep(1000);
	printf("2 ");
	Sleep(1000);
	printf("1 ");
	Sleep(1000);
	system("cls");
	clock_t;
    t = clock();
printf("\n\n\t\t\t\t\t\t");
	printf("What is the number? \n\n\t\t\t\t\t\t1st: ");
		scanf("%d",&r);
		printf("\n\n\t\t\t\t\t\t2nd: ");
		scanf("%d",&r1);
		printf("\n\n\t\t\t\t\t\t3rd: ");
		scanf("%d",&r2);
		printf("\n\n\t\t\t\t\t\t4th: ");
		scanf("%d",&r3);
		printf("\n\n\t\t\t\t\t\t5th: ");
		scanf("%d",&r4);
		if(r==x[5] && r1==x[6] && r2==x[7] && r3==x[8] && r4==x[9]){
				printf("\n\n\t\t\t\t\t\tCorrect");
				p+=1;
		}
		
		else{
		
		printf("\n\n\t\t\t\t\t\tIncorrect\n\n\t\t\t\t\t\t");
		p+=0;
}
 *points=p;
 
 printf("\n\n\t\t\t\t\t\t Points: %d",p);
	t = clock() - t; 
    double time_taken; // in seconds 
   time_taken = ((double)t)/CLOCKS_PER_SEC;	
   getch();
   system("cls");
  return time_taken;


}

void q2(){
		system("COLOR 7D");
   printf("\n\n\t\t\tINSTRUCTION:");
   printf("\n\n\t\t\tMemorize every 1st up to 5th number in a given time:");
   printf("\n\n\n\n\t\t\tEasy: 15 seconds");
   printf("\n\n\t\t\tMedium: 10 seconds");
   printf("\n\n\t\t\tHard: 5 seconds");
    printf("\n\n\t\t\tThen enter the 1st to 5th number that you've memorized.");
   getch();
   system("cls");
   system("COLOR 0D");
}
void q3(){
	system("COLOR 7D");
   printf("\n\n\t\t\t\t\tGame is created by Ralph Niclaus S. Lobos\n\n\t\t\t\tCourse: Applied Mathematics with Information Technology\n\n\t\t\t\t\tAn Instrumentalist of FEU IAS Sessionista");
   printf("\n\n\n\n\t\t\t\t\t\t\tC Programming\n\n\t\t\t\t\t\tProfessor: Edward Andaya") ;
   getch();
   system("cls"); 
   system("COLOR 0D");
}
void q4(){
		system("COLOR 0D");
	int u;
   printf("\n\n\t\t\t\t\t\tAre you sure you want to exit?\n\n\t\t\t\t\t\t Yes - Press 1 and enter\n\n\t\t\t\t\t\t No - press 2 and enter \n\n");
   printf("\t\t\t\t\t\t");
   scanf("%d",&u);
   switch(u){
   	case 1:
   		exit(0);
   	case 2:
   		system("cls");
   		main();
   		system("COLOR 0D");
   }
    
   
  
}


