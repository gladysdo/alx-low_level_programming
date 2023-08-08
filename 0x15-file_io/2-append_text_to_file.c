#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
