#include<stdio.h>
#include<math.h>
#include<windows.h>
int right=0;
int wrong=0;
void add() { //加法运算
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("请回答：\n\t\t %d + %d + %d = ",a,b,c);
	scanf("%d",&d);
	if(a+b+c==d) {
		printf("回答正确!\n");
		right++;
	} else {
		printf("回答错误!\n");
		wrong++;
	}
}

void minus() { //减法运算
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("请回答：\n\t\t %d - %d - %d = ",a,b,c);
	scanf("%d",&d);
	if(a-b-c==d) {
		printf("回答正确!\n");
		right++;
	} else {
		printf("回答错误!\n");
		wrong++;
	}
}

void multiply() { //乘法运算
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("请回答：\n\t\t %d * %d * %d = ",a,b,c);
	scanf("%d",&d);
	if(a*b*c==d) {
		printf("回答正确!\n");
		right++;
	} else {
		printf("回答错误!\n");
		wrong++;
	}
}

void divide() { //除法运算
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("请回答：\n\t\t %d / %d / %d = ",a,b,c);
	scanf("%d",&d);
	if(a/b/c==d) {
		printf("回答正确!\n");
		right++;
	} else {
		printf("回答错误!\n");
		wrong++;
	}
}

void main() {
	int choise;
	int con=0;
	int i=0,j=0;
	printf("\n\t\t\t欢迎进入简易四则运算\n\n");
	while(1) {
		printf("请选择：\n");
		printf("\t\t\t  加法运算（请输入1）\n");
		printf("\t\t\t  减法运算（请输入2）\n");
		printf("\t\t\t  乘法运算（请输入3）\n");
		printf("\t\t\t  除法运算（请输入4）\n");
		printf("\t\t\t  退出运算（请输入5）\n");
		if(con==0)
			scanf("%d",&choise);
		switch(choise) {
			
			case 1://加法
				printf("请输入题目数目：");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						add();
					}
				} else
					printf("输入错误，请重新输入！");
				break;

			case 2://减法
				printf("请输入题目数目：");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						minus();
					}
				} else
					printf("输入错误，请重新输入！");
				break;

			case 3://乘法
				printf("请输入题目数目：");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						multiply();
					}
				} else
					printf("输入错误，请重新输入！");
				break;

			case 4://除法
				printf("请输入题目数目：");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						divide();
					}
				} else
					printf("输入错误，请重新输入！");
				break;
			case 5:
				return;
		}
		printf("\n\t\t\t继续运算？（请输入1）\n");
		printf("\n\t\t\t重新选择？（请输入2）\n");
		printf("\n\t\t\t退出运算？（请输入3）\n");
		scanf("%d",&con);
		if(con==1)
			con=1;
		else if(con==2)
			con=0;
		else if(con==3)
			break;
		else
			printf("抱歉!，你输入的指令有误!请重新输入!\n");
	}
	printf("您总共完成了 %d 道题\n正确 %d 道\n错误 %d 道\n",right+wrong,right,wrong);
}
