#include <stdio.h>

/**
 * main - main function
 * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: % byte(s)", sizeof(char));
	printf("Size of a int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %ld byte(s)", sizeof(float));
	return (0);

}
