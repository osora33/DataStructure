#include "���.h"

void nameNage() {
	char ch;
	int age;
	/*printf("�̸� : ");
	scanf("%s", name);
	printf("���� : ");
	scanf("%d", &age);*/

	printf("���� : ");
	scanf("%c", &ch);
	getchar();
	printf("���� : ");
	scanf("%d", &age);

	printf("�Է��Ͻ� ���ڴ� %c, ���̴� %d�Դϴ�.", ch, age);
}