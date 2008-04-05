SUBDIRS := libbz2 libconio libdcplib libgl libimageload libjpeg libkmg libkosh \
	libmodplug libmp3 liboggvorbis libparallax libpcx libpng libs3m libtga \
	libtremor libtsunami lua zlib SDL lwip

INSTALL_DIR := include

export TOPDIR=${PWD}

ifndef KOS_PATH
error:
	@echo KOS_PATH not set
	@echo This may mean you don\'t seem to have a working environ.sh file.
	@echo Please take a look at kos/doc/README for more info.
	@echo
	@echo Perhaps you just need to run kos-make instead.
	@exit 0

else

all: $(patsubst %, _dir_%, $(SUBDIRS))

$(patsubst %, _dir_%, $(SUBDIRS)):
	$(MAKE) -C $(patsubst _dir_%, %, $@)

clean: $(patsubst %, _clean_dir_%, $(SUBDIRS))

$(patsubst %, _clean_dir_%, $(SUBDIRS)):
	$(MAKE) -C $(patsubst _clean_dir_%, %, $@) clean

endif

