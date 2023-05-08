#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_count, write_count;
    	char buffer[1024];

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    read_count = read(fd, buffer, letters);
    if (read_count == -1)
        return 0;

    write_count = write(STDOUT_FILENO, buffer, read_count);
    if (write_count == -1 || write_count != read_count)
        return 0;

    close(fd);

    return read_count;
}
