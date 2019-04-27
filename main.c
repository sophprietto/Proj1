void subencrypt (char ci[]); //this funcion will be called to encrypt a rotation cypher
void subdecrypt (char ci[]); //this function will be called to dectrypt a rotation cypher

#include<stdio.h>

int main (void) {
  char ci[500]; //"ci[500]" represents a string of characters
  int funct; // this will call certain functions within the switch case


  printf ("Please enter a message to encrypt: "); // prompts entry of the message to encrypt
  scanf ("%s", &ci); // scans the message

  printf ("Choose function: "); // prompts choice of function to use after input of text
  scanf ("%d", &funct); //scans message
  
/* the switch case calls the function whihc will be used to encrypt of decrypt the message inputted by the user*/

  switch (funct) { 
    case 0:
      subencrypt (ci); // calls the function which will encrypt a rotation cipher
      break; // code exits after execution of function 0
    case 1:
      subdecrypt (ci); // calls the function whihc decrypts
      break; // code exits after exectution of function 1
    }
}

void subencrypt (char ci[]) {

  int i, key;

  printf ("Enter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

      if ((ci[i] > 96) && (ci[i] < 123)) {			

	  ci[i] = ci[i] - 32 + key;

	 
	    if ((ci[i]) > 90) {
	        
	        ci[i] = ci[i] - 26;
	    }
	    
    else if(ci[i] >= 65 && ci[i] <= 90){
     ci[i] = ci[i] + key;
 }
    if (ci[i] > 65) {
        ci[i] = ci[i] - 26;
    }
	}

  printf ("%s", ci);

}
}
void subdecrypt (char ci[]) {

  int i, key;

  printf ("Enter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

      if ((ci[i] > 96) && (ci[i] < 123)) {		

	  ci[i] = ci[i] - 32;	

	  if ((ci[i] > 65 && ci[i] < 91)) {	
            ci[i] = ci[i] - key;

	  if ((ci[i]) < 65) {
            ci[i] = ci[i] + 26;
	    }
      }
    }
}
  printf ("%s", ci);
 
  }
