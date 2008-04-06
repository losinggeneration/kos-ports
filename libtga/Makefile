# KallistiOS ##version##
#
# libtga Makefile
# (c)2002 Dan Potter
#   
# $Id: Makefile,v 1.2 2003/02/27 04:25:42 bardtx Exp $

TARGET = libtga.a
OBJS = tga.o

include ../Makefile.prefab

install-headers:
	install -d ${KOS_PATH}/include/addons/tga
	install -m 660 ../include/tga/*.h ${KOS_PATH}/include/addons/tga/
