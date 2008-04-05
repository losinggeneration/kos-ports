TARGET = libimageload.a
OBJS = readpcx.o readbmp.o readjpeg.o imageload.o jitter.o

install-headers:
	install -d ${KOS_PATH}/include/addons/pcx
	install -m 660 $(TOPDIR)/include/pcx/*.h ${KOS_PATH}/include/addons/pcx/


include $(TOPDIR)/Makefile.prefab
