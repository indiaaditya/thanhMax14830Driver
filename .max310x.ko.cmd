cmd_/home/pi/driverc/max310x.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o /home/pi/driverc/max310x.ko /home/pi/driverc/max310x.o /home/pi/driverc/max310x.mod.o;  true