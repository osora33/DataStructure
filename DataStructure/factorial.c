#include "Çì´õ.h"

int fac(int a) {
	if (a == 0) {
		return 1;
	}
	else {
		return a * fac(a - 1);
	}
}

void factorial() {
	int res = fac(4);
	printf("%d! = %d", 4, res);
}