# Tsunami for KallistiOS ##version##
#
# Makefile
# (c)2002 Dan Potter
#   
# $Id: Makefile,v 1.2 2003/02/27 04:25:42 bardtx Exp $

TARGET := libtsunami.a

# Main sources
OBJS_MAIN := $(patsubst %.cpp,%.o,$(wildcard src/*.cpp))

# Drawables
OBJS_DRW := $(patsubst %.cpp,%.o,$(wildcard src/drawables/*.cpp))

# Animations
OBJS_ANIMS := $(patsubst %.cpp,%.o,$(wildcard src/anims/*.cpp))

# Triggers
OBJS_TRIGS := $(patsubst %.cpp,%.o,$(wildcard src/triggers/*.cpp))

OBJS := $(OBJS_MAIN) $(OBJS_DRW) $(OBJS_ANIMS) $(OBJS_TRIGS)

install-headers:
	install -d ${KOS_PATH}/include/addons/tsu
	install -m 660 $(TOPDIR)/include/tsu/*.h ${KOS_PATH}/include/addons/tsu/
	install -d ${KOS_PATH}/include/addons/tsu/anims
	install -m 660 $(TOPDIR)/include/tsu/anims/*.h ${KOS_PATH}/include/addons/tsu/anims/
	install -d ${KOS_PATH}/include/addons/tsu/drawables
	install -m 660 $(TOPDIR)/include/tsu/drawables/*.h ${KOS_PATH}/include/addons/tsu/drawables/
	install -d ${KOS_PATH}/include/addons/tsu/triggers
	install -m 660 $(TOPDIR)/include/tsu/triggers/*.h ${KOS_PATH}/include/addons/tsu/triggers/

# Grab the shared Makefile pieces
include $(TOPDIR)/Makefile.prefab
