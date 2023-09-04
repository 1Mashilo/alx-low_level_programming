i#include "main.h"

/**
* create_file - Creates a file with the given content.
* @filename: The name of the file to create.
* @text_content: The text content to write to the file (can be NULL).
* Return: If the function succeeds, returns 1. If it fails, returns -1.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, text_length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (text_length = 0; text_content[text_length] != '\0'; text_length++)
continue;
}

file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytes_written = write(file_descriptor, text_content, text_length);

if (file_descriptor == -1 || bytes_written == -1)
return (-1);

close(file_descriptor);

return (1);
}

