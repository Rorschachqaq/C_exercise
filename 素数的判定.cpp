#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>

int main(void)
{
	int div, num;
	bool isPrime;

	printf("enter a num\n");
	while (scanf_s("%d", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if (div * div != num)
					printf("%d is divisible by %d and %d.\n", num, div, num / div);
				else
					printf("%d is divisible by %d.\n", num, div);
				isPrime = false;
			}
		}

		if (isPrime)
			printf("%d is prime.\n", num);
		printf("enter another num:");
	}
	printf("bye!");

	return 0;
}