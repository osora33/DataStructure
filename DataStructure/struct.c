#include "���.h"
#define imployeeNum 5

typedef struct {
	int id;
	char* name;
	int pay;
} imployee;

imployee imployeeList[imployeeNum];

int currImployeeNum = 0;

void imployeeMng();

void addImployee() {
	if (currImployeeNum >= 5) {
		printf("\n\n��� ������ �ִ� ��� ���� �Ѿ���ϴ�.\n\n");
		imployeeMng();
	}

	char nameTmp[30];

	printf("\n\n��� ���̵� : ");
	scanf("%d", &imployeeList[currImployeeNum].id);

	printf("����� : ");
	scanf("%s", nameTmp); 
	//�ι��� ���� Ȯ�� ���� +1
	imployeeList[currImployeeNum].name = malloc(sizeof(nameTmp)+1);
	strcpy(imployeeList[currImployeeNum].name, nameTmp);

	printf("�޿� : ");
	scanf("%d", &imployeeList[currImployeeNum].pay);

	currImployeeNum++;
	printf("\n%d", currImployeeNum);
	printf("\n����� ��ϵǾ����ϴ�.\n\n");
	free(imployeeList[currImployeeNum].name);
	imployeeMng();
}

void imployeeMng() {
	int cmd;

	printf("1. ��� ���\n");
	printf("2. �޿���ȸ\n");
	printf("�۾� ���� : ");
	scanf("%d", &cmd);

	if (cmd == 1) {
		addImployee();
	}
	else if (cmd == 2) {
		int sum = 0;
		for (int i = 0; i < currImployeeNum; i++) {
			sum += imployeeList[i].pay;
		}
		printf("\n\n�� �޿��� : %d", sum);
		printf("\n��ձ޿� : %.2lf\n\n", sum / (double)currImployeeNum);
		imployeeMng();
	}
	else {
		printf("�߸��� �Է��Դϴ�.\n\n");
		imployeeMng();
	}
}