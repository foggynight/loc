EXEC := loc
INSTALL_DIR := /usr/local/bin

CC := gcc
CFLAGS := -O3 -Wall -Wextra -Wpedantic

SRCS := src/main.c

all:
	$(CC) -o $(EXEC) $(CFLAGS) $(SRCS)

.PHONY: remove
remove:
	rm -frv $(EXEC) $(OBJ_DIR)

.PHONY: install
install:
	cp -v $(EXEC) $(INSTALL_DIR)/$(EXEC)

.PHONY: uninstall
uninstall:
	rm -fv $(INSTALL_DIR)/$(EXEC)
