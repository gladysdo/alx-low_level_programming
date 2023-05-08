#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file.
 * @filename: it a parameter
 * @text_content: the parameter write to this parameter
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[write_count])
			write_count++;

		write_count = write(fd, text_content, write_count);
	}
	close(fd);
	if (write_count == -1)
		return (-1);

	return (1);
}
