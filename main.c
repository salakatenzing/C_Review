#include <stdio.h>
#include <stdlib.h>

int main() {
        
	int p_value = 501;
	char s_value[] = "S_Add";
	float weight = 54.452;
	printf("Value: %i \n", p_value);
	printf("s_value: %s \n", s_value);
	printf("weight value: %.2f \n", weight);


	int size_val[] = {1, 2, 3, 4, 5};
	int size = sizeof(size_val);
	int array_length = sizeof(size_val)/sizeof(size_val[0]);
	printf("size of array in bytes: %d \n", size);
	printf("length of array: %d \n", array_length);
	return 0;

}
