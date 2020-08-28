#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num[10];
	int i;
	printf("Input number: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	printf("Reverse order=> ");
	for (i = 9; i > 0; i--) {
		printf("%d", num[i]);
	}
	return 0;
}