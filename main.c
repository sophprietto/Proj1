/*

*/

void subencrypt (char ci[]); //this funcion will be called to encrypt a rotation cypher
void subdecrypt (char ci[]); //this function will be called to dectrypt a rotation cypher

#include<stdio.h>

int main (void) {
  char ci[100]; //"ci[100]" represents a string of characters
  int funct; // this will call certain functions within the switch case


  printf ("Please enter a message: "); // prompts entry of the message to encrypt/ decrypt
  scanf ("%s", &ci); // scans the message

  printf ("\nChoose function: "); // prompts choice of function to use after input of text
  scanf ("%d", &funct); //scans message
  
/* the switch case calls the function which will be used to encrypt of decrypt the message inputted by the user*/

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

  printf ("\nEnter key: "); // prompts input of number whichb the cipher will rotate by
  scanf ("%d", &key); // scans input

  for (i = 0; ci[i] != '\0'; ++i) { 

    if (ci[i] >= 97 && ci[i] <= 122) { // identifies lowercase ASCII characters
        ci[i] = ci[i] + key - 32; // changes lowercase to uppercase

	    if ((ci[i]) > 90) {
	        ci[i] = ci[i] - 26;
	    }
    else if(ci[i] >= 65 && ci[i] <= 90) {
     ci[i] = ci[i] + key;
    }
    if (ci[i] > 90) {
        ci[i] = ci[i] - 26 ;
    }
} 
printf ("\nEncrypted text: %s", ci); 
    }
}

void subdecrypt (char ci[]) {

  int i, key;

  printf ("\nEnter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) {		
        ci[i] = ci[i] - key - 32 ;	

	   if (ci[i] < 65) {
            ci[i] = ci[i] + 26;
	    }
      }
      else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] - key;
          
          if(ci[i] < 65) {
              ci[i] = ci[i] + 26;
          }
      }
    }

  printf ("\nDecrypted text: %s", ci);
 
  }
