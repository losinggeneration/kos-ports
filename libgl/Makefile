# KallistiOS ##version##
#
# addons/libgl Makefile
# (c)2001 Dan Potter
#   
# $Id: Makefile,v 1.5 2003/02/27 04:25:39 bardtx Exp $

TARGET = libgl.a
OBJS =  gldepth.o gldraw.o glkos.o gllight.o glmisc.o
OBJS += gltex.o gltrans.o glvars.o glblend.o glfog.o glmodifier.o glnzclip.o
SUBDIRS =

install-headers:
	install -d ${KOS_PATH}/include/addons/GL
	install -m 660 $(TOPDIR)/include/GL/*.h ${KOS_PATH}/include/addons/GL/


include $(TOPDIR)/Makefile.prefab


