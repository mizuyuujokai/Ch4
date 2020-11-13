#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 7

int main(void)
{
	int face;
	int roll;
	int fz[SIZE] = {0};

	srand(time(NULL));

	for (roll = 1; roll <= 6000; roll++)
	{
		face = 1 + rand() % 6;
		++fz[face];
	}
	printf("%s%17s\n", "Face", "Frequency");

	for (face = 1; face < SIZE; face++)
	{
		printf("%4d%17d\n", face, fz[face]);
	}
	system("pause");
	return 0;
}