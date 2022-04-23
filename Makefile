obj-m += slkm.o 
PWD := $(CURDIR) 

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

insmod:
	sudo insmod slkm.ko

rmmod:
	sudo rmmod slkm.ko

clean: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean