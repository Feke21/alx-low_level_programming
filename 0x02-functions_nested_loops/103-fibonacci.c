#include <stdio.h>
/**
 * main - Print sum of even terms
 * in fibonacci sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int t1, t2, fs, afs;

	t1 = 1;
	t2 = 2;
	/* initialize the sequence to start from zero for counting */
	fs = afs = 0;
	while (fs <= 4000000)
	{
		fs = t1 + t2;
		t1 = t2;
		t2 = fs;
		/* if term is even then add to afs */
		if ((t1 % 2) == 0)
		{
			afs += t1;
		}
	}
	printf("%ld\n", afs);
	return (0);
}
