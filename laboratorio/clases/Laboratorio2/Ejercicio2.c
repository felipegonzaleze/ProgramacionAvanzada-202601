#include <stdio.h>

int main() {
	struct Example {
		char a;
		int b;
		char c;
	};

	struct Example e1;
	printf("%ld\n", sizeof(e1));
}
