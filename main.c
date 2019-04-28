/*

*/

void rotencrypt (char ci[]); //this funcion will be called to encrypt a rotation cipher
void rotdecrypt (char ci[]); //this function will be called to dectrypt a rotation cipher
void subencrypt (char ci[]); // this function when called will encrypt a substitution cipher

#include<stdio.h>

int main (void) {
  char ci[1000]; //"ci[100]" represents a string of characters
  int funct; // this will call certain functions within the switch case
  
  printf ("Please choose a function to execute: "); // prompts choice of function to use after input of text
  scanf ("%d\n", &funct); //scans message

  printf ("\nPlease enter message: "); // prompts entry of the message 
  scanf ("%[^\n]s", ci); // scans the message
  
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
        
    }
}

void rotencrypt (char ci[]) {

  int i, key;

  printf ("\nEnter key: "); // number of times the alphabet will rotate the letters
  scanf ("%d", &key);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) { // identifies lowercase ASCII letters	
        ci[i] = ci[i] + key - 32 ; // changes lowercase ASCII characters to uppercase

	   if (ci[i] > 90) { 
            ci[i] = ci[i] - 26;
        }
      }
    else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] + key;
          
        if(ci[i] > 90) {
            ci[i] = ci[i] - 26;
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
      
       int i;
       char n;

  for (i = 0; ci[i] != '\0'; ++i) {

    if (ci[i] >= 97 && ci[i] <= 122) { 	
        ci[i] = ci[i] - 32 ; 

	   if (ci[i] > 90) { 
            ci[i] = ci[i] - 26;
        }
      }
    }
      
      switch (n) {
          case 'A':
          ci[i] = 'B';
          break;
          case 'B':
          ci[i] = 'V';
          break;
          case 'C':
          ci[i] = 'G';
          break;
          case 'D':
          ci[i] = 'Q';
          break;
          case 'E':
          ci[i] = 'K';
          break;
          case 'F':
          ci[i] = 'M';
          break;
          case 'G':
          ci[i] = 'N';
          break;
          case 'H':
          ci[i] = 'A';
          break;
          case 'I':
          ci[i] = 'D';
          break;
          case 'J':
          ci[i] = 'Z';
          break;
          case 'K':
          ci[i] = 'C';
          break;
          case 'L':
          ci[i] = 'W';
          break;
          case 'M':
          ci[i] = 'S';
          break;
          case 'N':
          ci[i] = 'E';
          break;
          case 'O':
          ci[i] = 'Y';
          break;
          case 'P':
          ci[i] = 'O';
          break;
          case 'Q':
          ci[i] = 'F';
          break;
          case 'R':
          ci[i] = 'J';
          break;
          case 'S':
          ci[i] = 'X';
          break;
          case 'T':
          ci[i] = 'H';
          break;
          case 'U':
          ci[i] = 'T';
          break;
          case 'V':
          ci[i] = 'L';
          break;
          case 'W':
          ci[i] = 'P';
          break;
          case 'X':
          ci[i] = 'U';
          break;
          case 'Y':
          ci[i] = 'I';
          break;
          case 'Z':
          ci[i] = 'R';
          break;   
      }
      printf("%s", ci[i]);
      
  }