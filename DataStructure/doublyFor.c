#include "Çì´õ.h"

void doublyFor() {
	for (int i = 0; i <= 5; i++) {
		if (i % 2 == 1) {
			for (int k = 0; k < (5 - i) / 2; k++) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
					printf("*");
			}
			printf("\n");
		}
	}
}