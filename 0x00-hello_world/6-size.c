#include <stdio.h>

/**
 * main - main function
 * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %c byte(s)", sizeof(char));
	printf("Size of a int: %u byte(s)", sizeof(int));
	printf("Size of a long int: %u byte(s)", sizeof(long int));
	printf("Size of a long long int: %u byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	return (0);

}
