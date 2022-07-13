
/**
 * char *_strncpy - copies a string
 * @dest: pointer to the copied string
 * @src: string to copy
 * @n: size of the bite to copy
 * Return: copied string
 */


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest); }
