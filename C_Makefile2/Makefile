# Compiler
CC = gcc

# Flags for compiler
CFLAGS = -Wall -g

# Target executable
TARGET = program

# Source files
SRCS = main.c add.c

# Object files (generated from source files)
OBJS = main.o add.o

# Target rule to build the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build .o files from .c files
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

