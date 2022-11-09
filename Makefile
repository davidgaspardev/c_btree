CC=clang
CFLAGS=-g -Wall
BINS=dist

all: $(BINS)
	$(CC) $(CFLAGS) main.c -o $(BINS)/btree

dist:
	@mkdir dist

run:
	$(BINS)/btree

clean:
	$(RM) -R $(BINS)/*