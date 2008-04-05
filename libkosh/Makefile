# libkosh for KallistiOS ##version##
#
# Makefile
# (c)2002 Dan Potter
#
# $Id: Makefile,v 1.2 2003/02/27 04:25:40 bardtx Exp $

TARGET = libkosh.a
OBJS = builtin.o chdir.o kosh.o input.o

install-headers:
	install -d ${KOS_PATH}/include/addons/kosh
	install -m 660 $(TOPDIR)/include/kosh/*.h ${KOS_PATH}/include/addons/kosh/


include $(TOPDIR)/Makefile.prefab
