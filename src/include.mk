CFLAGS=-g -Wall
INCLUDES=-I $(TOPDIR)/include
ARCHIVE=$(TOPDIR)/cs_app.a
TESTS_DIR=$(TOPDIR)/tests

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

