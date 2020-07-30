#include <stdio.h>

int main()
{
	void work_number_one();
	// 1. Maths. Uo = Ui * (R1 / (R2 + R1))
		int Ui;
		int Uo;
		int R1;
		int R2;
		// scanf any three variables and get the fourth
		//Ui = Uo * (R1 + R2) / R1;
		//R1 = R2 * Uo / (Ui - Uo);
		//R2 = (Ui - Uo) * R1 / Uo;

		// 2. Terms 0..100
		const int RANGE_MIN = 0;
		const int RANGE_MAX = 100;
		int input;
		printf("Enter a number: ");
		scanf_s("%d", &input);
		printf("Your number '%d' %sfit the range of (%d to %d)\n",
			input,
			(input >= RANGE_MIN && input <= RANGE_MAX) ? "" : "does not ",
			RANGE_MIN,
			RANGE_MAX
		);

		// 3. Cycles mean()
		const int NUMS_TO_ASK = 10;
		int i = 0;
		float total = 0;
		do {
			printf("Enter a number: ");
			scanf_s("%d", &input);
			total += input;
		} while (++i < NUMS_TO_ASK);
		printf("The mean of entered numbers is: %.2f\n", total / i);

		// 4. Starred triangle
		int lines;
		printf("Enter number of lines: ");
		scanf_s("%d", &lines);
		int j;
		for (i = 0; i < lines; i++) {
			for (j = 1; j < lines - i; j++)
				printf(" ");

			for (j = lines - i * 2; j <= lines; j++)
				printf("^");

			printf("\n");
		}


}