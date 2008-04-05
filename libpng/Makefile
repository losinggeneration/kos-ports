TARGET = libpng.a
OBJS = pngerror.o pnggccrd.o pngget.o pngmem.o pngpread.o pngread.o \
	pngrio.o pngrtran.o pngrutil.o pngset.o pngtrans.o pngvcrd.o \
	pngwrite.o pngwtran.o pngwutil.o png.o readpng.o kos_img.o

CFLAGS += -I$(TOPDIR)/include/png \
	-I$(TOPDIR)/include/zlib \
	-DPNG_NO_MNG_FEATURES \
	-DPNG_NO_READ_sCAL -DPNG_NO_WRITE_sCAL \
	-DPNG_NO_SETJMP_SUPPORTED \
	-DPNG_NO_WRITE_tIME

install-headers:
	install -d ${KOS_PATH}/include/addons/png
	install -m 660 $(TOPDIR)/include/png/*.h ${KOS_PATH}/include/addons/png/


include $(TOPDIR)/Makefile.prefab
