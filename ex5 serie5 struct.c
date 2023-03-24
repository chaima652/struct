#include<stdio.h>
typedef struct employee{
	int nmbr;
	char name[10];
	float rate;
	int hours;
}empl;
int main(){
	float groos_pay[2],total_groos_pay=0;
	int i;
	empl t[2];
	for(i=0;i<2;i++){
		scanf("%d %s %f %d",&t[i].nmbr,&t[i].name,&t[i].rate,&t[i].hours);
	groos_pay[i]=t[i].rate*t[i].hours;
	total_groos_pay+=groos_pay[i];
	}
	for(i=0;i<2;i++){
		printf("%s:%f\n",t[i].name,groos_pay[i]);
	}
	printf("total_groos_pay is:%f",total_groos_pay);
}
