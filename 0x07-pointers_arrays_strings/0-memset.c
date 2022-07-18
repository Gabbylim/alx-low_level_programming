/**
 * _memset - sets a specific bytes of memory
 * @s: memory area
 * @b: the char to be used
 * @n: mem size
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
