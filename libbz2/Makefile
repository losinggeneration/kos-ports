TARGET = libbz2.a
OBJS= blocksort.o  \
      huffman.o    \
      crctable.o   \
      randtable.o  \
      compress.o   \
      decompress.o \
      bzlib.o

CFLAGS += -I$(KOS_PATH)/include/addons/bzlib

include ../Makefile.prefab

install-headers:
	install -d ${KOS_PATH}/include/addons/bzlib
	install -m 660 ../include/bzlib/bzlib.h ${KOS_PATH}/include/addons/bzlib/bzlib.h

