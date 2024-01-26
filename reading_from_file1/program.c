#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int total_num, i, grade_num, grades = 0;
	double avg;
	FILE *file = fopen("studentGrades.txt", "r");

	if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

	fscanf(file, "%d", &total_num);
	int *arr_int = malloc(total_num * sizeof(int));

    if (arr_int == NULL) {
        fprintf(stderr, "Error allocating memory\n");
        fclose(file);
        return 1;
	}

	for (i = 0; i < total_num; i++) {
		fscanf(file, "%d", &grade_num);
		arr_int[i] = grade_num;
		// printf("grade_num = %d\n", grade_num);
		grades = grades + grade_num;
	}

	printf("The average of: ");
    for (i = 0; i < total_num; i++) {
        printf("%d ", arr_int[i]);
    }

	avg = (double) grades / total_num;
	printf("is %.2lf\n", avg);

	free(arr_int);
	fclose(file);
}
