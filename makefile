EXEC := loc

SRC_DIR := src
OBJ_DIR := obj

HEDS := $(wildcard $(SRC_DIR)/*.h)
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) -o $@ $^

$(OBJS):$(HEDS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -o $@ $(CFLAGS) -c $<

$(OBJ_DIR):
	mkdir -p $@

.PHONY: clean
clean:
	rm -frv $(OBJ_DIR)

.PHONY: remove
remove:
	rm -frv $(EXEC) $(OBJ_DIR)
