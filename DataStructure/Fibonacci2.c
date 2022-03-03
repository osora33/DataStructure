#include "Çì´õ.h"

int Fibo2(int a) {
	printf("func call param %d\n", a);

	if (a == 1) {
		return 0;
	}
	else if (a == 2) {
		return 1;
	}
	else {
		return Fibo2(a - 1) + Fibo2(a - 2);
	}
}

void Fibonacci2() {
	Fibo2(7);
}