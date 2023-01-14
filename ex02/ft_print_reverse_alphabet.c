#include <unistd.h>

void ft_print_reverse_alphabet(void);

int main () 
{
	char c;
		for (c = 'z'; c >= 'a'; c-- ) {
		write(1, &c, 1);
	}
	return 0;
}
