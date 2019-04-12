#include<stdio.h>
 
int main()
{
	char cipher[101], a;
	int i, key = 1;
	
	printf("Please enter a message to encrypt: ");
	
	for(i = 0; cipher[i] != '\0'; ++i){
	    
        if ((cipher[i] > 96) && (cipher[i] < 123)){
    
            cipher[i] = cipher[i]-32;
}

	if(str[i] > 65) {
	    
	    cipher[i] = cipher[i] + key;
	       
	   }
	
	
	
	