obj-m += kmod.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

debug:
	make CONFIG_DEBUG_INFO=y -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
