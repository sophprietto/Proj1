#include<stdio.h>
 
int main()
{
	char ci[101], a;
	int i, key = 1;
	
	printf("Please enter a message to encrypt: ");
	
	gets(ci);
	
	printf("Enter key: ");
	
	scanf("%d", &key);
	
	for(i = 0; i < 200 && ci[i] != '\0'; ++i){
	    
        if ((ci[i] > 96) && (ci[i] < 123)){
    
            ci[i] = ci[i]-32;
    }
}

	if((ci[i] > 65 && ci[i] < 91) {
	    
	  
	    ci[i] = ci[i] + (key % 26);
	       
	   }
	
	scanf("%s", ci);
	printf("%s\n", ci);
	
	