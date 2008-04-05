TARGET = libz.a
OBJS = adler32.o compress.o crc32.o uncompr.o trees.o deflate.o\
       zutil.o inflate.o infblock.o inftrees.o infcodes.o infutil.o \
	inffast.o gzio.o  kos_zlib.o

CFLAGS += -I$(TOPDIR)/include/zlib -DNO_ERRNO_H

install-headers:
	install -d ${KOS_PATH}/include/addons/zlib
	install -m 660 $(TOPDIR)/include/zlib/*.h ${KOS_PATH}/include/addons/zlib/


include $(TOPDIR)/Makefile.prefab
