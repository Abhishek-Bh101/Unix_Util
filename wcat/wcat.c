#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc, char* argv[]) {	
	FILE *fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("The file does not exist");
		return(1);
	}
	char buffer[100];
	while(fgets(buffer, sizeof buffer, fp) != NULL){
		printf("%s", buffer);
	}
}

