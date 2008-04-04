# KallistiOS ##version##
#
# net/lwip/Makefile
# Copyright (C)2003 Dan Potter
#
# $Id: Makefile,v 1.4 2003/07/15 07:55:02 bardtx Exp $

# TARGET := net_lwip.elf
TARGET := liblwip4.a

# OBJS := module.o exports.o
OBJS := module.o
LIB_OBJS := build/*.o
LOCAL_CLEAN := exports.c

all: make-lwip $(OBJS) linklib

make-lwip:
	$(MAKE) -f Makefile.lwip

CFLAGS += -DIPv4 \
	-I$(TOPDIR)/include/lwip -I$(TOPDIR)/include/lwip/kos \
	-I$(TOPDIR)/include/lwip/ipv4

#exports.o: exports.c

#exports.c: exports.txt
#	$(KOS_BASE)/utils/genexports/genexports.sh exports.txt exports.c lwip_symtab

clean: defaultclean
	$(MAKE) -f Makefile.lwip clean

# include $(KOS_BASE)/loadable/programs/Makefile.prefab
include $(TOPDIR)/Makefile.prefab
