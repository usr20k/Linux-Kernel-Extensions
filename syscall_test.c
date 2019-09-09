#include <stdio.h>


main () {
	// Simple_add System Call Test
	long result;
	result = syscall(333);
	if(result == 0){

		printf("syscall helloworld successful.\n");

	} else {
	
		printf("syscall helloworld unsuccessful.\n");

	}
	int sum;
	
	long result2;
	result2 = syscall(334, 1, 2, &sum);

	if(result == 0){

		printf("syscall add successful, returned %d.\n", sum);

	} else {
	
		printf("syscall add unsuccessful.\n");

	}
	return 0;
}
