/**
 * --- loc ---
 *
 * Count lines of code.
 *
 * Copyright (C) 2021 Robert Coffey
 * Released under the GPLv2 license
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reset_line(char **line, size_t *line_size);

int main(void)
{
	size_t loc = 0;	// Lines of code
	size_t sloc = 0;	// Non-empty lines of code
	size_t bytes = 0;	// Total size of the input in bytes

	char *line = NULL;
	size_t line_size = 0;

	while (getline(&line, &line_size, stdin) != EOF) {
		++loc;
		if (*line != '\n')
			++sloc;
		bytes += strlen(line);
		reset_line(&line, &line_size);
	}

	printf("loc:\t%ld\n", loc);
	printf("sloc:\t%ld\n", sloc);
	printf("bytes:\t%ld\n", bytes);

	return 0;
}

void reset_line(char **line, size_t *line_size)
{
	free(*line);
	*line = NULL;
	*line_size = 0;
}
