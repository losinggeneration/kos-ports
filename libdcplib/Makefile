# 
# Dreamcast PLIB Derivative makefile by Peter Hatch
# based on
# addons/libgl Makefile
# (c)2001 Dan Potter
#   

TARGET = libdcplib.a
OBJS =  ulError.o sg.o fnt.o fntTXF.o
# Comment the next line out if you don't want sgd (SG stuff using doubles instead of floats) or sgIsect (I haven't checked, but FNT doesn't need it).
OBJS += sgd.o sgIsect.o
SUBDIRS =

install-headers:
	install -d ${KOS_PATH}/include/addons/dcplib
	install -m 660 $(TOPDIR)/include/dcplib/*.h ${KOS_PATH}/include/addons/dcplib/

include $(TOPDIR)/Makefile.prefab


