/*
*/

void rotencrypt (char ci[]); //this funcion will be called to encrypt a rotation cipher
void rotdecrypt (char ci[]); //this function will be called to decrypt a rotation cipher
void subencrypt (char ci[]); //this function when called will encrypt a substitution cipher
void subdecrypt (char ci[]); //this function when called will decrypt a substitution cipher

#include<stdio.h>

int main (void) {
  char ci[500]; //"ci[100]" represents a string of characters
  int funct; // this will call certain functions within the switch case
  
  
  
  printf("Please choose a function to execute: "); // prompts choice of function to use after input of text
  scanf("%d\n", &funct); //scans message

  printf("\nPlease enter message: "); // prompts entry of the message 
  scanf("%[^\n]s", ci); // scans the message

  
  
/* the switch case calls the function which will be used to encrypt of decrypt the message inputted by the user */

  switch (funct) { 
    case 0: // when 0 is inputted it will call this function
      rotencrypt (ci); // calls the function which will encrypt a rotation cipher
      break; // code exits after execution of function 0
    case 1: // when 1 is inputted it will call this function
      rotdecrypt (ci); // calls the function whihc decrypts
      break; // code exits after exectution of function 1
    case 2:
      subencrypt (ci);
      break;
    case 3:
      subdecrypt (ci);
      break;
        
    }
}

void rotencrypt (char ci[]) {

  int i, key;

  printf ("\nEnter key: ");
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) { //identifies lowercase ASCII charcters	
        ci[i] = ci[i] + key - 32 ; // changes lowercase ASCII characters to uppercase

	   if (ci[i] > 90) {
            ci[i] = ci[i] - 26; //if characters exceed 90 (Z) the code will minus 26 to bring it back to an uppercase letter
        }
      }
    else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] + key; //when the character is uppercase the key will be added to rotate the message 
          
        if(ci[i] > 90) {
            ci[i] = ci[i] - 26; //if code exceeds 90 (Z) the code will minus 26 bringing it back to an uppercase letter
        }
      }
    }

  printf ("\nEncrypted text: %s", ci);
}

void rotdecrypt (char ci[]) {

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
  
  void subencrypt (char ci[]) {
      
      
      
  }