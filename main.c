/* Sophie Prietto C3324702
 Programming Assignment: ENGG 1003
 Input is scanned through the terminal. 
 Encryption and decryption between the two ciphers are chosen through interaction with a switch casefunction in the terminal.
 There are 4 differnet functions which execute the rotataion encryption, decryption, and the substitution encryption and decryption.
 */

void rotencrypt (char ci[]); //this funcion will be called to encrypt a rotation cipher
void rotdecrypt (char ci[]); //this function will be called to decrypt a rotation cipher
void subencrypt (void); //this function when called will encrypt a substitution cipher
void subdecrypt (void); //this function when called will decrypt a substitution cipher

#include<stdio.h>

int main (void) {
  char ci[500];
  int funct; 
  printf("Please choose a function to execute:");
  printf("\nRotation Encryption = 0.\nRotation Decryption = 1.\nSubstitution Encryption = 2.\nSubstition Decryption = 3.\n");
  printf("Function choice: ");
  scanf("%d", &funct); //scans input for function choice

/* the switch case calls the function which will be used to encrypt of decrypt the message inputted by the user */

  switch (funct) { 
    case 0: // when 0 is inputted it will call this function
    printf("Enter key (integer), followed by a single space, followed by a message:\n");// prompts entry of the message 
    rotencrypt (ci); // calls the function which will encrypt a rotation cipher
      break; // code exits after execution of function 0
    case 1: // when 1 is inputted it will call this function 
    printf("Enter key (integer), followed by a single space, followed by a message:\n");// prompts entry of the message 
    rotdecrypt (ci); // calls the function which decrypts
      break; // code exits after exectution of function 1
    case 2: //calls the function which will encrypt a substitution cipher
    printf("Enter key (26 different uppercase characters), followed by a space, followed by a message:\n");// prompts entry of the message 
      subencrypt();
      break;// code exits after execution of function
    case 3: //calls the function which will decrypt a substitution cipher
    printf("Enter key (26 different uppercase characters), followed by a space, followed by a message:\n");// prompts entry of the message 
      subdecrypt();
      break; // code exits after execution of function
    default: // if none of the abvove cases are chose the default will run to prompt the user to choose the correct function
    printf("Please choose a function between 0 and 3."); // prompt for user 
      break;
    }
    printf("\n");
}
void rotencrypt (char ci[]) {

  int i, key;

  scanf ("%d", &key);
  scanf("%[^\n]s", ci); // scans the message

  for (i = 0; ci[i] != '\0'; i++) {
      
    if (ci[i] >= 97 && ci[i] <= 122) { //identifies lowercase ASCII charcters	
        ci[i] = ci[i] + key - 32 ; // changes lowercase ASCII characters to uppercase and rotates

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
  printf ("\nEncrypted text: %s.", ci);
}

void rotdecrypt (char ci[]) {

  int i, key;

  scanf ("%d", &key);
  scanf("%[^\n]s", ci);

  for (i = 0; ci[i] != '\0'; i++) {

    if (ci[i] >= 97 && ci[i] <= 122) {	
        ci[i] = ci[i] - key - 32 ;	//converts lowercase ASCII to uppercase	and rotates 

        if (ci[i] < 65) {
            ci[i] = ci[i] + 26; //adds 26 if character exceeds 65 (A), bring back into uppercase ASCII
	    }
      }
  else if(ci[i] >= 65 && ci[i] <= 90) {
          ci[i] = ci[i] - key; //minuses key to rotate cipher

    if(ci[i] < 65) {
        ci[i] = ci[i] + 26; // if the code goes lower than 65 26 will be added to bring it back to an uppercase letter 
        }
      }  
    }
  printf ("\nDecrypted text: %s", ci);
}
void subencrypt () {
      
    char ci[500]; 
    int i, n;
    char cipheralphabet[26]; // alphabet that would be substituted for the message 
      
    scanf("%s", cipheralphabet);
    scanf("%[^\n]s", ci);
    printf("\nEncrypted message: "); 
    
      for (i = 0; ci[i] != 0; i++) {
          if (ci[i] >= 97 && ci[i] <= 122) { // identifies lowercase ASCII characters 
              ci[i] = ci[i] - 32; // changes lowercase ASCII characters to uppercase
          }
          if (ci[i] >= 65 && ci[i] <= 90) { //identifies uppercase ASCII charcters
              ci[i] = ci[i] - 65;// minuses 65 to 
              n = ci[i];
              ci[i] = cipheralphabet[n];   
          }
              printf("%c", ci[i]);
          }
        }
        
void subdecrypt () {
      
    char ci[500]; 
    int i, n;
    char cipheralphabet[26];
     
    scanf("%s", cipheralphabet);
    scanf("%[^\n]s", ci); // scans the message
    printf("Decrypted Message: ");
    
      for (i = 0; ci[i] != 0; i++) {
          if (ci[i] >= 97 && ci[i] <= 122) { // identifies lowecase ASCII characters
               ci[i] = ci[i] - 32;// changes lowercase ASCII characters to uppercase
           }
         if (ci[i] >= 65 && ci[i] <= 90) {
             n = 0; // makes array being at the start, and resets every time the loop runs 
             
             while (ci[i] != cipheralphabet[n]) {
              n = n + 1; // adds one to the array to move characters
           }
           n = n + 65; // converts back into ASCII characters
           ci[i] = n; 
         }

printf("%c", ci[i]);
    }
  }

  
