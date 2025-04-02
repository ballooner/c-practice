#include <stdio.h>

/**
 * Modify programming project 7 so that it prompts for five quiz grades for each of five students,
 * then computes the total score and average score for each student,
 * and the average score, high score and low score for each quiz.
 */

int main(void)
{
	int studentTotals [5] = {0};
	int quizScores[5] = {0};
	int quizHighest[5] = {0};
	int quizLowest[5] = {100};

	int currNum;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter quiz scores: ");

		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &currNum);

			quizHighest[j] = currNum > quizHighest[j] ? currNum : quizHighest[j];
			quizLowest[j] = currNum < quizHighest[j] ? currNum : quizLowest[j];

			studentTotals[i] += currNum;
			quizScores[j] += currNum;
		}
	}

	printf("Student quiz data: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("Student %d total: %d \n", i + 1, studentTotals[i]);
		printf("Student %d average: %d \n", i + 1, studentTotals[i] / 5);
	}

	printf("\n");

	printf("Quiz data: \n");

	for (int i = 0; i < 5; i++)
	{
		printf("Quiz %d total: %d \n", i + 1, quizScores[i]);
		printf("Quiz %d highest: %d\n", i + 1, quizHighest[i]);
		printf("Quiz %d lowest: %d\n", i + 1, quizLowest[i]);
	}

	printf("\n");


	return 0;
}
