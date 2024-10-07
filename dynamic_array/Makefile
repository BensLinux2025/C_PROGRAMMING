# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Target executable
TARGET = dynamic_array

# Source files
SRCS = main.c

# Object files
OBJS = main.o

# Rule to build the target
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to build .o files from .c files
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

