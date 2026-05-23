#include<stdio.h>
#include<stdlib.h>

//P.S Cntr+C for close the programm

int main(){
	printf("Generator passwords on C\n");
	printf("^C for close the programm\n");
	while(1){
		long length;
    	printf("Write the length for password: ");
    	scanf("%d", &length);
    	while (getchar() != '\n');
    	if (length < 1) {
        	length = 8;
        	printf("Invalid length, using default: 8\n");
    	}
    	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%&*+-";
    	int size = sizeof(letters); 
    	srand(time(NULL));
    	char password[length + 1];
    	for(int i = 0; i < length; i++)
    	{
        	int random_index = rand() % size;
        	password[i] = letters[random_index];
    	}
    printf("Generated password: %s\n", password);
	}
	return 0;
}