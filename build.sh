#!/bin/bash
ENVIRO="/fast/rm11x/3.1.15/environment-setup-cortexa7hf-neon-remarkable-linux-gnueabi"
SYS_ROOT="/fast/rm11x/3.1.15/sysroots/cortexa7hf-neon-remarkable-linux-gnueabi"
REM_IP="10.11.99.1"

source $ENVIRO
arm-remarkable-linux-gnueabi-g++  -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a7 --sysroot=$SYS_ROOT -O2 main.cpp -o remarkable-switcher
scp -i ~/.ssh/id_rsa remarkable-switcher root@$REM_IP:/home/root/remarkable-switcher
