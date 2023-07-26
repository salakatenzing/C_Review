#include <stdio.h>

struct Person {
	char name[50];
	int age;
};

int main(){
	int numPersons;
	printf("Enter the number of persons: ");
	scanf("%d", &numPersons);

	struct Person persons[numPersons];
	int i = 0;
	while(i < numPersons){
		printf("Enter name for person %d: ", i + 1);
		scanf("%49s", persons[i].name);

		printf("Enter age for person %d: ", i + 1);
		scanf("%d", &persons[i].age);

		i++;
	};

	printf("\nPerson Details:\n");
	int j = 0;
	while(j < numPersons){
		printf("Person %d\n", i + 1);
		printf("Name: %s\n", persons[i].name);
		printf("Age: %d\n\n", persons[i].age);
		j++;
	};

	return 0;
};
