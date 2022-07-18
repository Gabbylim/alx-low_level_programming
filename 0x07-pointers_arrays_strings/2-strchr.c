
/**
 * _strchr - locate a chatracter
 * @s: array string
 * @c: character to locate
 * Return: NULL if character not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}

else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}
return (s + 1);
}
