#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	fd2;
	int	times;
	char *text;
	char *text2;

	fd = open("prueba.txt", O_RDONLY);
	fd2 = open("prueba2.txt", O_RDONLY);
	times = 4;
	while (times)
	{
		text = get_next_line(fd);
		printf("%s", text);
		text2 = get_next_line(fd2);
		printf("%s", text2);
		times--;
	}
	return (0);
}