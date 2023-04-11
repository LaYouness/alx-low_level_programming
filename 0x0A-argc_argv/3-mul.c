#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry
 *@argc: num of args
 *@argv: args
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int s;

if (argc < 3 || argc > 3)
{
printf("Error");
return (1);
}
else
{
s = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", s);
return (0);
}
}
