#include "Çì´õ.h"

int Fibo(int a) {
	if (a == 1) {
		return 0;
	}
	else if (a == 2) {
		return 1;
	}
	else {
		return Fibo(a - 2) + Fibo(a - 1);
	}
}

void Fibonacci() {
	int res;
	for (int i = 1; i < 15; i++) {
		res = Fibo(i);
		printf("%d ", res);
		//printf("%d ", Fibo(i));
	}
}