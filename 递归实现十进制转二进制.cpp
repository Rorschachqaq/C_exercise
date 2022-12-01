#include<stdio.h>
void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');

	return;
}


int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf_s("%lu", &number) == 1)
	{
		printf("Binary equivalment: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer(q to quit):\n");
	}
	printf("Done!\n");

	return 0;
}