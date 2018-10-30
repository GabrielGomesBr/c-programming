CC=gcc
CFLAGS=-I.
DEPS = rotate.c
OBJ = read-matrix.o rotate.o
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
rotate: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
