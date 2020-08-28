CC = gcc
CFLAGS = -I.
OBJ = Array.o test_Array.o

DEPS = test_Array.h Array.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
Test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
