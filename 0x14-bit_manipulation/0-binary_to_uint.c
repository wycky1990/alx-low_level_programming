#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a binary number string
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
        int a;
        unsigned int abraham = 0;

        if (!b)
                return (0);
        for (a = 0; b[a]; a++)
        {
                if (b[a] < '0' || b[a] > '1')
                        return (0);
                abraham = 2 * abraham + (b[alx] - '0');
        }
        return (abraham);
}
