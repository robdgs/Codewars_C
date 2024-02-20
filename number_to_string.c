/* We need a function that can transform a number (integer) into a string.

What ways of achieving this do you know?

In C, return a dynamically allocated string that will be freed by the test suite.
Examples (input --> output):

123  --> "123"
999  --> "999"
-100 --> "-100"
 */

#include <stdlib.h>
#include <string.h>

static size_t	count_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	else if (n < 10)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *number_to_string(int n) {

    char	*str;
	size_t	i;

	i = count_len(n);
	if (n == -2147483648)
		return (strdup("-2147483648"));
	str = calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i - 1] = n % 10 + '0';
		n /= 10;
		i--;
	}
	str[i - 1] = n + '0';
	return (str);

}

/*
Or just:

#include <stdio.h>

const char* number_to_string(int number) {
    char *s;
    asprintf(&s, "%d", number);
    return s;
}

*/
