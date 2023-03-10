CC := gcc
CFLAGS := -Wall -Wshadow -pedantic -ansi -std=c99 -g
SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

TARGET := main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CLIBS) $(CFLAGS) -o $@ $^
	rm -f $(OBJS)

%.o: %.c
	$(CC) $(CLIBS) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
