#include <stdio.h>

int main(void) {
	int count = 2, serial = 0;
	double grade_num, my_class;

	FILE *file = fopen("gradeComparison.txt", "r");
	fscanf(file, "%lf", &my_class);

	while (fscanf(file, "%lf", &grade_num) != EOF) {
		if (grade_num > my_class) {
			// printf("grade_num = %.2lf : serial = %d\n", grade_num, count);
			serial = count;
			break;
		}
		count++;
	}
	if (serial) {
		printf("No %d\n", serial);
	} else
		printf("Yes\n");
	
	fclose(file);
}