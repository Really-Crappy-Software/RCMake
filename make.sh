gcc rcmake.c -o rcmake
sudo cp rcmake /usr/bin
sudo cp colour.h /usr/local/include
gcc rcmakefile.c -o rcmakefile
rcmake
