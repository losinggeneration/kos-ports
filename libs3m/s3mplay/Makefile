all: aica_fw.h

aica_fw.h: prog.bin
	$(KOS_PATH)/bin/bin2c prog.bin aica_fw.h.tmp
	echo 'unsigned char s3mplay[] = {' > aica_fw.h
	cat aica_fw.h.tmp >> aica_fw.h
	echo '};' >> aica_fw.h
	-rm aica_fw.h.tmp

prog.bin: prog.elf
	$(OBJCOPY) -O binary prog.elf prog.bin

prog.elf: crt0.o main.o aica.o s3mplay.o
	$(DC_ARM_CC) $(DC_ARM_AFLAGS) -Wl,-Ttext,0x00000000 -nostartfiles -nostdlib -e reset -o prog.elf crt0.o main.o aica.o s3mplay.o -lgcc

%.o: %.c
	$(DC_ARM_CC) $(DC_ARM_CFLAGS) $(INCS) -c $< -o $@

%.o: %.s
	$(DC_ARM_AS) $(DC_ARM_CFLAGS) $< -o $@

clean:
	-rm -f *.o *.srec *.elf 1ST_READ.BIN prog.bin *.bck


