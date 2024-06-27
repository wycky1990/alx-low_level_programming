#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always success
 */

int main(void)
{
int i, z = 0;

while (i < 1024)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
z += i;
}
i++;
}
printf("%d", z);
return (0);
}
