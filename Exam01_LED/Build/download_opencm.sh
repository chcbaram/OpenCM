#!/bin/bash
make opencm=1
~/stm32ld /dev/tty.usbmodemfa141 115200 main.bin 1 opencm
