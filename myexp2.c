#include <stdio.h>
#include <assert.h>

int myexp2 (int x) {
	assert(0 <= x);
	return x == 0
			? 1
			: 2 * myexp2 (x-1);
}

