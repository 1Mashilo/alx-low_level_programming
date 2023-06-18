#include <stdio.h>
#include <unistd.h>
/**
* main - printing withiut printf and puts
*
* Return: always (1)
*
*/
int main(void)
{
	  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n;	    write(STDERR_FILENO, message, sizeof(message) - 1);
	      return 1;
}
