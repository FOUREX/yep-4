#include <stdio.h>
#include <stdlib.h>


void pause() {
	printf("\n\n\n");
	system("pause");
}


void clear() {
	system("cls");
}


void displayArray(int array[], int arrayLength) {
	printf("Array: [ ");

	for (int i = 0; i < arrayLength; i++)
		printf("%d ", array[i]);

	printf("]");
}


void fillArray(int array[], int arrayLength) {
	for (int i = 0; i < arrayLength; i++)
		array[i] = i;
}


void yep_1() {
	int arrayLength;

	printf("FUNCTION: 1. N of the first positive odd numbers\n\n");
	printf("Enter array length (N): ");
	scanf("%d", &arrayLength);

	int array[arrayLength];

	for (int i = 0, j = 0; i < arrayLength; j++) {
		if (j % 2 != 0) {
			array[i] = j;
			i++;
		}
	}

	printf("\nRESULT:\n");
	displayArray(array, arrayLength);
}


void yep_2() {
	int arrayLength;

	printf("FUNCTION: 2. Output array elements in reverse order\n\n");
	printf("Enter array length (N): ");
	scanf("%d", &arrayLength);

	int array[arrayLength];

	fillArray(array, arrayLength);

	printf("\nRESULT:\n");
	printf("Array: [ ");
	for (int i = arrayLength - 1; i >= 0; i--)
		printf("%d ", i);
	printf("]");
}


void yep_3() {
	int arrayLength, count = 0;

	printf("FUNCTION: 3. Output all odd numbers of the array\n\n");
	printf("Enter array length (N): ");
	scanf("%d", &arrayLength);

	int array[arrayLength];

	fillArray(array, arrayLength);

	printf("\nRESULT:\n");
	printf("Array: [ ");
	for (int i = 0; i < arrayLength; i++) {
		if (array[i] % 2 != 0) {
			printf("%d ", array[i]);
			count++;
		}
	}
	printf("]\n");

	printf("Count (K): %d", count);
}


int main() {
	int function;

	while (1) {
		clear();

		printf("FUNCTIONS:\n");
		printf("1. N of the first positive odd numbers\n");
		printf("2. Output array elements in reverse order\n");
		printf("3. Output all odd numbers of the array\n");
		printf("4. Exit\n");
		printf("\nSelect function: ");
		scanf("%d", &function);

		clear();

		switch (function) {
			case 1:
				yep_1();
				break;
			case 2:
				yep_2();
				break;
			case 3:
				yep_3();
				break;
			case 4:
				return 0;
			default:
				printf("Bruh, %d, rly?...", function);
		}

		pause();
	}
}
