CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = program
SRCS = main.c Vector3D.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
