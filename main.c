#include<stdio.h>
 
void main()
{
	char ci[500], a;
	int i, key = ;
	
	
	printf("Please enter a message to encrypt: ");
	scanf("%s", &ci);
	
	printf("Please Enter a key: ");
	scanf("%d", &key);
	
	for(i = 0; ci[i] != '\0'; i++){
	    
        if ((ci[i] > 96) && (ci[i] < 123)){ // 
    
            ci[i] = ci[i]-32;
    }


	if((ci[i] > 65 && ci[i] < 91)) {
	    
	  
	    ci[i] = ci[i] + (key % 26);
	       
	   }
   }

	

	printf("%s", ci);
	
}
