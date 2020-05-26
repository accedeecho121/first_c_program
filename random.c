#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number =rand()%100+1;
	int count =0;
	int a =0;
	printf("jww");
	printf("wo yi jing xiang hao yi ge 1 dao 100 zhi jian de shu");
	do{
		printf("qing cai cai zhe ge 1 dao 100 zhi jian shu : ");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("ni cai de shu  da le ");
		}else if (a<number){
			printf("ni cai de shu xiao le ");
		}

		}while(a!=number);
printf("tai hao le , ni yonmg le %d ci jiu cai dao le da an \n",count);
}
