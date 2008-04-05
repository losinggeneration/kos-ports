# KallistiOS ##version##
#
# libmp3 Makefile
#   
# $Id: Makefile,v 1.3 2003/02/27 04:25:40 bardtx Exp $

TARGET = libmp3.a
OBJS =
LIB_OBJS = build/*.o
SUBDIRS = xingmp3 libmp3
LOCAL_CLEAN = build/*.o build/*.a
# SUBDIRS = mpglib libmp3

install-headers:
	install -d ${KOS_PATH}/include/addons/mp3
	install -m 660 $(TOPDIR)/include/mp3/*.h ${KOS_PATH}/include/addons/mp3/


include $(TOPDIR)/Makefile.prefab
