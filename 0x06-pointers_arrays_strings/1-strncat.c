
/**
 * char *_strncat - concanate strings
 * @dest: string to be concanated to
 * @src: string to concate
 * @n: bytes to be used
 * Return: returns new concanated string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];

}
dest[i + j] = '\0';
return (dest); }
