#include <stdio.h>
#include <Runtime/String.h>

void myecho (StringDesc * mlStr, int exn) {
	char * buff = (char*)calloc(mlStr->size, 1);
	if (buff) {
		convertStringToC(mlStr, buff, mlStr->size, exn);
		printf("echo[%s]\n", buff);
		free(buff);
	}
}

