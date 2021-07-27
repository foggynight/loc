#include <stdio.h>
#include <stdlib.h>

void read_file(FILE *file,
			   size_t *loc,
			   size_t *sloc,
			   size_t *bytes);

int main(void)
{
	size_t loc = 0;             // Lines of code
	size_t sloc = 0;            // Non-empty lines of code
	size_t bytes = 0;           // Total size in bytes

	read_file(stdin, &loc, &sloc, &bytes);

	printf("loc:\t%ld\n"
		   "sloc:\t%ld\n"
		   "bytes:\t%ld\n",
		   loc, sloc, bytes);

	return 0;
}

void read_file(FILE *file,
               size_t *loc,
               size_t *sloc,
               size_t *bytes)
{
	char *line = NULL;
	size_t line_size = 0;

	int count;
	while ((count = getline(&line, &line_size, file)) != EOF) {
		++(*loc);
		if (*line != '\n')
			++(*sloc);
		(*bytes) += count;
	}

	free(line);
}
