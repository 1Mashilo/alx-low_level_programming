#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of the text file to be read.
 * @letters: Number of letters to be read.
 *
 * Return: Number of bytes read and printed; 0 on failure or NULL filename.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *fileContent;
ssize_t fileDesc;
ssize_t bytesWritten;
ssize_t bytesRead;

fileDesc = open(filename, O_RDONLY);
if (fileDesc == -1)
return (0);

fileContent = malloc(sizeof(char) * letters);
bytesRead = read(fileDesc, fileContent, letters);
bytesWritten = write(STDOUT_FILENO, fileContent, bytesRead);

free(fileContent);
close(fileDesc);

return (bytesWritten);
}
