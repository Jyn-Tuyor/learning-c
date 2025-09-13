#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// 1, 2, 1, 1, 5
// void print_uniques(int array[], int n) {
// 	bool flag = false;
// 	for (int i = 0; i < n; i++) {
// 		flag = false;

// 		for (int j = i; j < n+1; j++) {
// 			if (j != i && array[j] == array[i]) {
// 				flag = true;
// 			}
// 		}
// 		if (!flag) {
// 			printf("%d", array[i]);	
// 		}
// 	}	
// }


int main() {
	int array[5] = {1, 2, 1, 1, 5};	
	//int n = sizeof(array)/sizeof(array[0]);
	//print_uniques(array, n); 

	// printf("%zu", sizeof(array)/sizeof(array[0]));

	char myStr[] = "Learn C++, Java and Python!";
	int pos = strcspn(myStr, "\n");
	printf("%d", pos);

	return 0;

}

