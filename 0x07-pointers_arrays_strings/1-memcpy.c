/**
 * _memcpy - copies nbytes from src to dest
 * @dest: area to copy to
 * @src : area to copy from
 * Return: memory copied
 */

char *_memcpy(char *dest,char *src,unsigned int n)
{
int i;
i = 0;
while (n > 0 )
{
dest[i] = src[i];
i++;
n--;
}
return (dest);
}
