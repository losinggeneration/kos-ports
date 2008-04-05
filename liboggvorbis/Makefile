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
	install ./liboggvorbisplay/lib/liboggvorbisplay.a $(KOS_PATH)/lib/addons/

install-headers:
	install -d $(KOS_PATH)/lib/addons/oggvorbis
	install -d $(KOS_PATH)/lib/addons/ogg
	install -m 660 $(TOPDIR)/include/oggvorbis/*.h $(KOS_PATH)/lib/addons/oggvorbis/
	install -m 660 $(TOPDIR)/include/ogg/*.h $(KOS_PATH)/lib/addons/ogg/

include $(TOPDIR)/Makefile.prefab
