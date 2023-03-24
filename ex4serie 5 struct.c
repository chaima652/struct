#include<stdio.h>
 struct Time {
	int hours;
	int min;
}time;
int main(){
	struct time;
	scanf("%d %d",&time.hours,&time.min);
	time.min++;
	if(time.min==60){
		time.min=0;
		time.hours++;
		if(time.hours==24){
			time.hours=0;
		}
	}
	printf("%d:%d\n",time.hours,time.min);
}

