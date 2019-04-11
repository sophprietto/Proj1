#include<stdio.h>
 
int main()
{
	char cipher[101], a;
	int i, key;
	
	printf("Please enter a message to encrypt: ");
	
	// figure out how to get it?
	
	printf("Enter key: ");
	
	scanf("%d", &key);
	
	for(i = 1; cipher[i] != '\0'; ++i){ // starts at a ,null, increments +1
	a = cipher[i];
	