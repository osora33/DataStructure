#include "헤더.h"
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
		printf("\n\n등록 가능한 최대 사원 수를 넘어섰습니다.\n\n");
		imployeeMng();
	}

	char nameTmp[30];

	printf("\n\n사원 아이디 : ");
	scanf("%d", &imployeeList[currImployeeNum].id);

	printf("사원명 : ");
	scanf("%s", nameTmp); 
	//널문자 공간 확보 위해 +1
	imployeeList[currImployeeNum].name = malloc(sizeof(nameTmp)+1);
	strcpy(imployeeList[currImployeeNum].name, nameTmp);

	printf("급여 : ");
	scanf("%d", &imployeeList[currImployeeNum].pay);

	currImployeeNum++;
	printf("\n%d", currImployeeNum);
	printf("\n사원이 등록되었습니다.\n\n");
	free(imployeeList[currImployeeNum].name);
	imployeeMng();
}

void imployeeMng() {
	int cmd;

	printf("1. 사원 등록\n");
	printf("2. 급여조회\n");
	printf("작업 선택 : ");
	scanf("%d", &cmd);

	if (cmd == 1) {
		addImployee();
	}
	else if (cmd == 2) {
		int sum = 0;
		for (int i = 0; i < currImployeeNum; i++) {
			sum += imployeeList[i].pay;
		}
		printf("\n\n총 급여액 : %d", sum);
		printf("\n평균급여 : %.2lf\n\n", sum / (double)currImployeeNum);
		imployeeMng();
	}
	else {
		printf("잘못된 입력입니다.\n\n");
		imployeeMng();
	}
}