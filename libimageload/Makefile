TARGET = libimageload.a
OBJS = readpcx.o readbmp.o readjpeg.o imageload.o jitter.o

include ../Makefile.prefab

install-headers:
	install -d ${KOS_PATH}/include/addons/imageload
	install -m 660 ../include/imageload/*.h ${KOS_PATH}/include/addons/imageload/
