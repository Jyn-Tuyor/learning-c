#include <stdio.h>

int main() {

	// With '\0' (null terminator) 
	char str_with[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	// Without '\0' (null terminator) 
	char str_without[] = {'h', 'e', 'l', 'l', 'o'};

	
	printf("%s", str_without);

	return 0;
}