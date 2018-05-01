#include <stdio.h>

/*
    *
   * *
  *   *
 *     *
  *   *
   * *
    *
*/

int ex2() {

	int a, b;
	int start = 3;
	int end = 3;

	for (b = 0; b < 3; b++) {

		for (a = 0; a < 7; a++) {

			if (a == start) {
				printf("*");
			}
			else if (a == end) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		start++;
		end++;
		printf("\n");
	}
	start = 0;
	end = 6;

	for (b = 0; b < 4; b++) {
		for (a = 0; a < 7; a++) {
			if (a == start) {
				printf("*");
			}
			else if (a == end) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		start++;
		end++;
		printf("\n");
	}
	return 0;
}
