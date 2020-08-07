#include "holberton.h"
/**
 * main - cp a file to another file
 * @av: argument vector
 * @ac: argument count
 * Return: see below
 *  97: incorrect arg count
 *  98: invalid src
 *  99: write fail
 *  100: close fail
 */
int main(int ac, char **av)
{
	int src, dest, test1 = 0, test2 = 0;
	char *buff[1024];

	if (ac != 3)
	{	dprintf(2, "Usage: cp file_from file_to\n");
		return (97);	}
	src = open(av[1], O_RDONLY);
	dest = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest == -1)
	{	close(src);
		close(dest);
		dprintf(2, "Error: Can't read from file %s", av[1]);
		return (98);	}
	while ((test1 = read(src, buff, 1024)) > 0)
	{	test2 = write(dest, buff, test1);
		if (test2 == -1)
		{	close(src);
			close(dest);
			dprintf(2, "Error: Can't write to %s", av[2]);
			return (99);	}}
	test1 = close(src);
	if (test1 == -1)
	{	dprintf(2, "Error: Can't close fd %s", av[1]);
		return (100);	}
	test2 = close(dest);
	if (test2 == -1)
	{       dprintf(2, "Error: Can't close fd %s", av[2]);
		return (100);   }
	return (0);
}
