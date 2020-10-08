SHELL = /bin/sh
CC= gcc
AR = ar rc
CFLAGS = -O3 -pipe -D_GNU_SOURCE  -I/usr/include/eiffelstudio-19.05 -I../../../generated_wrapper/c/include -I../include -I/usr/include-I../../../C/include
LDFLAGS = 
LIBS = -lm
MAKE = make
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
RANLIB = :
RM = /bin/rm -f
PLATFORM = unix

.c.o:
	$(CC) $(CFLAGS) -c $<

OBJECTS = ewg_eWiringPi_callback_c_glue_code.o

eif_eWiringPi.a: $(OBJECTS)
	mkdir -p ../../../C/spec/$(PLATFORM)/lib
	$(RM) $@
	$(AR) $@ $(OBJECTS)
	$(MV) $@ ../../../C/spec/$(PLATFORM)/lib
	$(RANLIB) ../../../C/spec/$(PLATFORM)/lib/$@
	$(MAKE) clean

	#$(RM) eif_eWiringPi.a $(OBJECTS) Makefile config.sh
clean:
	$(RM) eif_eWiringPi.a $(OBJECTS)
