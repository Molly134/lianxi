#include<stdio.h>
#include<math.h>
#include<windows.h>
int right=0;
int wrong=0;
void add() { //�ӷ�����
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("��ش�\n\t\t %d + %d + %d = ",a,b,c);
	scanf("%d",&d);
	if(a+b+c==d) {
		printf("�ش���ȷ!\n");
		right++;
	} else {
		printf("�ش����!\n");
		wrong++;
	}
}

void minus() { //��������
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("��ش�\n\t\t %d - %d - %d = ",a,b,c);
	scanf("%d",&d);
	if(a-b-c==d) {
		printf("�ش���ȷ!\n");
		right++;
	} else {
		printf("�ش����!\n");
		wrong++;
	}
}

void multiply() { //�˷�����
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("��ش�\n\t\t %d * %d * %d = ",a,b,c);
	scanf("%d",&d);
	if(a*b*c==d) {
		printf("�ش���ȷ!\n");
		right++;
	} else {
		printf("�ش����!\n");
		wrong++;
	}
}

void divide() { //��������
	int a,b,c,d;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	printf("��ش�\n\t\t %d / %d / %d = ",a,b,c);
	scanf("%d",&d);
	if(a/b/c==d) {
		printf("�ش���ȷ!\n");
		right++;
	} else {
		printf("�ش����!\n");
		wrong++;
	}
}

void main() {
	int choise;
	int con=0;
	int i=0,j=0;
	printf("\n\t\t\t��ӭ���������������\n\n");
	while(1) {
		printf("��ѡ��\n");
		printf("\t\t\t  �ӷ����㣨������1��\n");
		printf("\t\t\t  �������㣨������2��\n");
		printf("\t\t\t  �˷����㣨������3��\n");
		printf("\t\t\t  �������㣨������4��\n");
		printf("\t\t\t  �˳����㣨������5��\n");
		if(con==0)
			scanf("%d",&choise);
		switch(choise) {
			
			case 1://�ӷ�
				printf("��������Ŀ��Ŀ��");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						add();
					}
				} else
					printf("����������������룡");
				break;

			case 2://����
				printf("��������Ŀ��Ŀ��");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						minus();
					}
				} else
					printf("����������������룡");
				break;

			case 3://�˷�
				printf("��������Ŀ��Ŀ��");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						multiply();
					}
				} else
					printf("����������������룡");
				break;

			case 4://����
				printf("��������Ŀ��Ŀ��");
				scanf("%d",&i);
				if(i>0) {
					for(j=0; j<i; j++) {
						divide();
					}
				} else
					printf("����������������룡");
				break;
			case 5:
				return;
		}
		printf("\n\t\t\t�������㣿��������1��\n");
		printf("\n\t\t\t����ѡ�񣿣�������2��\n");
		printf("\n\t\t\t�˳����㣿��������3��\n");
		scanf("%d",&con);
		if(con==1)
			con=1;
		else if(con==2)
			con=0;
		else if(con==3)
			break;
		else
			printf("��Ǹ!���������ָ������!����������!\n");
	}
	printf("���ܹ������ %d ����\n��ȷ %d ��\n���� %d ��\n",right+wrong,right,wrong);
}
