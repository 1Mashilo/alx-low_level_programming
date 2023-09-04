#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *destination_file);
void close_descriptor(int file_descriptor);

/**
* allocate_buffer - Allocates 1024 bytes for a buffer.
* @destination_file: The name of the destination file.
* Return: A pointer to the newly-allocated buffer.
*/
char *allocate_buffer(char *destination_file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't allocate memory for %s\n", destination_file);
exit(99);
}

return (buffer);
}

/**
* close_descriptor - Closes a file descriptor.
* @file_descriptor: The file descriptor to be closed.
*/
void close_descriptor(int file_descriptor)
{
int close_result;

close_result = close(file_descriptor);

if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
exit(100);
}
}

/**
* main - Copies the contents of one file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect, exit with code 97.
* If the source file does not exist or cannot be read, exit with code 98.
* If the destination file cannot be created or written to, exit with code 99.
* If either file cannot be closed, exit with code 100.
*/
int main(int argc, char *argv[])
{
int source_fd, dest_fd, read_result, write_result;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = allocate_buffer(argv[2]);
source_fd = open(argv[1], O_RDONLY);
read_result = read(source_fd, buffer, 1024);
dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_fd == -1 || read_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

write_result = write(dest_fd, buffer, read_result);
if (dest_fd == -1 || write_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
} while (read_result > 0);

free(buffer);
close_descriptor(source_fd);
close_descriptor(dest_fd);

return (0);
}

