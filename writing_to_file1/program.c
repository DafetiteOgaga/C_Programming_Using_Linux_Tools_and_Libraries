#include <stdio.h>

int main(void) {
	int grade_from_file, grades_to_print, u_input;
	char filename[] = "myGrades.txt";

	FILE *wr_file = fopen(filename, "a");
	FILE *r_file = fopen(filename, "r");

	printf("Enter an int: ");
	scanf("%d", &u_input);
	while (fscanf(r_file, "%d", &grade_from_file) != EOF)
		;
	fclose(r_file);
	// printf("last grade in file = %d\n", grade_from_file);
	if (grade_from_file != u_input) {
		// printf("user input = %d\n", u_input);
		fprintf(wr_file, "%d ", u_input);
	}
	fclose(wr_file);

	FILE *pr_file = fopen(filename, "r");
	while (fscanf(pr_file, "%d", &grades_to_print) != EOF)
		printf("%d ", grades_to_print);
	fclose(pr_file);
	printf("\n");
}