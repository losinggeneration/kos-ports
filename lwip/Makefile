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

all: install-headers make-lwip $(OBJS) linklib

# include $(KOS_BASE)/loadable/programs/Makefile.prefab
include ../Makefile.prefab

install-headers:
	install -d ${KOS_PATH}/include/addons/lwip
	install -d ${KOS_PATH}/include/addons/lwip/kos
	install -m 660 ../include/lwip/kos/*.h ${KOS_PATH}/include/addons/lwip/kos/
	install -d ${KOS_PATH}/include/addons/lwip/kos/arch
	install -m 660 ../include/lwip/kos/arch/*.h ${KOS_PATH}/include/addons/lwip/kos/arch/
	install -d ${KOS_PATH}/include/addons/lwip/kos/lwip
	install -m 660 ../include/lwip/kos/lwip/*.h ${KOS_PATH}/include/addons/lwip/kos/lwip/
	install -d ${KOS_PATH}/include/addons/lwip/kos/netif
	install -m 660 ../include/lwip/kos/netif/*.h ${KOS_PATH}/include/addons/lwip/kos/netif/
	install -d ${KOS_PATH}/include/addons/lwip/ipv4
	install -d ${KOS_PATH}/include/addons/lwip/ipv4/lwip
	install -m 660 ../include/lwip/ipv4/lwip/*.h ${KOS_PATH}/include/addons/lwip/ipv4/lwip/
	install -d ${KOS_PATH}/include/addons/lwip/ipv6
	install -d ${KOS_PATH}/include/addons/lwip/ipv6/lwip
	install -m 660 ../include/lwip/ipv6/lwip/*.h ${KOS_PATH}/include/addons/lwip/ipv6/lwip/
	install -d ${KOS_PATH}/include/addons/lwip/lwip
	install -m 660 ../include/lwip/lwip/*.h ${KOS_PATH}/include/addons/lwip/lwip/
	install -d ${KOS_PATH}/include/addons/lwip/netif
	install -m 660 ../include/lwip/netif/*.h ${KOS_PATH}/include/addons/lwip/netif/

make-lwip:
	$(MAKE) -f Makefile.lwip

CFLAGS += -DIPv4 \
	-I../include/lwip -I../include/lwip/kos \
	-I../include/lwip/ipv4

#exports.o: exports.c

#exports.c: exports.txt
#	$(KOS_BASE)/utils/genexports/genexports.sh exports.txt exports.c lwip_symtab

clean: defaultclean
	$(MAKE) -f Makefile.lwip clean

