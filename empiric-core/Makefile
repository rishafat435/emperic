CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = empiric-core

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET).exe main.c

run: $(TARGET)
	./$(TARGET).exe

clean:
	rm -f $(TARGET).exe