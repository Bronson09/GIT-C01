#include <unistd.h>

void ft_print_alphabet(void);

int main () 
{
	char c ;
	for (c = 'a'; c <= 'z'; c++) {
	write(1, &c, 1);
	}
	return 0;
}

