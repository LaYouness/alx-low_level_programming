#include <stdio.h>
/**
 *main - entry
 *@argc: num of args
 *@argv: args
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int i = 0;

(void) argv;
while (i < argc)
{
i++;
}
printf("%d\n", i);
return (0);
}
