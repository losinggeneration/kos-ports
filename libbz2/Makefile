TARGET = libbz2.a
OBJS= blocksort.o  \
      huffman.o    \
      crctable.o   \
      randtable.o  \
      compress.o   \
      decompress.o \
      bzlib.o

CFLAGS += -I$(TOPDIR)/include/bzlib

install-headers:
	install -d ${KOS_PATH}/include/addons/bzlib
	install -m 660 $(TOPDIR)/include/bzlib/bzlib.h ${KOS_PATH}/include/addons/bzlib/bzlib.h

include $(TOPDIR)/Makefile.prefab

