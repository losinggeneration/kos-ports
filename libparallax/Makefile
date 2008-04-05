# Parallax for KallistiOS ##version##
#
# Makefile
# (c)2002 Dan Potter
#   
# $Id: Makefile,v 1.2 2003/02/27 04:25:41 bardtx Exp $

TARGET = libparallax.a
OBJS := $(patsubst %.c,%.o,$(wildcard src/*.c))

install-headers:
	install -d ${KOS_PATH}/include/addons/plx
	install -m 660 $(TOPDIR)/include/plx/*.h ${KOS_PATH}/include/addons/plx/

# Grab the shared Makefile pieces
include $(TOPDIR)/Makefile.prefab
