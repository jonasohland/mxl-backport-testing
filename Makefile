CC      = gcc
CFLAGS  = -O3
LDFLAGS =
DEPS    = features.h
OBJ     = $(patsubst %.c,%.o,$(wildcard *.c))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

print-features: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ) test
