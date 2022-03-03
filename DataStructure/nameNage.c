#include "헤더.h"

void nameNage() {
	char ch;
	int age;
	/*printf("이름 : ");
	scanf("%s", name);
	printf("나이 : ");
	scanf("%d", &age);*/

	printf("문자 : ");
	scanf("%c", &ch);
	getchar();
	printf("나이 : ");
	scanf("%d", &age);

	printf("입력하신 문자는 %c, 나이는 %d입니다.", ch, age);
}