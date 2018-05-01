#include <stdio.h>

// 펙토리얼 만들기

int ex2() {
	
	int i = 0, j = 1, num = 0;

	printf("수를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		j *= i;
	}
	printf("n!의 값 = %d\n", j);

	return 0;
}
