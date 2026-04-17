CC = ${PREFIX}-gcc
AR = ${PREFIX}-ar
OBJDUMP = ${PREFIX}-objdump
SIZE = ${PREFIX}-size

.PHONY: build
build: clean
	@echo '=====< Building BMP3XX library >================'
	@mkdir build || echo "'build' directory has already created."
	${CC} ${FLAGS} -I./inc -c src/bmp3xx_barsotion.c -o build/bmp3xx_barsotion.o
	@echo '=====< Creating an archive >===================='
	${AR} rcs libbmp3xx-barsotion.a build/*
	@echo '=====< Totals >================================='
	@${SIZE} -t --format=berkeley libbmp3xx-barsotion.a

clean:
	rm -rf build
	rm -f *.a
