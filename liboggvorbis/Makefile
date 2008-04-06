# KallistiOS Ogg/Vorbis Decoder Library
#
# Library Makefile
# (c)2001 Thorsten Titze
# Based on KOS Makefiles by Dan Potter

TARGET = liboggvorbisplay.a
OBJS =
SUBDIRS = liboggvorbis liboggvorbisplay

all: install-headers subdirs copylibs

# Copy libs from target oggvorbis and oggvorbisplay to root
copylibs:
	install -m 660 ./liboggvorbisplay/lib/liboggvorbisplay.a $(KOS_PATH)/lib/addons/

include ../Makefile.prefab

install-headers:
	install -d $(KOS_PATH)/include/addons/oggvorbis
	install -d $(KOS_PATH)/include/addons/ogg
	install -m 660 ../include/oggvorbis/*.h $(KOS_PATH)/include/addons/oggvorbis/
	install -m 660 ../include/ogg/*.h $(KOS_PATH)/include/addons/ogg/
