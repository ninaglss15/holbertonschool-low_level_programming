#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BYTES_PER_READ 100

/**
* @brief Copies the contents of file_1 to file_2
*/
int main(int argc, char *argv[])
{
    char* file_1_path = argv[1];
	char* file_2_path = argv[2];
    char reading_buffer[BYTES_PER_READ];
	int bytes_read, bytes_written;
    int file_2;
    int file_1;

    if (argc < 3)
    {
		fprintf(stderr, "Usage: %s <file_1> <file_2>\n", argv[0]);
		return (1);
	}

	file_1 = open(file_1_path, O_RDONLY);

	if (file_1 < 0) {
		fprintf(stderr, "Error opening first file\n");
		return (1);
	}

	file_2 = open(file_2_path, O_WRONLY | O_TRUNC | O_CREAT, 0666);

	if (file_2 < 0) {
		fprintf(stderr, "Error opening second file\n");
		return (1);
    }

	while ((bytes_read = read(file_1, reading_buffer, BYTES_PER_READ)) > 0) {


		reading_buffer[bytes_read] = '\0';

		if ((bytes_written = write(file_2, reading_buffer, bytes_read) < 0))
		{
			fprintf(stderr, "Error writing to second file\n");
			return (1);
		}

	}

	if (bytes_read < 0) {
		fprintf(stderr, "Error reading from first file\n");
		return (1);
	}

	return (0);
}
