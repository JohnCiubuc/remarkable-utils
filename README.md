# remarkable-utils
A collection of applications for the remarkable tablet

# How to build
* Download the latest toolchain for your device from <https://remarkablewiki.com/devel/toolchain> (e.g. `codex-x86_64-cortexa9hf-neon-rm10x-toolchain-3.1.15.sh`)
* run that file to install the toolchain (e.g. `sudo sh codex-x86_64-cortexa9hf-neon-rm10x-toolchain-3.1.15.sh`)
* source the printed environment file (e.g. `source /opt/codex/rm11x/3.1.15/environment-setup-cortexa7hf-neon-remarkable-linux-gnueabi`)
* compile `main.cpp` using the `CC` environment variable (e.g. `$CC -O2 main.cpp`)
    * if there is an error like `no such file or directory`, copy the command and execute it directly instead of using `$CC`, e.g. `arm-remarkable-linux-gnueabi-g++  -mfpu=neon -mfloat-abi=hard -mcpu=cortex-a7 --sysroot=/opt/codex/rm11x/3.1.15/sysroots/cortexa7hf-neon-remarkable-linux-gnueabi -O2 main.cpp`)


