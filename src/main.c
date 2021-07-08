#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t loc = 0;	// Lines of code
	size_t sloc = 0;	// Non-empty lines of code
	size_t bytes = 0;	// Total size in bytes

	char *line = NULL;
	size_t line_size = 0;

	int count;
	while ((count = getline(&line, &line_size, stdin)) != EOF) {
		++loc;
		if (*line != '\n')
			++sloc;
		bytes += count;
	}

	free(line);

	printf("loc:\t%ld\n"
	       "sloc:\t%ld\n"
	       "bytes:\t%ld\n",
	       loc, sloc, bytes);

	return 0;
}
