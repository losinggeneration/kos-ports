TARGET = libz.a
OBJS = adler32.o compress.o crc32.o uncompr.o trees.o deflate.o\
       zutil.o inflate.o infblock.o inftrees.o infcodes.o infutil.o \
	inffast.o gzio.o  kos_zlib.o

CFLAGS += -I../include/zlib -DNO_ERRNO_H

include ../Makefile.prefab

install-headers:
	install -d ${KOS_PATH}/include/addons/zlib
	install -m 660 ../include/zlib/*.h ${KOS_PATH}/include/addons/zlib/
