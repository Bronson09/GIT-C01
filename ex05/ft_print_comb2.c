#include <unistd.h>

void ft_print_comb2(void)
{
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
		char buf[4];

		buf[0] = i / 10 + '0';
		buf[1] = i % 10 + '0';
		buf[0] = j / 10 + '0';
		buf[1] = j % 10 + '0';

		write(1, buf, 2);
		write(1, " ", 1);
		}
	}
}



