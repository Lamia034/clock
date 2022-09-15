#include<stdio.h>
#include<windows.h>
typedef struct{
	int sec;
	int min;
	int hour;
}clock;
int main(void){
	clock c;
	int d = 1;
	printf("entrer l'heure la minute et la seconde actuelle : \n");
	scanf("%d%d%d",&c.hour,&c.min,&c.sec);
	if(c.hour > 24 || c.min > 60 || c.sec > 60){
		printf("erreur");
		exit(0);
	}
	while(1){
		if(c.sec > 59){
			c.sec = 0;
			c.min ++;
		}
		if(c.min > 59){
			c.min = 0;
			c.hour ++;
		}
		if(c.hour > 23){
			c.hour = 0;
		}
		printf("\nclock:");
		printf("%d :%d :%d",c.hour,c.min,c.sec);
			sleep(d);
			c.sec ++;
			system("cls");
	}
	
}
