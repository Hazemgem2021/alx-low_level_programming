#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
char abe[] = "putchar";
int c;
for (c = 0; c < 8; c++)
{
putchar(abe[c]);
}
putchar('\n');
return (0);
}
