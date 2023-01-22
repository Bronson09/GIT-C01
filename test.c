#include <unistd.h>

void	fct(void)
{
	write(1, "Coucou 42\n", 10);
	write(1, "Hello World\n", 12);
}

int	main(void)
{
	fct();
	return (0);
}
