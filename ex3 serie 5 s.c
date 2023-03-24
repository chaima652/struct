#include<stdio.h>
struct Date{
	int day;
	int month;
	int year;
}date;
int main(){
	struct date;
	scanf("%d %d %d",&date.day,&date.month,&date.year);
	printf("%d/%d/%d",date.day,date.month,date.year);
}
